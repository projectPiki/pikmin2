#include "kh/DayEndResult.h"
#include "Game/gamePlayData.h"
#include "Game/Piki.h"
#include "Game/DeathMgr.h"
#include "Game/GameSystem.h"
#include "PSSystem/PSSystemIF.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/StickAnimMgr.h"
#include "Controller.h"

namespace kh {
namespace Screen {

static const J2DPane* bufferPanes[2];

static void _Printf(char* format) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	8040284C
 * Size:	00008C
 */
DispDayEndResultItem::DispDayEndResultItem(Game::Result::TNode* resultNode, int p1, int p2, bool check)
{
	m_resultNode = resultNode;
	_14          = 0;
	_10          = 0;
	_0C          = 0;

	FOREACH_NODE(Game::Result::TNode, m_resultNode->m_child, node)
	{
		_0C++;
		_10 += node->_30;
		_14 += node->_38;
	}

	_18 = p1;
	_1C = p2;
	_20 = check;
	_21 = 0;
}

/*
 * --INFO--
 * Address:	804028D8
 * Size:	000294
 */
IncP::IncP()
{
	m_yesterdayRed    = 0;
	m_yesterdayYellow = 0;
	m_yesterdayBlue   = 0;
	m_yesterdayWhite  = 0;
	m_yesterdayPurple = 0;
	m_yesterdayTotal  = 0;

	m_todayRed    = 0;
	m_todayYellow = 0;
	m_todayBlue   = 0;
	m_todayWhite  = 0;
	m_todayPurple = 0;
	m_todayTotal  = 0;

	_30                    = 0;
	_34                    = 0;
	_38                    = 0;
	m_deathsFromWaterToday = 0;
	_40                    = 0;
	_44                    = 0;
	_48                    = 0;
	m_totalDeathsToday     = 0;

	_50                    = 0;
	_54                    = 0;
	_58                    = 0;
	m_deathsFromWaterTotal = 0;
	_60                    = 0;
	_64                    = 0;
	_68                    = 0;
	m_totalDeaths          = 0;

	m_yesterdayRed    = Game::playData->getPikminCount_Yesterday(Game::Red);
	m_yesterdayYellow = Game::playData->getPikminCount_Yesterday(Game::Yellow);
	m_yesterdayBlue   = Game::playData->getPikminCount_Yesterday(Game::Blue);
	m_yesterdayWhite  = Game::playData->getPikminCount_Yesterday(Game::White);
	m_yesterdayPurple = Game::playData->getPikminCount_Yesterday(Game::Purple);
	m_yesterdayTotal  = Game::playData->getPikminCount_Yesterday(Game::AllPikmin);

	m_todayRed    = Game::playData->getPikminCount_Today(Game::Red);
	m_todayYellow = Game::playData->getPikminCount_Today(Game::Yellow);
	m_todayBlue   = Game::playData->getPikminCount_Today(Game::Blue);
	m_todayWhite  = Game::playData->getPikminCount_Today(Game::White);
	m_todayPurple = Game::playData->getPikminCount_Today(Game::Purple);
	m_todayTotal  = Game::playData->getPikminCount_Today(Game::AllPikmin);

	_30                    = Game::deathMgr->get_today(Game::DeathCounter::COD_Unknown0);
	_34                    = Game::deathMgr->get_today(Game::DeathCounter::COD_Unknown1);
	_38                    = Game::deathMgr->get_today(Game::DeathCounter::COD_Unknown2);
	m_deathsFromWaterToday = Game::deathMgr->get_today(Game::DeathCounter::COD_Water);
	_40                    = Game::deathMgr->get_today(Game::DeathCounter::COD_Unknown4);
	_44                    = Game::deathMgr->get_today(Game::DeathCounter::COD_Unknown5);
	_48                    = Game::deathMgr->get_today(Game::DeathCounter::COD_Unknown6);
	m_totalDeathsToday     = Game::deathMgr->get_today(Game::DeathCounter::COD_All);
	Game::deathMgr->account_today();

	_50                    = Game::deathMgr->get_total(Game::DeathCounter::COD_Unknown0);
	_54                    = Game::deathMgr->get_total(Game::DeathCounter::COD_Unknown1);
	_58                    = Game::deathMgr->get_total(Game::DeathCounter::COD_Unknown2);
	m_deathsFromWaterTotal = Game::deathMgr->get_total(Game::DeathCounter::COD_Water);
	_60                    = Game::deathMgr->get_total(Game::DeathCounter::COD_Unknown4);
	_64                    = Game::deathMgr->get_total(Game::DeathCounter::COD_Unknown5);
	_68                    = Game::deathMgr->get_total(Game::DeathCounter::COD_Unknown6);
	m_totalDeaths          = Game::deathMgr->get_total(Game::DeathCounter::COD_All);

	m_pikminUnlockedFlag = (Game::playData->hasContainer(Game::Red)) | (Game::playData->hasContainer(Game::Yellow) << 1)
	                     | (Game::playData->hasContainer(Game::Blue) << 2) | (Game::playData->hasContainer(Game::White) << 3)
	                     | (Game::playData->hasContainer(Game::Purple) << 4);

	Game::playData->setPikminCounts_Yesterday();
}

/*
 * --INFO--
 * Address:	80402B6C
 * Size:	000030
 */
DispDayEndResultIncP::DispDayEndResultIncP(const IncP* incP)
{
	m_pikminInfo = const_cast<IncP*>(incP);
	_0D          = 0;
	_0C          = 0;
}

/*
 * --INFO--
 * Address:	80402B9C
 * Size:	000050
 */
DispDayEndResultMail::DispDayEndResultMail(JKRHeap* heap, MailCategory category)
{
	m_heap         = heap;
	_0C            = 0;
	m_mailCategory = category;
	_14            = 0;
	_18            = 0;
	_1C            = -1;
	m_dayCount     = Game::gameSystem->m_timeMgr->m_dayCount;
}

/*
 * --INFO--
 * Address: ........
 * Size:	0000b4
 */
ObjDayEndResultBase::ObjDayEndResultBase()
{
	m_resultTitleMgr          = nullptr;
	m_resultTitleAnmTransform = nullptr;
	m_resultTitleAnmColor     = nullptr;
	_4C                       = nullptr;
	_50                       = nullptr;
	_54                       = nullptr;
	_58                       = nullptr;
	_5C                       = nullptr;
	_70                       = nullptr;
	_74                       = nullptr;
	_78                       = nullptr;
	_6C                       = 0.0f;
	_68                       = 0.0f;
	_64                       = 0.0f;
	_60                       = 0.0f;
	_48                       = 0.0f;
	_44                       = 0.0f;
	_88                       = 0.0f;
	_84                       = 0.0f;
	_80                       = 0.0f;
	_7C                       = 0.0f;
	m_nextBtnFadePane         = nullptr;
	_95                       = 255;
	_94                       = 255;
	m_flags                   = 0;
}

/*
 * --INFO--
 * Address:	80402BEC
 * Size:	0000FC
 */
void ObjDayEndResultBase::doCreate(JKRArchive* archive)
{
	m_resultTitleMgr = new P2DScreen::Mgr_tuning;
	m_resultTitleMgr->set("result_title.blo", 0x01040000, archive);
	m_resultTitleAnmTransform
	    = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_title.bck", archive)));
	m_resultTitleAnmColor
	    = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_title.bpk", archive)));

	m_resultTitleMgr->setAnimation(m_resultTitleAnmTransform);
	m_resultTitleMgr->setAnimation(m_resultTitleAnmColor);
	m_nextBtnFadePane = khUtilFadePane::create(m_resultTitleMgr, 'Nbtn2', 8);
	m_nextBtnFadePane->fadeout();
	m_nextBtnFadePane->set_init_alpha(0);
}

/*
 * --INFO--
 * Address:	80402CE8
 * Size:	000098
 */
bool ObjDayEndResultBase::doStart(const ::Screen::StartSceneArg* sceneArg)
{
	if (sceneArg && sceneArg->_04) {
		m_flags &= ~0x8;
	} else {
		m_flags |= 0x8;
	}

	setFadeinFrm();
	setInfAlpha(_70->search('Nall'));

	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80402D80
 * Size:	000044
 */
void ObjDayEndResultBase::doUpdateFinish()
{
	setFadeoutFrm();
	m_nextBtnFadePane->fadeout();
	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_RECEIPT, 0);
}

/*
 * --INFO--
 * Address:	80402DC4
 * Size:	0000F4
 */
bool ObjDayEndResultBase::doUpdateFadein()
{
	updateCommon();
	_50->m_currentFrame = _60;
	J2DPane* itemPane   = _4C->search('NitemW');
	itemPane->animationTransform();

	_60 += msVal._08;

	J2DPane* allPane = _70->search('Nall');
	allPane->setAlpha((_60 - _7C) / (_80 - _7C) * 255.0f);

	return (u8)(_60 >= _80);
}

/*
 * --INFO--
 * Address:	80402EB8
 * Size:	000010
 */
void ObjDayEndResultBase::doUpdateFadeinFinish()
{
	_94 = 0;
	_95 = 0;
}

/*
 * --INFO--
 * Address:	80402EC8
 * Size:	0000FC
 */
bool ObjDayEndResultBase::doUpdateFadeout()
{
	updateCommon();
	_50->m_currentFrame = _60;
	J2DPane* itemPane   = _4C->search('NitemW');
	itemPane->animationTransform();

	_60 += msVal._08;

	J2DPane* allPane = _70->search('Nall');
	allPane->setAlpha((1.0f - (_60 - _84) / (_88 - _84)) * 255.0f);

	return (u8)(_60 >= _88);
}

/*
 * --INFO--
 * Address:	80402FC4
 * Size:	000118
 */
void ObjDayEndResultBase::doDraw(Graphics& gfx)
{
	gfx.m_orthoGraph.setPort();

	m_resultTitleMgr->setXY(msVal._1C, 0.0f);
	m_resultTitleMgr->draw(gfx, gfx.m_orthoGraph);

	gfx.m_orthoGraph.setPort();
	_70->setXY(msVal._14, 0.0f);
	_70->draw(gfx, gfx.m_orthoGraph);

	_4C->setXY(msVal._18, 0.0f);
}

/*
 * --INFO--
 * Address:	804030DC
 * Size:	000280
 */
void ObjDayEndResultBase::updateCommon()
{
	m_resultTitleAnmTransform->m_currentFrame = _44;
	m_resultTitleAnmColor->m_currentFrame     = _48;
	m_resultTitleMgr->animation();

	_44++;
	_48++;

	if (_44 >= m_resultTitleAnmTransform->m_maxFrame) {
		_44 = 0.0f;
	}

	if (_48 >= m_resultTitleAnmColor->m_maxFrame) {
		_48 = 0.0f;
	}

	_58->m_currentFrame = _68;
	_5C->m_currentFrame = _6C;
	_4C->animation();

	_68++;
	_6C++;

	if (_68 >= _58->m_maxFrame) {
		_68 = 0.0f;
	}

	if (_6C >= _5C->m_maxFrame) {
		_6C = 0.0f;
	}

	_54->m_currentFrame = _64;
	_4C->search('Ntitle')->animationTransform();

	_64++;

	if (_64 >= _54->m_maxFrame) {
		_64 = 0.0f;
	}

	_74->m_currentFrame = _78;
	_70->animation();

	_78++;

	if (_78 >= _74->m_maxFrame) {
		_78 = 0.0f;
	}

	m_resultTitleMgr->update();
}

/*
 * --INFO--
 * Address:	8040335C
 * Size:	000098
 */
void ObjDayEndResultBase::setFadeinFrm()
{
	if (m_flags & 0x8) {
		_7C = getFadeinDownMinFrm();
		_80 = getFadeinDownMaxFrm();
	} else {
		_7C = getFadeinUpMinFrm();
		_80 = getFadeinUpMaxFrm();
	}

	_60 = _7C;
}

/*
 * --INFO--
 * Address:	804033F4
 * Size:	000098
 */
void ObjDayEndResultBase::setFadeoutFrm()
{
	if (m_flags & 0x10) {
		_84 = getFadeoutDownMinFrm();
		_88 = getFadeoutDownMaxFrm();
	} else {
		_84 = getFadeoutUpMinFrm();
		_88 = getFadeoutUpMaxFrm();
	}

	_60 = _84;
}

/*
 * --INFO--
 * Address:	8040348C
 * Size:	000144
 */
ObjDayEndResultItem::ObjDayEndResultItem()
{
	m_status       = ITEMSTATUS_ForceScroll;
	_9C            = nullptr;
	_A0            = 0.0f;
	_A8            = nullptr;
	_A4            = nullptr;
	_B0            = nullptr;
	_AC            = nullptr;
	_D0            = 0;
	_CC            = 0;
	_C8            = 0;
	_C4            = 0;
	m_stickAnimMgr = nullptr;
	_B8            = nullptr;
	_C0            = nullptr;
	_BC            = nullptr;
	_D4            = 0.0f;
	_DC            = 0.0f;
	_E0            = -6;
	_D8            = nullptr;
	_E4            = ObjDayEndResultBase::msVal._24;
	_E8            = 0;
	_F0            = 0;
	_EC            = 0;
	_F4            = 0;
	_F9            = 0;
	_F8            = 0;
}

/*
 * --INFO--
 * Address:	8040367C
 * Size:	0007AC
 */
void ObjDayEndResultItem::doCreate(JKRArchive* archive)
{
	ObjDayEndResultBase::doCreate(archive);

	_4C = new P2DScreen::Mgr_tuning;
	_4C->set("result_item.blo", 0x00040000, archive);
	void* resource = JKRFileLoader::getGlbResource("result_item.bck", archive);
	_50            = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	_54            = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	_9C            = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));

	_58 = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_item.btk", archive)));
	_5C = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_item.brk", archive)));

	_4C->setAnimation(_58);
	_4C->setAnimation(_5C);

	_4C->search('NitemW')->setAnimation(_50);
	_4C->search('Ntitle')->setAnimation(_54);
	_4C->search('N_3d')->setAnimation(_9C);

	_70 = new P2DScreen::Mgr_tuning;
	_70->set("result_item_constellation.blo", 0x40000, archive);

	_74 = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_item_constellation.bpk", archive)));
	_70->setAnimation(_74);

	og::Screen::setCallBackMessage(_4C);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(501, "disp member err");
	}

	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	if (dispResult->m_item._0C > 6) {
		m_flags |= 0x1;
		_D8 = dispResult->m_item._0C - 6;
	}

	f32 y1 = _4C->search('Nsetp00')->getBounds()->i.y;
	f32 y2 = _4C->search('Nsetp01')->getBounds()->i.y;

	_DC = y2 - y1;
	_D4 = _DC * (1 - _E0);

	u64 code;
	if (dispResult->m_item._20) {
		J2DPane* paneFinMen     = _4C->search('Nfin_men');
		paneFinMen->m_isVisible = false;

		J2DPane* paneCoMenu     = _4C->search('Nco_menu');
		paneCoMenu->m_isVisible = true;

		code = 'Pcomp01';
	} else {
		J2DPane* paneFinMen     = _4C->search('Nfin_men');
		paneFinMen->m_isVisible = true;

		J2DPane* paneCoMenu     = _4C->search('Nco_menu');
		paneCoMenu->m_isVisible = false;

		code = 'Pfin01';
	}

	_C8 = 0;
	_C4 = dispResult->m_item._1C - dispResult->m_item._14;

	_A4 = og::Screen::setCallBack_CounterRV(_4C, 'Ptokyop1', &_C8, 9, true, false, archive);

	_A8 = og::Screen::setCallBack_CounterRV(_4C, code, &_C4, 9, true, false, archive);

	_AC = og::Screen::setCallBack_CounterRV(_4C, 'Pmad00_1', &_CC, 9, false, false, archive);

	_B0 = og::Screen::setCallBack_CounterRV(_4C, 'Pmad01_1', &_D0, 9, false, false, archive);

	og::Screen::CallBack_Picture* callback = og::Screen::setCallBack_3DStick(archive, _4C, 'P3d');
	m_stickAnimMgr                         = new og::Screen::StickAnimMgr(callback);
	m_stickAnimMgr->stickUpDown();

	_BC = khUtilFadePane::create(_4C, 'Nyame_u', 16);
	_BC->fadeout();

	_C0 = khUtilFadePane::create(_4C, 'Nyame_l', 16);
	_C0->fadeout();

	_B8 = khUtilFadePane::create(_4C, 'P3d', 16);
	_B8->add(_4C->search('N_3d'));
	_B8->fadeout();

	J2DPane* paneSetp02     = _4C->search('Nsetp02');
	paneSetp02->m_isVisible = false;
	J2DPane* paneSetp03     = _4C->search('Nsetp03');
	paneSetp03->m_isVisible = false;
	J2DPane* paneSetp04     = _4C->search('Nsetp04');
	paneSetp04->m_isVisible = false;
	J2DPane* paneSetp05     = _4C->search('Nsetp05');
	paneSetp05->m_isVisible = false;

	J2DPane* paneNbtn1     = m_resultTitleMgr->search('Nbtn1');
	paneNbtn1->m_isVisible = false;

	if (dispResult->m_item._21) {
		m_status = ITEMSTATUS_Normal;
		_C8      = dispResult->m_item._14;
		_C4      = dispResult->m_item._1C;
		_A4->show();
		_A8->show();
		m_nextBtnFadePane->fadein();
		_E0 = 0;
		_D4 = 0.0f;
		if (m_flags & 0x1) {
			_C0->fadein();
			_B8->fadein();
		}
		m_flags |= 0x40;
	}

	dispResult->m_item._21 = true;
}

/*
 * --INFO--
 * Address:	80403E28
 * Size:	000108
 */
bool ObjDayEndResultItem::doStart(const ::Screen::StartSceneArg* sceneArg)
{
	if (sceneArg && sceneArg->_04) {
		m_flags &= ~0x8;
	} else {
		m_flags |= 0x8;
	}

	if (m_flags & 0x8) {
		_7C = getFadeinDownMinFrm();
		_80 = getFadeinDownMaxFrm();
	} else {
		_7C = getFadeinUpMinFrm();
		_80 = getFadeinUpMaxFrm();
	}

	_60 = _7C;

	J2DPane* pane = _70->search('Nall');
	setInfAlpha(pane);
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80403F30
 * Size:	00011C
 */
bool ObjDayEndResultItem::doUpdateFadein()
{
	updateCommon();
	_50->m_currentFrame = _60;
	_4C->search('NitemW')->animationTransform();

	_60 += ObjDayEndResultBase::msVal._08;

	J2DPane* pane = _70->search('Nall');
	pane->setAlpha((_60 - _7C) / (_80 - _7C) * 255.0f);

	bool result;
	if (_60 >= _80) {
		result = true;
	} else {
		result = false;
	}

	_4C->update();
	return result;
}

/*
 * --INFO--
 * Address:	8040404C
 * Size:	0002CC
 */
bool ObjDayEndResultItem::doUpdate()
{
	updateCommon();
	_4C->update();

	switch (m_status) {
	case ITEMSTATUS_Normal:
		statusNormal();
		break;
	case ITEMSTATUS_ScrollUp:
		statusScrollUp();
		break;
	case ITEMSTATUS_ScrollDown:
		statusScrollDown();
		break;
	case ITEMSTATUS_ForceScroll:
		statusForceScroll();
		break;
	case ITEMSTATUS_DrumRoll:
		statusDrumRoll();
		break;
	case ITEMSTATUS_TotalValue:
		statusTotalValue();
		break;
	}

	if (getGamePad()->m_padButton.m_buttonDown & 0x100) {
		if (getGamePad()->m_padButton.m_buttonDown & 0x100 && !isFlag(0x40)) {
			m_flags |= 0x20;
		}

		if (m_status == ITEMSTATUS_Normal) {
			DispDayEndResultIncP* dispIncP = static_cast<DispDayEndResultIncP*>(getDispMember());
			::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_INC_P, dispIncP, 0, 1);

			if (getOwner()->setScene(setArg)) {
				SArgDayEndResultIncP argIncP;
				getOwner()->startScene(&argIncP);

				m_flags &= ~0x10;
			}
		}
	}

	if (m_flags & 0x20) {
		_E0      = _D8;
		_D4      = -_DC * _E0;
		_E8      = 0;
		m_status = ITEMSTATUS_Normal;

		if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
			JUT_PANICLINE(664, "disp member err");
		}

		DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
		_C8                          = dispResult->m_item._14;
		_C4                          = dispResult->m_item._1C;
		_A4->startPuyoUp(1.0f);
		_A8->startPuyoUp(1.0f);
		m_nextBtnFadePane->fadein();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0);
		m_flags &= ~0x20;
		m_flags |= 0x40;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80404318
 * Size:	000124
 */
bool ObjDayEndResultItem::doUpdateFadeout()
{
	updateCommon();
	_50->m_currentFrame = _60;
	_4C->search('NitemW')->animationTransform();

	_60 += ObjDayEndResultBase::msVal._08;

	J2DPane* pane = _70->search('Nall');
	pane->setAlpha((1.0f - (_60 - _84) / (_88 - _84)) * 255.0f);

	bool result;
	if (_60 >= _88) {
		result = true;
	} else {
		result = false;
	}

	_4C->update();
	return result;
}

/*
 * --INFO--
 * Address:	8040443C
 * Size:	0006C4
 */
void ObjDayEndResultItem::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);

	gfx.m_orthoGraph.setPort();

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(720, "disp member err");
	}

	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	J2DPane* pane1               = _4C->search('NALL2');
	J2DPane* pane2               = _4C->search('N_3d');

	J2DPane* panes[2] = { const_cast<J2DPane*>(bufferPanes[0]), const_cast<J2DPane*>(bufferPanes[1]) };

	panes[0]       = _4C->search('Nsetp00');
	J2DPane* pane3 = _4C->search('Nsetp01');

	u64 icons[2] = { 'iPicon00', 'iPicon01' };
	u64 names[2] = { 'Piname00', 'Piname01' };

	pane1->m_isVisible    = true;
	pane2->m_isVisible    = false;
	panes[0]->m_isVisible = false;
	pane3->m_isVisible    = false;
	panes[1]              = pane3;

	_4C->draw(gfx, gfx.m_orthoGraph);
	u32 left   = 0;
	u32 top    = 0;
	u32 width  = 0;
	u32 height = 0;
	GXSetScissor(left, top, width, height);
	GXSetScissor(left, _EC, width, _F0);

	pane1->m_isVisible = false;
	pane2->m_isVisible = false;

	f32 p1 = 2.0f * _DC;

	for (int i = 0; i < 2; i++) {
		panes[i]->add(0.0f, _D4 - p1);
	}

	for (int i = 0; i < 2; i++) {
		_4C->search(icons[i])->m_isVisible = true;
		_4C->search(names[i])->m_isVisible = true;
		_AC->show();
	}

	int i = 0;
	for (Game::Result::TNode* resultNode = dispResult->m_item.m_resultNode; resultNode;
	     resultNode                      = static_cast<Game::Result::TNode*>(resultNode->m_next), i++) {
		f32 check = i * _DC + _D4;
		if (check < -_DC || _F0 < check) {
			panes[i]->add(0.0f, p1);
			continue;
		}

		panes[i]->m_isVisible     = true;
		panes[i + 1]->m_isVisible = false;
		panes[i % 2]->add(0.0f, p1);

		JUTTexture* texture = resultNode->m_texture;
		setTex(_4C, icons[i], texture->_20);
	}
	/*
stwu     r1, -0xa0(r1)
mflr     r0
stw      r0, 0xa4(r1)
stfd     f31, 0x90(r1)
psq_st   f31, 152(r1), 0, qr0
stfd     f30, 0x80(r1)
psq_st   f30, 136(r1), 0, qr0
stmw     r20, 0x50(r1)
mr       r31, r4
mr       r30, r3
addi     r3, r31, 0xbc
lis      r4, lbl_80498830@ha
lwz      r12, 0xbc(r31)
addi     r26, r4, lbl_80498830@l
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, lbl_805200A8@sda21(r2)
lfs      f3, 0x1c(r3)
mr       r4, r31
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r5, r31, 0xbc
fadds    f2, f3, f2
lwz      r3, 0x38(r30)
fadds    f0, f1, f0
stfs     f2, 0x140(r3)
stfs     f0, 0x144(r3)
lwz      r3, 0x38(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xbc
lwz      r12, 0xbc(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, lbl_805200A8@sda21(r2)
lfs      f3, 0x14(r3)
mr       r4, r31
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r5, r31, 0xbc
fadds    f2, f3, f2
lwz      r3, 0x70(r30)
fadds    f0, f1, f0
stfs     f2, 0x140(r3)
stfs     f0, 0x144(r3)
lwz      r3, 0x70(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, lbl_805200A8@sda21(r2)
lfs      f3, 0x18(r3)
addi     r3, r31, 0xbc
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
fadds    f2, f3, f2
lwz      r4, 0x4c(r30)
fadds    f0, f1, f0
stfs     f2, 0x140(r4)
stfs     f0, 0x144(r4)
lwz      r12, 0xbc(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804045A0
addi     r3, r26, 0
addi     r5, r26, 0xd0
li       r4, 0x2d0
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804045A0:
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r29, r3
lwz      r3, 0x4c(r30)
lis      r4, 0x414C4C32@ha
li       r5, 0x4e
lwz      r12, 0(r3)
addi     r6, r4, 0x414C4C32@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r27, r3
lwz      r3, 0x4c(r30)
lis      r4, 0x4E5F3364@ha
li       r5, 0
lwz      r12, 0(r3)
addi     r6, r4, 0x4E5F3364@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r28, r3
lwz      r3, 0x4c(r30)
lwz      r7, lbl_80520EC8@sda21(r2)
lis      r5, 0x74703030@ha
lwz      r12, 0(r3)
lis      r4, 0x004E7365@ha
lwz      r0, lbl_80520ECC@sda21(r2)
addi     r6, r5, 0x74703030@l
lwz      r12, 0x3c(r12)
addi     r5, r4, 0x004E7365@l
stw      r7, 0x18(r1)
stw      r0, 0x1c(r1)
mtctr    r12
bctrl
stw      r3, 0x18(r1)
lis      r5, 0x74703031@ha
lwz      r3, 0x4c(r30)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74703031@l
lwz      r12, 0(r3)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfd      f3, 0xe0(r26)
li       r7, 1
lfd      f2, 0xe8(r26)
li       r0, 0
lfd      f1, 0xf0(r26)
mr       r4, r31
lfd      f0, 0xf8(r26)
addi     r20, r1, 0x18
stfd     f3, 0x30(r1)
addi     r5, r31, 0xbc
lwz      r6, 0x18(r1)
stfd     f2, 0x38(r1)
stfd     f1, 0x20(r1)
stfd     f0, 0x28(r1)
stb      r7, 0xb0(r27)
stb      r0, 0xb0(r28)
stb      r0, 0xb0(r6)
stb      r0, 0xb0(r3)
stw      r3, 0x1c(r1)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
li       r0, 0
addi     r3, r1, 0x14
stw      r0, 0x14(r1)
addi     r4, r1, 0x10
addi     r5, r1, 0xc
addi     r6, r1, 8
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl       GXGetScissor
lwz      r3, 0x14(r1)
lwz      r4, 0xec(r30)
lwz      r5, 0xc(r1)
lwz      r6, 0xf0(r30)
bl       GXSetScissor
li       r0, 0
lfs      f1, lbl_805200C0@sda21(r2)
stb      r0, 0xb0(r27)
li       r21, 0
stb      r0, 0xb0(r28)
lfs      f0, 0xdc(r30)
fmuls    f30, f1, f0

lbl_80404708:
lwz      r3, 0(r20)
lfs      f0, 0xd4(r30)
lwz      r12, 0(r3)
fsubs    f2, f0, f30
lfs      f1, lbl_805200A8@sda21(r2)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
addi     r21, r21, 1
addi     r20, r20, 4
cmpwi    r21, 2
blt      lbl_80404708
mr       r22, r30
addi     r20, r1, 0x30
addi     r21, r1, 0x20
li       r23, 0

lbl_80404748:
lwz      r3, 0x4c(r30)
lwz      r5, 0(r20)
lwz      r12, 0(r3)
lwz      r6, 4(r20)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x4c(r30)
lwz      r5, 0(r21)
lwz      r12, 0(r3)
lwz      r6, 4(r21)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0xac(r22)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
addi     r23, r23, 1
addi     r21, r21, 8
cmpwi    r23, 2
addi     r22, r22, 4
addi     r20, r20, 8
blt      lbl_80404748
lwz      r3, 0x18(r29)
li       r22, 0
lfd      f31, lbl_805200C8@sda21(r2)
lis      r29, 0x4330
lwz      r21, 0x24(r3)
b        lbl_80404978

lbl_804047D4:
stw      r22, 0x44(r1)
clrlwi   r24, r22, 0x1f
lfs      f3, 0xdc(r30)
stw      r29, 0x40(r1)
lfs      f1, 0xd4(r30)
fneg     f0, f3
lfd      f2, 0x40(r1)
lwz      r20, 0x38(r21)
fsubs    f2, f2, f31
fmadds   f1, f2, f3, f1
fcmpo    cr0, f1, f0
blt      lbl_80404824
lwz      r3, 0xf0(r30)
lis      r0, 0x4330
stw      r0, 0x40(r1)
stw      r3, 0x44(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f31
fcmpo    cr0, f0, f1
bge      lbl_8040484C

lbl_80404824:
slwi     r0, r24, 2
addi     r3, r1, 0x18
lwzx     r3, r3, r0
fmr      f2, f30
lfs      f1, lbl_805200A8@sda21(r2)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
b        lbl_80404970

lbl_8040484C:
cntlzw   r0, r24
addi     r3, r1, 0x18
rlwinm   r0, r0, 0x1d, 0x16, 0x1d
slwi     r23, r24, 2
lwzx     r4, r3, r0
li       r5, 0
lwzx     r3, r3, r23
li       r0, 1
stb      r5, 0xb0(r4)
fmr      f2, f30
lfs      f1, lbl_805200A8@sda21(r2)
stb      r0, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r4, 0x2c(r21)
slwi     r24, r24, 3
addi     r0, r1, 0x30
lwz      r3, 0x4c(r30)
add      r6, r0, r24
lwz      r7, 0x20(r4)
lwz      r5, 0(r6)
lwz      r6, 4(r6)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG
lwz      r26, 0x40(r21)
li       r3, 0
lwz      r25, 0x44(r21)
xor      r0, r26, r3
xor      r3, r25, r3
or.      r0, r3, r0
bne      lbl_804048FC
lwz      r3, 0x4c(r30)
addi     r0, r1, 0x20
add      r6, r0, r24
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_80404938

lbl_804048FC:
lwz      r3, 0x4c(r30)
addi     r0, r1, 0x20
add      r6, r0, r24
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 1
li       r4, 0
addc     r0, r25, r0
stw      r0, 0x1c(r3)
adde     r0, r26, r4
stw      r0, 0x18(r3)

lbl_80404938:
add      r3, r30, r23
stw      r20, 0xcc(r3)
lwz      r3, 0xac(r3)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
mr       r4, r31
addi     r5, r31, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_80404970:
lwz      r21, 0x18(r21)
addi     r22, r22, 1

lbl_80404978:
cmplwi   r21, 0
bne      lbl_804047D4
addi     r24, r1, 0x18
addi     r21, r1, 0x30
addi     r20, r1, 0x20
b        lbl_80404A5C

lbl_80404990:
clrlwi   r25, r22, 0x1f
rlwinm   r23, r22, 2, 0x1d, 0x1d
cntlzw   r0, r25
li       r5, 0
rlwinm   r0, r0, 0x1d, 0x16, 0x1d
lwzx     r3, r24, r23
lwzx     r4, r24, r0
li       r0, 1
fmr      f2, f30
lfs      f1, lbl_805200A8@sda21(r2)
stb      r5, 0xb0(r4)
stb      r0, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
slwi     r25, r25, 3
add      r6, r21, r25
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 0
add      r6, r20, r25
stb      r0, 0xb0(r3)
lwz      r3, 0x4c(r30)
lwz      r5, 0(r6)
lwz      r12, 0(r3)
lwz      r6, 4(r6)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r4, 0
addi     r0, r23, 0xac
stb      r4, 0xb0(r3)
lwzx     r3, r30, r0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
mr       r4, r31
addi     r5, r31, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r22, r22, 1

lbl_80404A5C:
cmplwi   r22, 6
blt      lbl_80404990
lwz      r3, 0x14(r1)
lwz      r4, 0x10(r1)
lwz      r5, 0xc(r1)
lwz      r6, 8(r1)
bl       GXSetScissor
lwz      r0, 0x90(r30)
clrlwi.  r0, r0, 0x1f
beq      lbl_80404ADC
lwz      r0, 0x98(r30)
cmpwi    r0, 3
beq      lbl_80404ADC
cmpwi    r0, 4
beq      lbl_80404ADC
cmpwi    r0, 5
beq      lbl_80404ADC
li       r7, 0
li       r0, 1
stb      r7, 0xb0(r27)
mr       r4, r31
lwz      r6, 0x18(r1)
addi     r5, r31, 0xbc
stb      r0, 0xb0(r28)
lwz      r3, 0x1c(r1)
stb      r7, 0xb0(r6)
stb      r7, 0xb0(r3)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_80404ADC:
psq_l    f31, 152(r1), 0, qr0
lfd      f31, 0x90(r1)
psq_l    f30, 136(r1), 0, qr0
lfd      f30, 0x80(r1)
lmw      r20, 0x50(r1)
lwz      r0, 0xa4(r1)
mtlr     r0
addi     r1, r1, 0xa0
blr
	*/
}

/*
 * --INFO--
 * Address:	80404B00
 * Size:	0001D4
 */
void ObjDayEndResultItem::statusNormal()
{
	if (m_flags & 0x1) {
		if (_E0 == 0) {
			_BC->fadeout();
			_C0->fadein();
			m_stickAnimMgr->stickDown();
		} else if (_E0 == _D8) {
			_BC->fadein();
			_C0->fadeout();
			m_stickAnimMgr->stickUp();
		} else {
			_BC->fadein();
			_C0->fadein();
			m_stickAnimMgr->stickUpDown();
		}
		_B8->fadein();
	} else {
		_BC->fadeout();
		_C0->fadeout();
		_B8->fadeout();
	}

	if (m_flags & 0x1) {
		if (getGamePad()->m_padButton.m_mask & 0x08000008 && _E0 != 0) {
			_E0--;
			if (_F8 >= 1) {
				_E4 = ObjDayEndResultBase::msVal._28;
			} else {
				_F8++;
			}

			_F9      = 0;
			m_status = ITEMSTATUS_ScrollUp;
			statusScrollUp();
		} else if (getGamePad()->m_padButton.m_mask & 0x04000004 && _E0 != _D8) {
			_E0++;
			if (_F9 >= 1) {
				_E4 = ObjDayEndResultBase::msVal._28;
			} else {
				_F9++;
			}

			_F8      = 0;
			m_status = ITEMSTATUS_ScrollDown;
			statusScrollDown();
		} else {
			_F9 = 0;
			_F8 = 0;
			_E4 = ObjDayEndResultBase::msVal._24;
		}
	}
}

/*
 * --INFO--
 * Address:	80404CD4
 * Size:	0000F4
 */
void ObjDayEndResultItem::statusScrollUp()
{
	f32 p1 = _DC * (_E0 + 1) * (_E4 - _E8);
	_D4    = -((_E8 * (_DC * _E0) + p1) / _E4);
	if (_E8++ == _E4) {
		_E8      = 1;
		m_status = ITEMSTATUS_Normal;
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/*
 * --INFO--
 * Address:	80404DC8
 * Size:	0000F4
 */
void ObjDayEndResultItem::statusScrollDown()
{
	f32 p1 = _DC * (_E0 - 1) * (_E4 - _E8);
	_D4    = -((_E8 * (_DC * _E0) + p1) / _E4);
	if (_E8++ == _E4) {
		_E8      = 1;
		m_status = ITEMSTATUS_Normal;
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/*
 * --INFO--
 * Address:	80404EBC
 * Size:	0001D4
 */
void ObjDayEndResultItem::statusForceScroll()
{
	f32 p1 = _DC * (_E0 - 1) * (_E4 - _E8);
	_D4    = -((_E8 * (_DC * _E0) + p1) / _E4);
	if (_E8++ == _E4) {
		if (_E0 == _D8) {
			_E8      = 1;
			m_status = ITEMSTATUS_DrumRoll;
		} else {
			if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
				JUT_PANICLINE(958, "disp member err");
			}

			DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

			int i                           = 0;
			Game::Result::TNode* resultNode = static_cast<Game::Result::TNode*>(dispResult->m_item.m_resultNode->m_child);
			for (resultNode; resultNode && i != _E0 + 6; resultNode = static_cast<Game::Result::TNode*>(resultNode->m_next), i++) { }

			if (resultNode && resultNode->_34 == 0) {
				_C8 += resultNode->_38;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_COIN_COUNT, 0);
			}
			_E8 = 1;
			_E0++;
		}
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/*
 * --INFO--
 * Address:	80405090
 * Size:	00001C
 */
void ObjDayEndResultItem::statusDrumRoll()
{
	_F4      = ObjDayEndResultBase::msVal._50;
	m_status = ITEMSTATUS_TotalValue;
}

/*
 * --INFO--
 * Address:	804050AC
 * Size:	0000C8
 */
void ObjDayEndResultItem::statusTotalValue()
{
	if (_F4 == 0) {
		if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
			JUT_PANICLINE(1011, "disp member err");
		}

		DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
		_C4                          = dispResult->m_item._1C;
		_A8->startPuyoUp(1.0f);
		m_nextBtnFadePane->fadein();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0);
		m_status = ITEMSTATUS_Normal;
		m_flags |= 0x40;
	} else {
		_F4--;
	}
}

/*
 * --INFO--
 * Address:	80405174
 * Size:	0003C8
 */
void ObjDayEndResultItem::updateCommon()
{
	ObjDayEndResultBase::updateCommon();

	Vector3f topLeft    = _4C->search('Nmask')->getGlbVtx(POS_TOP_LEFT);
	Vector3f centerLeft = _4C->search('Nmask')->getGlbVtx(POS_CENTER_LEFT);

	// this is so dumb. SO DUMB.
	f32 yTop;
	_EC = 0.5f + (yTop = topLeft.y);
	_F0 = centerLeft.y - yTop;

	_4C->animation();

	_9C->m_currentFrame = _A0;
	_4C->search('N_3d')->animationTransform();

	_A0++;
	if (_A0 >= _9C->m_maxFrame) {
		_A0 = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8040553C
 * Size:	00019C
 */
ObjDayEndResultIncP::ObjDayEndResultIncP()
{
	_CC  = 0;
	_D0  = 0;
	_D4  = 0;
	_D8  = 0;
	_DC  = 0;
	_E0  = 0;
	_E4  = 0;
	_E8  = 0;
	_EC  = 0;
	_F0  = 0;
	_F4  = 0;
	_F8  = 0;
	_FC  = 0;
	_100 = 0;
	_104 = 0;
	_108 = 0;
	_10C = 0;
	_110 = 0;
	_114 = 0;
	_118 = 0;
	_11C = 0;
	_120 = 0;
	_124 = 0;
	_128 = 0;
	_12C = 0;
	_130 = 0;
	_134 = 0;
	_138 = 0;

	m_status   = INCPSTATUS_Slot;
	_4C        = nullptr;
	_A0        = nullptr;
	_9C        = nullptr;
	_A4        = 399.0f;
	_A8        = 404.0f;
	_AC        = nullptr;
	_B8        = 10;
	_B4        = nullptr;
	_B0        = nullptr;
	m_scaleMgr = nullptr;
	_154       = ObjDayEndResultBase::msVal._50;
	_13C[0]    = 0.0f;
	_13C[1]    = 0.0f;
	_13C[2]    = 0.0f;
	_13C[3]    = 0.0f;
	_13C[4]    = 0.0f;
	_13C[5]    = 0.0f;
}

/*
 * --INFO--
 * Address:	804056D8
 * Size:	001374
 */
void ObjDayEndResultIncP::doCreate(JKRArchive* archive)
{
	ObjDayEndResultBase::doCreate(archive); // probably
	                                        /*
	                                    stwu     r1, -0x70(r1)
	                                    mflr     r0
	                                    lis      r5, lbl_80498830@ha
	                                    stw      r0, 0x74(r1)
	                                    stmw     r22, 0x48(r1)
	                                    mr       r30, r3
	                                    mr       r31, r4
	                                    li       r3, 0x148
	                                    addi     r27, r5, lbl_80498830@l
	                                    bl       __nw__FUl
	                                    or.      r0, r3, r3
	                                    beq      lbl_80405710
	                                    bl       __ct__Q29P2DScreen10Mgr_tuningFv
	                                    mr       r0, r3
	                                    
	                                    lbl_80405710:
	                                    stw      r0, 0x38(r30)
	                                    mr       r6, r31
	                                    addi     r4, r27, 0x14
	                                    lis      r5, 0x104
	                                    lwz      r3, 0x38(r30)
	                                    bl       set__9J2DScreenFPCcUlP10JKRArchive
	                                    mr       r4, r31
	                                    addi     r3, r27, 0x28
	                                    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x3c(r30)
	                                    mr       r4, r31
	                                    addi     r3, r27, 0x3c
	                                    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x40(r30)
	                                    lwz      r3, 0x38(r30)
	                                    lwz      r4, 0x3c(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x38(r30)
	                                    lwz      r4, 0x40(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x64(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lis      r4, 0x62746E32@ha
	                                    lwz      r3, 0x38(r30)
	                                    addi     r6, r4, 0x62746E32@l
	                                    li       r5, 0x4e
	                                    li       r7, 8
	                                    bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
	                                    stw      r3, 0x8c(r30)
	                                    lwz      r3, 0x8c(r30)
	                                    bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
	                                    lwz      r3, 0x8c(r30)
	                                    li       r4, 0
	                                    bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
	                                    li       r3, 0x148
	                                    bl       __nw__FUl
	                                    or.      r0, r3, r3
	                                    beq      lbl_804057C8
	                                    bl       __ct__Q29P2DScreen10Mgr_tuningFv
	                                    mr       r0, r3
	                                    
	                                    lbl_804057C8:
	                                    stw      r0, 0x4c(r30)
	                                    mr       r6, r31
	                                    addi     r4, r27, 0x130
	                                    lis      r5, 4
	                                    lwz      r3, 0x4c(r30)
	                                    bl       set__9J2DScreenFPCcUlP10JKRArchive
	                                    mr       r4, r31
	                                    addi     r3, r27, 0x148
	                                    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	                                    mr       r22, r3
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x50(r30)
	                                    mr       r3, r22
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x54(r30)
	                                    mr       r3, r22
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x9c(r30)
	                                    mr       r3, r22
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0xa0(r30)
	                                    mr       r4, r31
	                                    addi     r3, r27, 0x160
	                                    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x58(r30)
	                                    mr       r4, r31
	                                    addi     r3, r27, 0x178
	                                    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x5c(r30)
	                                    lwz      r3, 0x4c(r30)
	                                    lwz      r4, 0x58(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x6c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lwz      r4, 0x5c(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x70(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x656D5731@ha
	                                    lis      r4, 0x004E6974@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x656D5731@l
	                                    addi     r5, r4, 0x004E6974@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x9c(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r4, 0x74656D57@ha
	                                    addi     r6, r4, 0x74656D57@l
	                                    li       r5, 0x4e69
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x74703030@ha
	                                    lis      r4, 0x004E7365@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x74703030@l
	                                    addi     r5, r4, 0x004E7365@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x74703031@ha
	                                    lis      r4, 0x004E7365@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x74703031@l
	                                    addi     r5, r4, 0x004E7365@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x74703032@ha
	                                    lis      r4, 0x004E7365@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x74703032@l
	                                    addi     r5, r4, 0x004E7365@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x74703033@ha
	                                    lis      r4, 0x004E7365@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x74703033@l
	                                    addi     r5, r4, 0x004E7365@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x74703034@ha
	                                    lis      r4, 0x004E7365@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x74703034@l
	                                    addi     r5, r4, 0x004E7365@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x74703035@ha
	                                    lis      r4, 0x004E7365@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x74703035@l
	                                    addi     r5, r4, 0x004E7365@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x50(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r4, 0x69746C65@ha
	                                    addi     r6, r4, 0x69746C65@l
	                                    li       r5, 0x4e74
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0x54(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r4, 0x64656164@ha
	                                    addi     r6, r4, 0x64656164@l
	                                    li       r5, 0x4e
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r12, 0(r3)
	                                    lwz      r4, 0xa0(r30)
	                                    lwz      r12, 0x60(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r3, 0x148
	                                    bl       __nw__FUl
	                                    or.      r0, r3, r3
	                                    beq      lbl_80405AB0
	                                    bl       __ct__Q29P2DScreen10Mgr_tuningFv
	                                    mr       r0, r3
	                                    
	                                    lbl_80405AB0:
	                                    stw      r0, 0x70(r30)
	                                    mr       r6, r31
	                                    addi     r4, r27, 0x190
	                                    lis      r5, 4
	                                    lwz      r3, 0x70(r30)
	                                    bl       set__9J2DScreenFPCcUlP10JKRArchive
	                                    mr       r4, r31
	                                    addi     r3, r27, 0x1b0
	                                    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	                                    bl       load__20J2DAnmLoaderDataBaseFPCv
	                                    stw      r3, 0x74(r30)
	                                    lwz      r3, 0x70(r30)
	                                    lwz      r4, 0x74(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x64(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x4c(r30)
	                                    bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	                                    mr       r3, r30
	                                    bl       getDispMember__Q26Screen7ObjBaseFv
	                                    lis      r4, 0x52534C54@ha
	                                    lis      r5, 0x0044455F@ha
	                                    addi     r6, r4, 0x52534C54@l
	                                    li       r4, 0x4b48
	                                    addi     r5, r5, 0x0044455F@l
	                                    bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	                                    clrlwi.  r0, r3, 0x18
	                                    bne      lbl_80405B38
	                                    addi     r3, r27, 0
	                                    addi     r5, r27, 0xd0
	                                    li       r4, 0x486
	                                    crclr    6
	                                    bl       panic_f__12JUTExceptionFPCciPCce
	                                    
	                                    lbl_80405B38:
	                                    mr       r3, r30
	                                    bl       getDispMember__Q26Screen7ObjBaseFv
	                                    mr       r28, r3
	                                    lwz      r3, 0x3c(r3)
	                                    lwz      r0, 0(r3)
	                                    stw      r0, 0xcc(r30)
	                                    lwz      r0, 4(r3)
	                                    stw      r0, 0xd0(r30)
	                                    lwz      r0, 8(r3)
	                                    stw      r0, 0xd4(r30)
	                                    lwz      r0, 0xc(r3)
	                                    stw      r0, 0xd8(r30)
	                                    lwz      r0, 0x10(r3)
	                                    stw      r0, 0xdc(r30)
	                                    lwz      r0, 0x14(r3)
	                                    stw      r0, 0xe0(r30)
	                                    lwz      r3, 0x3c(r28)
	                                    lwz      r0, 0x18(r3)
	                                    stw      r0, 0xe4(r30)
	                                    lwz      r0, 0x1c(r3)
	                                    stw      r0, 0xe8(r30)
	                                    lwz      r0, 0x20(r3)
	                                    stw      r0, 0xec(r30)
	                                    lwz      r0, 0x24(r3)
	                                    stw      r0, 0xf0(r30)
	                                    lwz      r0, 0x28(r3)
	                                    stw      r0, 0xf4(r30)
	                                    lwz      r0, 0x2c(r3)
	                                    stw      r0, 0xf8(r30)
	                                    lwz      r3, 0x3c(r28)
	                                    lwz      r0, 0x30(r3)
	                                    stw      r0, 0xfc(r30)
	                                    lwz      r0, 0x34(r3)
	                                    stw      r0, 0x100(r30)
	                                    lwz      r0, 0x38(r3)
	                                    stw      r0, 0x104(r30)
	                                    lwz      r0, 0x3c(r3)
	                                    stw      r0, 0x108(r30)
	                                    lwz      r0, 0x40(r3)
	                                    stw      r0, 0x10c(r30)
	                                    lwz      r0, 0x44(r3)
	                                    stw      r0, 0x110(r30)
	                                    lwz      r0, 0x48(r3)
	                                    stw      r0, 0x114(r30)
	                                    lwz      r0, 0x4c(r3)
	                                    stw      r0, 0x118(r30)
	                                    lwz      r3, 0x3c(r28)
	                                    lwz      r0, 0x50(r3)
	                                    stw      r0, 0x11c(r30)
	                                    lwz      r0, 0x54(r3)
	                                    stw      r0, 0x120(r30)
	                                    lwz      r0, 0x58(r3)
	                                    stw      r0, 0x124(r30)
	                                    lwz      r0, 0x5c(r3)
	                                    stw      r0, 0x128(r30)
	                                    lwz      r0, 0x60(r3)
	                                    stw      r0, 0x12c(r30)
	                                    lwz      r0, 0x64(r3)
	                                    stw      r0, 0x130(r30)
	                                    lwz      r0, 0x68(r3)
	                                    stw      r0, 0x134(r30)
	                                    lwz      r0, 0x6c(r3)
	                                    stw      r0, 0x138(r30)
	                                    lwz      r3, 0x3c(r28)
	                                    lbz      r29, 0x70(r3)
	                                    clrlwi.  r26, r29, 0x1f
	                                    bne      lbl_80405CD4
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x72653031@ha
	                                    lis      r4, 0x4E666967@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x72653031@l
	                                    addi     r5, r4, 0x4E666967@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x6B693031@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E7069@ha
	                                    addi     r6, r5, 0x6B693031@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E7069@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x70693031@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E746F@ha
	                                    addi     r6, r5, 0x70693031@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E746F@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    stb      r0, 0xb0(r3)
	                                    lwz      r3, 0xb8(r30)
	                                    addi     r0, r3, -2
	                                    stw      r0, 0xb8(r30)
	                                    
	                                    lbl_80405CD4:
	                                    rlwinm.  r25, r29, 0, 0x1e, 0x1e
	                                    bne      lbl_80405D6C
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x72653032@ha
	                                    lis      r4, 0x4E666967@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x72653032@l
	                                    addi     r5, r4, 0x4E666967@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x6B693032@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E7069@ha
	                                    addi     r6, r5, 0x6B693032@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E7069@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x70693032@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E746F@ha
	                                    addi     r6, r5, 0x70693032@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E746F@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    stb      r0, 0xb0(r3)
	                                    lwz      r3, 0xb8(r30)
	                                    addi     r0, r3, -2
	                                    stw      r0, 0xb8(r30)
	                                    
	                                    lbl_80405D6C:
	                                    rlwinm.  r24, r29, 0, 0x1d, 0x1d
	                                    bne      lbl_80405E04
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x72653033@ha
	                                    lis      r4, 0x4E666967@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x72653033@l
	                                    addi     r5, r4, 0x4E666967@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x6B693033@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E7069@ha
	                                    addi     r6, r5, 0x6B693033@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E7069@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x70693033@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E746F@ha
	                                    addi     r6, r5, 0x70693033@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E746F@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    stb      r0, 0xb0(r3)
	                                    lwz      r3, 0xb8(r30)
	                                    addi     r0, r3, -2
	                                    stw      r0, 0xb8(r30)
	                                    
	                                    lbl_80405E04:
	                                    rlwinm.  r23, r29, 0, 0x1c, 0x1c
	                                    bne      lbl_80405E9C
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x72653034@ha
	                                    lis      r4, 0x4E666967@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x72653034@l
	                                    addi     r5, r4, 0x4E666967@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x6B693034@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E7069@ha
	                                    addi     r6, r5, 0x6B693034@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E7069@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x70693034@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E746F@ha
	                                    addi     r6, r5, 0x70693034@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E746F@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    stb      r0, 0xb0(r3)
	                                    lwz      r3, 0xb8(r30)
	                                    addi     r0, r3, -2
	                                    stw      r0, 0xb8(r30)
	                                    
	                                    lbl_80405E9C:
	                                    rlwinm.  r29, r29, 0, 0x1b, 0x1b
	                                    bne      lbl_80405F34
	                                    lwz      r3, 0x4c(r30)
	                                    lis      r5, 0x72653035@ha
	                                    lis      r4, 0x4E666967@ha
	                                    lwz      r12, 0(r3)
	                                    addi     r6, r5, 0x72653035@l
	                                    addi     r5, r4, 0x4E666967@l
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x6B693035@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E7069@ha
	                                    addi     r6, r5, 0x6B693035@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E7069@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    lis      r5, 0x70693035@ha
	                                    stb      r0, 0xb0(r3)
	                                    lis      r4, 0x004E746F@ha
	                                    addi     r6, r5, 0x70693035@l
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r5, r4, 0x004E746F@l
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r0, 0
	                                    stb      r0, 0xb0(r3)
	                                    lwz      r3, 0xb8(r30)
	                                    addi     r0, r3, -2
	                                    stw      r0, 0xb8(r30)
	                                    
	                                    lbl_80405F34:
	                                    lwz      r0, 0xb8(r30)
	                                    li       r22, 0
	                                    slwi     r3, r0, 2
	                                    bl       __nwa__FUl
	                                    cmpwi    r26, 0
	                                    stw      r3, 0xac(r30)
	                                    beq      lbl_80405FC8
	                                    stw      r31, 8(r1)
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x00507270@ha
	                                    addi     r7, r30, 0xcc
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x00507270@l
	                                    li       r8, 5
	                                    li       r9, 1
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x5072706D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x5072706D@l
	                                    addi     r7, r30, 0xe4
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 1
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r4, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    li       r22, 2
	                                    stwx     r3, r4, r0
	                                    
	                                    lbl_80405FC8:
	                                    cmpwi    r25, 0
	                                    beq      lbl_80406048
	                                    stw      r31, 8(r1)
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x00507970@ha
	                                    addi     r7, r30, 0xd0
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x00507970@l
	                                    li       r8, 5
	                                    li       r9, 1
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x5079706D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x5079706D@l
	                                    addi     r7, r30, 0xe8
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r22, r22, 1
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r4, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    addi     r22, r22, 1
	                                    stwx     r3, r4, r0
	                                    
	                                    lbl_80406048:
	                                    cmpwi    r24, 0
	                                    beq      lbl_804060C8
	                                    stw      r31, 8(r1)
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x00506270@ha
	                                    addi     r7, r30, 0xd4
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x00506270@l
	                                    li       r8, 5
	                                    li       r9, 1
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x5062706D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x5062706D@l
	                                    addi     r7, r30, 0xec
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r22, r22, 1
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r4, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    addi     r22, r22, 1
	                                    stwx     r3, r4, r0
	                                    
	                                    lbl_804060C8:
	                                    cmpwi    r23, 0
	                                    beq      lbl_80406148
	                                    stw      r31, 8(r1)
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x00507770@ha
	                                    addi     r7, r30, 0xd8
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x00507770@l
	                                    li       r8, 5
	                                    li       r9, 1
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x5077706D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x5077706D@l
	                                    addi     r7, r30, 0xf0
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r22, r22, 1
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r4, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    addi     r22, r22, 1
	                                    stwx     r3, r4, r0
	                                    
	                                    lbl_80406148:
	                                    cmpwi    r29, 0
	                                    beq      lbl_804061C4
	                                    stw      r31, 8(r1)
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x50626C70@ha
	                                    addi     r7, r30, 0xdc
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x50626C70@l
	                                    li       r8, 5
	                                    li       r9, 1
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6D616431@ha
	                                    lis      r4, 0x50626C70@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6D616431@l
	                                    addi     r5, r4, 0x50626C70@l
	                                    addi     r7, r30, 0xf4
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r22, r22, 1
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r4, 0xac(r30)
	                                    slwi     r0, r22, 2
	                                    stwx     r3, r4, r0
	                                    
	                                    lbl_804061C4:
	                                    stw      r31, 8(r1)
	                                    lis      r5, 0x79706F31@ha
	                                    lis      r4, 0x50746F6B@ha
	                                    addi     r7, r30, 0xe0
	                                    lwz      r3, 0x4c(r30)
	                                    addi     r6, r5, 0x79706F31@l
	                                    addi     r5, r4, 0x50746F6B@l
	                                    li       r8, 5
	                                    li       r9, 0
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
	                                    r3, 0xb0(r30) lis      r4, 0x64706F31@ha lis      r3, 0x50746F6D@ha addi     r7,
	                                    r30, 0xf8 stw      r31, 8(r1) addi     r6, r4, 0x64706F31@l addi     r5, r3,
	                                    0x50746F6D@l li       r8, 8 lwz      r3, 0x4c(r30) li       r9, 0 li       r10,
	                                    0 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    stw      r3, 0xb4(r30)
	                                    lwz      r3, 0xb0(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x24(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0xb4(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x24(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r23, 0
	                                    li       r22, 0
	                                    b        lbl_80406278
	                                    
	                                    lbl_80406258:
	                                    lwz      r3, 0xac(r30)
	                                    lfs      f1, lbl_805200DC@sda21(r2)
	                                    lwzx     r3, r3, r22
	                                    lfs      f2, lbl_805200E0@sda21(r2)
	                                    lfs      f3, lbl_805200E4@sda21(r2)
	                                    bl       setPuyoParam__Q32og6Screen20CallBack_CounterSlotFfff
	                                    addi     r22, r22, 4
	                                    addi     r23, r23, 1
	                                    
	                                    lbl_80406278:
	                                    lwz      r0, 0xb8(r30)
	                                    cmpw     r23, r0
	                                    blt      lbl_80406258
	                                    li       r22, 0
	                                    li       r3, 0x38
	                                    bl       __nwa__FUl
	                                    stw      r3, 0xbc(r30)
	                                    lis      r4, 0x6B796F31@ha
	                                    lis      r3, 0x00507461@ha
	                                    addi     r7, r30, 0xfc
	                                    stw      r31, 8(r1)
	                                    addi     r6, r4, 0x6B796F31@l
	                                    addi     r5, r3, 0x00507461@l
	                                    li       r8, 4
	                                    lwz      r3, 0x4c(r30)
	                                    li       r9, 1
	                                    li       r10, 0
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x5074616D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x5074616D@l
	                                    addi     r7, r30, 0x11c
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 1
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x00506E69@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x00506E69@l
	                                    addi     r7, r30, 0x100
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 2
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x506E696D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x506E696D@l
	                                    addi     r7, r30, 0x120
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 3
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x0050686F@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x0050686F@l
	                                    addi     r7, r30, 0x104
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 4
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x50686F6D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x50686F6D@l
	                                    addi     r7, r30, 0x124
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 5
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x00507375@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x00507375@l
	                                    addi     r7, r30, 0x108
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 6
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x61646531@ha
	                                    lis      r4, 0x5073756D@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x61646531@l
	                                    addi     r5, r4, 0x5073756D@l
	                                    addi     r7, r30, 0x128
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 7
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x50646570@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x50646570@l
	                                    addi     r7, r30, 0x10c
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 8
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6D616431@ha
	                                    lis      r4, 0x50646570@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6D616431@l
	                                    addi     r5, r4, 0x50646570@l
	                                    addi     r7, r30, 0x12c
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 9
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x50626170@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x50626170@l
	                                    addi     r7, r30, 0x110
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 0xa
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6D616431@ha
	                                    lis      r4, 0x50626170@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6D616431@l
	                                    addi     r5, r4, 0x50626170@l
	                                    addi     r7, r30, 0x130
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 0xb
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B796F31@ha
	                                    lis      r4, 0x50646F70@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B796F31@l
	                                    addi     r5, r4, 0x50646F70@l
	                                    addi     r7, r30, 0x114
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 0xc
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6D616431@ha
	                                    lis      r4, 0x50646F70@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6D616431@l
	                                    addi     r5, r4, 0x50646F70@l
	                                    addi     r7, r30, 0x134
	                                    stw      r31, 8(r1)
	                                    li       r8, 8
	                                    li       r9, 1
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    li       r22, 0xd
	                                    bl
	                                    setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    lwz      r6, 0xbc(r30)
	                                    slwi     r0, r22, 2
	                                    lis      r5, 0x6B797031@ha
	                                    lis      r4, 0x5064746F@ha
	                                    stwx     r3, r6, r0
	                                    addi     r6, r5, 0x6B797031@l
	                                    addi     r5, r4, 0x5064746F@l
	                                    addi     r7, r30, 0x118
	                                    stw      r31, 8(r1)
	                                    li       r8, 4
	                                    li       r9, 0
	                                    li       r10, 0
	                                    lwz      r3, 0x4c(r30)
	                                    bl
	                                    setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
	                                    r3, 0xc0(r30) lis      r4, 0x6D647031@ha lis      r3, 0x5064746F@ha addi     r7,
	                                    r30, 0x138 stw      r31, 8(r1) addi     r6, r4, 0x6D647031@l addi     r5, r3,
	                                    0x5064746F@l li       r8, 8 lwz      r3, 0x4c(r30) li       r9, 0 li       r10,
	                                    0 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	                                    stw      r3, 0xc4(r30)
	                                    lwz      r3, 0xc0(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x24(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0xc4(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x24(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    li       r23, 0
	                                    li       r22, 0
	                                    
	                                    lbl_80406668:
	                                    lwz      r3, 0xbc(r30)
	                                    lfs      f1, lbl_805200DC@sda21(r2)
	                                    lwzx     r3, r3, r22
	                                    lfs      f2, lbl_805200E0@sda21(r2)
	                                    lfs      f3, lbl_805200E4@sda21(r2)
	                                    bl       setPuyoParam__Q32og6Screen20CallBack_CounterSlotFfff
	                                    addi     r23, r23, 1
	                                    addi     r22, r22, 4
	                                    cmpwi    r23, 0xe
	                                    blt      lbl_80406668
	                                    li       r3, 0x1c
	                                    bl       __nw__FUl
	                                    or.      r0, r3, r3
	                                    beq      lbl_804066A8
	                                    bl       __ct__Q32og6Screen8ScaleMgrFv
	                                    mr       r0, r3
	                                    
	                                    lbl_804066A8:
	                                    lis      r3, arrow__Q22kh6Screen@ha
	                                    stw      r0, 0xc8(r30)
	                                    addi     r23, r3, arrow__Q22kh6Screen@l
	                                    li       r25, 0
	                                    li       r22, 0
	                                    mr       r24, r23
	                                    
	                                    lbl_804066C0:
	                                    lwz      r3, 0x4c(r30)
	                                    lwz      r5, 0(r24)
	                                    lwz      r12, 0(r3)
	                                    lwz      r6, 4(r24)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    addi     r25, r25, 1
	                                    stb      r22, 0xb0(r3)
	                                    cmpwi    r25, 6
	                                    addi     r24, r24, 8
	                                    blt      lbl_804066C0
	                                    lwz      r29, 0x100(r27)
	                                    li       r0, 2
	                                    lwz      r26, 0x104(r27)
	                                    mr       r4, r30
	                                    lwz      r25, 0x108(r27)
	                                    addi     r3, r1, 0x10
	                                    lwz      r24, 0x10c(r27)
	                                    li       r5, 0
	                                    lwz      r22, 0x110(r27)
	                                    lwz      r12, 0x114(r27)
	                                    lwz      r11, 0x118(r27)
	                                    lwz      r10, 0x11c(r27)
	                                    lwz      r9, 0x120(r27)
	                                    lwz      r8, 0x124(r27)
	                                    lwz      r7, 0x128(r27)
	                                    lwz      r6, 0x12c(r27)
	                                    lfs      f0, lbl_805200E8@sda21(r2)
	                                    stw      r29, 0x10(r1)
	                                    lwz      r27, 0xcc(r30)
	                                    fneg     f1, f0
	                                    stw      r26, 0x14(r1)
	                                    lwz      r26, 0xe4(r30)
	                                    stw      r25, 0x18(r1)
	                                    lwz      r25, 0xd0(r30)
	                                    stw      r24, 0x1c(r1)
	                                    lwz      r24, 0xe8(r30)
	                                    stw      r22, 0x20(r1)
	                                    lwz      r22, 0xd4(r30)
	                                    stw      r12, 0x24(r1)
	                                    lwz      r12, 0xec(r30)
	                                    stw      r11, 0x28(r1)
	                                    lwz      r11, 0xd8(r30)
	                                    stw      r10, 0x2c(r1)
	                                    lwz      r10, 0xf0(r30)
	                                    stw      r9, 0x30(r1)
	                                    lwz      r9, 0xdc(r30)
	                                    stw      r8, 0x34(r1)
	                                    lwz      r8, 0xf4(r30)
	                                    stw      r7, 0x38(r1)
	                                    lwz      r7, 0xe0(r30)
	                                    stw      r6, 0x3c(r1)
	                                    lwz      r6, 0xf8(r30)
	                                    stw      r27, 0x10(r1)
	                                    stw      r26, 0x14(r1)
	                                    stw      r25, 0x18(r1)
	                                    stw      r24, 0x1c(r1)
	                                    stw      r22, 0x20(r1)
	                                    stw      r12, 0x24(r1)
	                                    stw      r11, 0x28(r1)
	                                    stw      r10, 0x2c(r1)
	                                    stw      r9, 0x30(r1)
	                                    stw      r8, 0x34(r1)
	                                    stw      r7, 0x38(r1)
	                                    stw      r6, 0x3c(r1)
	                                    mtctr    r0
	                                    
	                                    lbl_804067CC:
	                                    lwz      r6, 0(r3)
	                                    lwz      r0, 4(r3)
	                                    cmplw    r6, r0
	                                    bge      lbl_804067E4
	                                    stfs     f0, 0x13c(r4)
	                                    b        lbl_804067EC
	                                    
	                                    lbl_804067E4:
	                                    ble      lbl_804067EC
	                                    stfs     f1, 0x13c(r4)
	                                    
	                                    lbl_804067EC:
	                                    lwz      r6, 8(r3)
	                                    lwz      r0, 0xc(r3)
	                                    cmplw    r6, r0
	                                    bge      lbl_80406804
	                                    stfs     f0, 0x140(r4)
	                                    b        lbl_8040680C
	                                    
	                                    lbl_80406804:
	                                    ble      lbl_8040680C
	                                    stfs     f1, 0x140(r4)
	                                    
	                                    lbl_8040680C:
	                                    lwz      r6, 0x10(r3)
	                                    lwz      r0, 0x14(r3)
	                                    cmplw    r6, r0
	                                    bge      lbl_80406824
	                                    stfs     f0, 0x144(r4)
	                                    b        lbl_8040682C
	                                    
	                                    lbl_80406824:
	                                    ble      lbl_8040682C
	                                    stfs     f1, 0x144(r4)
	                                    
	                                    lbl_8040682C:
	                                    addi     r3, r3, 0x18
	                                    addi     r4, r4, 0xc
	                                    addi     r5, r5, 2
	                                    bdnz     lbl_804067CC
	                                    lbz      r0, 0x40(r28)
	                                    cmplwi   r0, 0
	                                    beq      lbl_80406918
	                                    li       r5, 0
	                                    li       r6, 0
	                                    stw      r5, 0x98(r30)
	                                    li       r4, 1
	                                    b        lbl_8040687C
	                                    
	                                    lbl_8040685C:
	                                    lwz      r3, 0xac(r30)
	                                    addi     r6, r6, 1
	                                    lwzx     r3, r3, r5
	                                    stb      r4, 0xac(r3)
	                                    lwz      r3, 0xac(r30)
	                                    lwzx     r3, r3, r5
	                                    addi     r5, r5, 4
	                                    stb      r4, 0xa9(r3)
	                                    
	                                    lbl_8040687C:
	                                    lwz      r0, 0xb8(r30)
	                                    cmpw     r6, r0
	                                    blt      lbl_8040685C
	                                    lwz      r3, 0xb0(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x20(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0xb4(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x20(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0x8c(r30)
	                                    bl       fadein__Q32kh6Screen14khUtilFadePaneFv
	                                    li       r24, 0
	                                    li       r22, 1
	                                    
	                                    lbl_804068C0:
	                                    cmpwi    r24, 5
	                                    beq      lbl_804068DC
	                                    lwz      r3, 0x3c(r28)
	                                    slw      r0, r22, r24
	                                    lbz      r3, 0x70(r3)
	                                    and.     r0, r3, r0
	                                    beq      lbl_804068FC
	                                    
	                                    lbl_804068DC:
	                                    lwz      r3, 0x4c(r30)
	                                    lwz      r5, 0(r23)
	                                    lwz      r12, 0(r3)
	                                    lwz      r6, 4(r23)
	                                    lwz      r12, 0x3c(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    stb      r22, 0xb0(r3)
	                                    
	                                    lbl_804068FC:
	                                    addi     r24, r24, 1
	                                    addi     r23, r23, 8
	                                    cmpwi    r24, 6
	                                    blt      lbl_804068C0
	                                    lwz      r0, 0x90(r30)
	                                    ori      r0, r0, 0x40
	                                    stw      r0, 0x90(r30)
	                                    
	                                    lbl_80406918:
	                                    li       r0, 1
	                                    stb      r0, 0x40(r28)
	                                    lbz      r0, 0x41(r28)
	                                    cmplwi   r0, 0
	                                    beq      lbl_80406A38
	                                    li       r0, 2
	                                    li       r3, 0
	                                    mtctr    r0
	                                    
	                                    lbl_80406938:
	                                    lwz      r4, 0xbc(r30)
	                                    li       r0, 1
	                                    addi     r10, r3, 4
	                                    addi     r9, r3, 8
	                                    lwzx     r4, r4, r3
	                                    addi     r8, r3, 0xc
	                                    addi     r7, r3, 0x10
	                                    addi     r6, r3, 0x14
	                                    stb      r0, 0xac(r4)
	                                    addi     r5, r3, 0x18
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r3
	                                    addi     r3, r3, 0x1c
	                                    stb      r0, 0xa9(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r10
	                                    stb      r0, 0xac(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r10
	                                    stb      r0, 0xa9(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r9
	                                    stb      r0, 0xac(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r9
	                                    stb      r0, 0xa9(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r8
	                                    stb      r0, 0xac(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r8
	                                    stb      r0, 0xa9(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r7
	                                    stb      r0, 0xac(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r7
	                                    stb      r0, 0xa9(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r6
	                                    stb      r0, 0xac(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r6
	                                    stb      r0, 0xa9(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r5
	                                    stb      r0, 0xac(r4)
	                                    lwz      r4, 0xbc(r30)
	                                    lwzx     r4, r4, r5
	                                    stb      r0, 0xa9(r4)
	                                    bdnz     lbl_80406938
	                                    lwz      r3, 0xc0(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x20(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r3, 0xc4(r30)
	                                    lwz      r12, 0(r3)
	                                    lwz      r12, 0x20(r12)
	                                    mtctr    r12
	                                    bctrl
	                                    lwz      r0, 0x90(r30)
	                                    ori      r0, r0, 0x100
	                                    stw      r0, 0x90(r30)
	                                    
	                                    lbl_80406A38:
	                                    lmw      r22, 0x48(r1)
	                                    lwz      r0, 0x74(r1)
	                                    mtlr     r0
	                                    addi     r1, r1, 0x70
	                                    blr
	                                        */
}

/*
 * --INFO--
 * Address:	80406A4C
 * Size:	00017C
 */
bool ObjDayEndResultIncP::doUpdateFadein()
{
	return false;
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stmw     r27, 0x1c(r1)
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
lfs      f0, 0x60(r27)
lis      r3, 0x74656D57@ha
lwz      r4, 0x50(r27)
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
stfs     f0, 8(r4)
lwz      r3, 0x4c(r27)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r3, 0x4E616C6C@ha
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, 0x60(r27)
lfs      f0, 8(r4)
addi     r6, r3, 0x4E616C6C@l
li       r5, 0
fadds    f0, f1, f0
stfs     f0, 0x60(r27)
lwz      r3, 0x70(r27)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f2, 0x7c(r27)
lfs      f1, 0x60(r27)
lfs      f0, 0x80(r27)
fsubs    f1, f1, f2
lwz      r12, 0(r3)
fsubs    f0, f0, f2
lfs      f2, lbl_805200AC@sda21(r2)
lwz      r12, 0x24(r12)
fdivs    f0, f1, f0
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r4, 0xc(r1)
mtctr    r12
bctrl
lfs      f1, 0x60(r27)
lfs      f0, 0x80(r27)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_80406B38
li       r31, 1
b        lbl_80406B3C

lbl_80406B38:
li       r31, 0

lbl_80406B3C:
lwz      r3, 0x4c(r27)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lis      r3, arrow__Q22kh6Screen@ha
mr       r30, r27
addi     r29, r3, arrow__Q22kh6Screen@l
li       r28, 0

lbl_80406B60:
lwz      r3, 0x4c(r27)
lfs      f31, 0x13c(r30)
lwz      r12, 0(r3)
lwz      r5, 0(r29)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r29)
mtctr    r12
bctrl
stfs     f31, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r28, r28, 1
addi     r29, r29, 8
cmpwi    r28, 6
addi     r30, r30, 4
blt      lbl_80406B60
mr       r3, r31
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
lmw      r27, 0x1c(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80406BC8
 * Size:	00047C
 */
bool ObjDayEndResultIncP::doUpdate()
{
	return false;
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r3
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
lwz      r12, 0(r3)
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
lwz      r0, 0x98(r31)
cmpwi    r0, 3
beq      lbl_80406C50
bge      lbl_80406C1C
cmpwi    r0, 1
beq      lbl_80406C38
bge      lbl_80406C44
cmpwi    r0, 0
bge      lbl_80406C2C
b        lbl_80406C70

lbl_80406C1C:
cmpwi    r0, 5
beq      lbl_80406C68
bge      lbl_80406C70
b        lbl_80406C5C

lbl_80406C2C:
mr       r3, r31
bl       statusNormal__Q32kh6Screen19ObjDayEndResultIncPFv
b        lbl_80406C70

lbl_80406C38:
mr       r3, r31
bl       statusFadeout__Q32kh6Screen19ObjDayEndResultIncPFv
b        lbl_80406C70

lbl_80406C44:
mr       r3, r31
bl       statusDecP__Q32kh6Screen19ObjDayEndResultIncPFv
b        lbl_80406C70

lbl_80406C50:
mr       r3, r31
bl       statusFadein__Q32kh6Screen19ObjDayEndResultIncPFv
b        lbl_80406C70

lbl_80406C5C:
mr       r3, r31
bl       statusSlot__Q32kh6Screen19ObjDayEndResultIncPFv
b        lbl_80406C70

lbl_80406C68:
mr       r3, r31
bl       statusDecPSlot__Q32kh6Screen19ObjDayEndResultIncPFv

lbl_80406C70:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x17
beq      lbl_80406EB4
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_80406CBC
lwz      r0, 0x98(r31)
cmpwi    r0, 4
bne      lbl_80406CBC
lwz      r0, 0x90(r31)
rlwinm.  r0, r0, 0, 0x19, 0x19
bne      lbl_80406CBC
lwz      r0, 0x90(r31)
ori      r0, r0, 0x20
stw      r0, 0x90(r31)

lbl_80406CBC:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_80406CF4
lwz      r0, 0x98(r31)
cmpwi    r0, 5
bne      lbl_80406CF4
lwz      r0, 0x90(r31)
rlwinm.  r0, r0, 0, 0x17, 0x17
bne      lbl_80406CF4
lwz      r0, 0x90(r31)
ori      r0, r0, 0x80
stw      r0, 0x90(r31)

lbl_80406CF4:
lwz      r0, 0x98(r31)
cmpwi    r0, 0
beq      lbl_80406D08
cmpwi    r0, 2
bne      lbl_80406EB4

lbl_80406D08:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_80406DE0
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r5, __vt__Q26Screen12SceneArgBase@ha
lis      r4, __vt__Q26Screen11SetSceneArg@ha
addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
li       r5, 0x4e25
stw      r0, 0x28(r1)
addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
li       r4, 0
li       r0, 1
stw      r3, 0x34(r1)
mr       r3, r31
stw      r6, 0x28(r1)
stw      r5, 0x2c(r1)
stb      r4, 0x30(r1)
stb      r0, 0x31(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 0x28
bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
clrlwi.  r0, r3, 0x18
beq      lbl_80406EB4
lis      r4, __vt__Q26Screen12SceneArgBase@ha
lis      r3, __vt__Q26Screen13StartSceneArg@ha
addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
lis      r5, __vt__Q32kh6Screen20SArgDayEndResultBase@ha
stw      r0, 0x10(r1)
addi     r0, r3, __vt__Q26Screen13StartSceneArg@l
lis      r3, __vt__Q32kh6Screen20SArgDayEndResultMail@ha
li       r4, 1
stw      r0, 0x10(r1)
addi     r5, r5, __vt__Q32kh6Screen20SArgDayEndResultBase@l
addi     r0, r3, __vt__Q32kh6Screen20SArgDayEndResultMail@l
mr       r3, r31
stw      r5, 0x10(r1)
stb      r4, 0x14(r1)
stw      r0, 0x10(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 0x10
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
lwz      r0, 0x90(r31)
rlwinm   r0, r0, 0, 0x1c, 0x1a
stw      r0, 0x90(r31)
b        lbl_80406EB4

lbl_80406DE0:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_80406EB4
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r5, __vt__Q26Screen12SceneArgBase@ha
lis      r4, __vt__Q26Screen11SetSceneArg@ha
addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
li       r5, 0x4e23
stw      r0, 0x18(r1)
addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
li       r4, 0
li       r0, 1
stw      r3, 0x24(r1)
mr       r3, r31
stw      r6, 0x18(r1)
stw      r5, 0x1c(r1)
stb      r4, 0x20(r1)
stb      r0, 0x21(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 0x18
bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
clrlwi.  r0, r3, 0x18
beq      lbl_80406EB4
lis      r4, __vt__Q26Screen12SceneArgBase@ha
lis      r3, __vt__Q26Screen13StartSceneArg@ha
addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
lis      r5, __vt__Q32kh6Screen20SArgDayEndResultBase@ha
stw      r0, 8(r1)
addi     r0, r3, __vt__Q26Screen13StartSceneArg@l
lis      r3, __vt__Q32kh6Screen20SArgDayEndResultItem@ha
li       r4, 0
stw      r0, 8(r1)
addi     r5, r5, __vt__Q32kh6Screen20SArgDayEndResultBase@l
addi     r0, r3, __vt__Q32kh6Screen20SArgDayEndResultItem@l
mr       r3, r31
stw      r5, 8(r1)
stb      r4, 0xc(r1)
stw      r0, 8(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 8
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
lwz      r0, 0x90(r31)
ori      r0, r0, 0x10
stw      r0, 0x90(r31)

lbl_80406EB4:
lwz      r0, 0x90(r31)
rlwinm.  r0, r0, 0, 0x1a, 0x1a
beq      lbl_80406F38
li       r29, 0
li       r30, 0
b        lbl_80406EFC

lbl_80406ECC:
lwz      r3, 0xac(r31)
lwzx     r3, r3, r30
lbz      r0, 0xa9(r3)
cmplwi   r0, 0
beq      lbl_80406EEC
lbz      r0, 0xa8(r3)
cmplwi   r0, 0
beq      lbl_80406EF4

lbl_80406EEC:
lfs      f1, lbl_805200A8@sda21(r2)
bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf

lbl_80406EF4:
addi     r30, r30, 4
addi     r29, r29, 1

lbl_80406EFC:
lwz      r0, 0xb8(r31)
cmpw     r29, r0
blt      lbl_80406ECC
mr       r3, r31
bl       effectCommon__Q32kh6Screen19ObjDayEndResultIncPFv
lwz      r3, 0x8c(r31)
bl       fadein__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0x90(r31)
li       r0, 0
rlwinm   r3, r3, 0, 0x1b, 0x19
stw      r3, 0x90(r31)
lwz      r3, 0x90(r31)
ori      r3, r3, 0x40
stw      r3, 0x90(r31)
stw      r0, 0x98(r31)

lbl_80406F38:
lwz      r0, 0x90(r31)
rlwinm.  r0, r0, 0, 0x18, 0x18
beq      lbl_80407024
li       r29, 0
li       r30, 0

lbl_80406F4C:
lwz      r3, 0xbc(r31)
lwzx     r3, r3, r30
lbz      r0, 0xa9(r3)
cmplwi   r0, 0
beq      lbl_80406F6C
lbz      r0, 0xa8(r3)
cmplwi   r0, 0
beq      lbl_80406F74

lbl_80406F6C:
lfs      f1, lbl_805200A8@sda21(r2)
bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf

lbl_80406F74:
addi     r29, r29, 1
addi     r30, r30, 4
cmpwi    r29, 0xe
blt      lbl_80406F4C
lwz      r3, 0xc0(r31)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r3, 0xc4(r31)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r3, 0xc0(r31)
lfs      f1, lbl_805200B0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r3, 0xc4(r31)
lfs      f1, lbl_805200B0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r0, 0x118(r31)
cmplwi   r0, 0
bne      lbl_80406FE4
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1806
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_80407004

lbl_80406FE4:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x182b
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x2860
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80407004:
lwz      r3, 0x90(r31)
li       r0, 2
rlwinm   r3, r3, 0, 0x19, 0x17
stw      r3, 0x90(r31)
lwz      r3, 0x90(r31)
ori      r3, r3, 0x100
stw      r3, 0x90(r31)
stw      r0, 0x98(r31)

lbl_80407024:
lwz      r0, 0x54(r1)
li       r3, 0
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	80407044
 * Size:	000184
 */
bool ObjDayEndResultIncP::doUpdateFadeout()
{
	return false;
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stmw     r27, 0x1c(r1)
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
lfs      f0, 0x60(r27)
lis      r3, 0x74656D57@ha
lwz      r4, 0x50(r27)
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
stfs     f0, 8(r4)
lwz      r3, 0x4c(r27)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r3, 0x4E616C6C@ha
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, 0x60(r27)
lfs      f0, 8(r4)
addi     r6, r3, 0x4E616C6C@l
li       r5, 0
fadds    f0, f1, f0
stfs     f0, 0x60(r27)
lwz      r3, 0x70(r27)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f2, 0x84(r27)
lfs      f1, 0x60(r27)
lfs      f0, 0x88(r27)
fsubs    f1, f1, f2
lwz      r12, 0(r3)
fsubs    f0, f0, f2
lfs      f2, lbl_805200B0@sda21(r2)
lfs      f3, lbl_805200AC@sda21(r2)
lwz      r12, 0x24(r12)
fdivs    f0, f1, f0
fsubs    f0, f2, f0
fmuls    f0, f3, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r4, 0xc(r1)
mtctr    r12
bctrl
lfs      f1, 0x60(r27)
lfs      f0, 0x88(r27)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_80407138
li       r31, 1
b        lbl_8040713C

lbl_80407138:
li       r31, 0

lbl_8040713C:
lwz      r3, 0x4c(r27)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lis      r3, arrow__Q22kh6Screen@ha
mr       r30, r27
addi     r29, r3, arrow__Q22kh6Screen@l
li       r28, 0

lbl_80407160:
lwz      r3, 0x4c(r27)
lfs      f31, 0x13c(r30)
lwz      r12, 0(r3)
lwz      r5, 0(r29)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r29)
mtctr    r12
bctrl
stfs     f31, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r28, r28, 1
addi     r29, r29, 8
cmpwi    r28, 6
addi     r30, r30, 4
blt      lbl_80407160
mr       r3, r31
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
lmw      r27, 0x1c(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	804071C8
 * Size:	000148
 */
void ObjDayEndResultIncP::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);

	gfx.m_orthoGraph.setPort();
	_4C->draw(gfx, gfx.m_orthoGraph);
}

/*
 * --INFO--
 * Address:	80407310
 * Size:	000050
 */
void ObjDayEndResultIncP::statusNormal()
{
	if (getGamePad()->m_padButton.m_buttonDown & 0x10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		m_status = INCPSTATUS_Fadeout;
	}
}

/*
 * --INFO--
 * Address:	80407360
 * Size:	000100
 */
void ObjDayEndResultIncP::statusFadeout()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_805200D8@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lfs      f1, 0xa4(r3)
lwz      r4, 0x9c(r3)
stfs     f1, 8(r4)
lfs      f1, 0xa4(r3)
fcmpo    cr0, f1, f0
bge      lbl_804073A0
lfs      f0, lbl_805200B0@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0xa4(r31)
b        lbl_8040744C

lbl_804073A0:
lfs      f1, 0xa8(r31)
lwz      r4, 0xa0(r31)
lfs      f0, lbl_805200EC@sda21(r2)
stfs     f1, 8(r4)
lfs      f1, 0xa8(r31)
fcmpo    cr0, f1, f0
bge      lbl_804073CC
lfs      f0, lbl_805200B0@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0xa8(r31)
b        lbl_8040744C

lbl_804073CC:
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040740C
lis      r3, lbl_80498830@ha
lis      r5, lbl_80498900@ha
addi     r3, r3, lbl_80498830@l
li       r4, 0x605
addi     r5, r5, lbl_80498900@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040740C:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lbz      r0, 0x41(r3)
cmplwi   r0, 0
bne      lbl_80407444
li       r0, 1
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
stb      r0, 0x41(r3)
addi     r3, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
li       r0, 5
lbz      r3, 0x50(r3)
stw      r3, 0x154(r31)
stw      r0, 0x98(r31)
b        lbl_8040744C

lbl_80407444:
li       r0, 2
stw      r0, 0x98(r31)

lbl_8040744C:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80407460
 * Size:	000050
 */
void ObjDayEndResultIncP::statusDecP()
{
	if (getGamePad()->m_padButton.m_buttonDown & 0x10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		m_status = INCPSTATUS_Fadein;
	}
}

/*
 * --INFO--
 * Address:	804074B0
 * Size:	000064
 */
void ObjDayEndResultIncP::statusFadein()
{
	_A0->m_currentFrame = _A8;
	if (_A8 > 404.0f) {
		_A8--;
		return;
	}

	_9C->m_currentFrame = _A4;
	if (_A4 > 399.0f) {
		_A4--;
		return;
	}

	m_status = INCPSTATUS_Normal;
}

/*
 * --INFO--
 * Address:	80407514
 * Size:	000140
 */
void ObjDayEndResultIncP::statusSlot()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
addi     r30, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
stw      r29, 0x14(r1)
li       r29, 0
stw      r28, 0x10(r1)
li       r28, 0
b        lbl_804075CC

lbl_80407548:
cmpwi    r28, 0
bne      lbl_8040757C
lwz      r4, 0xac(r31)
lwz      r3, 0(r4)
lbz      r0, 0xa9(r3)
cmplwi   r0, 0
bne      lbl_8040757C
lwzx     r3, r4, r29
lfs      f1, 0x10(r30)
bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf
mr       r3, r31
mr       r4, r28
bl       callIncPSE__Q32kh6Screen19ObjDayEndResultIncPFi

lbl_8040757C:
lwz      r5, 0xac(r31)
add      r4, r5, r29
lwz      r3, -4(r4)
lbz      r0, 0xaa(r3)
cmplwi   r0, 0
beq      lbl_804075C4
lwz      r3, 0(r4)
lbz      r0, 0xa9(r3)
cmplwi   r0, 0
bne      lbl_804075C4
slwi     r0, r28, 2
lfs      f1, 0x10(r30)
lwzx     r3, r5, r0
bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf
mr       r3, r31
mr       r4, r28
bl       callIncPSE__Q32kh6Screen19ObjDayEndResultIncPFi
b        lbl_804075D8

lbl_804075C4:
addi     r29, r29, 4
addi     r28, r28, 1

lbl_804075CC:
lwz      r0, 0xb8(r31)
cmpw     r28, r0
blt      lbl_80407548

lbl_804075D8:
lwz      r0, 0xb8(r31)
lwz      r3, 0xac(r31)
slwi     r0, r0, 2
add      r3, r3, r0
lwz      r3, -4(r3)
lbz      r0, 0xaa(r3)
cmplwi   r0, 0
beq      lbl_80407634
lwz      r3, 0x154(r31)
cmpwi    r3, 0
bne      lbl_8040762C
mr       r3, r31
bl       effectCommon__Q32kh6Screen19ObjDayEndResultIncPFv
lwz      r3, 0x8c(r31)
bl       fadein__Q32kh6Screen14khUtilFadePaneFv
li       r0, 0
stw      r0, 0x98(r31)
lwz      r0, 0x90(r31)
ori      r0, r0, 0x40
stw      r0, 0x90(r31)
b        lbl_80407634

lbl_8040762C:
addi     r0, r3, -1
stw      r0, 0x154(r31)

lbl_80407634:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
lwz      r28, 0x10(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80407654
 * Size:	00019C
 */
void ObjDayEndResultIncP::statusDecPSlot()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
addi     r30, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
stw      r29, 0x14(r1)
li       r29, 0
stw      r28, 0x10(r1)
li       r28, 0

lbl_80407684:
cmpwi    r28, 0
bne      lbl_804076B8
lwz      r4, 0xbc(r31)
lwz      r3, 0(r4)
lbz      r0, 0xa9(r3)
cmplwi   r0, 0
bne      lbl_804076B8
lwzx     r3, r4, r29
lfs      f1, 0x10(r30)
bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf
mr       r3, r31
mr       r4, r28
bl       callDecPSE__Q32kh6Screen19ObjDayEndResultIncPFi

lbl_804076B8:
lwz      r5, 0xbc(r31)
add      r4, r5, r29
lwz      r3, -4(r4)
lbz      r0, 0xaa(r3)
cmplwi   r0, 0
beq      lbl_80407700
lwz      r3, 0(r4)
lbz      r0, 0xa9(r3)
cmplwi   r0, 0
bne      lbl_80407700
slwi     r0, r28, 2
lfs      f1, 0x10(r30)
lwzx     r3, r5, r0
bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf
mr       r3, r31
mr       r4, r28
bl       callDecPSE__Q32kh6Screen19ObjDayEndResultIncPFi
b        lbl_80407710

lbl_80407700:
addi     r28, r28, 1
addi     r29, r29, 4
cmpwi    r28, 0xe
blt      lbl_80407684

lbl_80407710:
lwz      r3, 0xbc(r31)
lwz      r3, 0x34(r3)
lbz      r0, 0xaa(r3)
cmplwi   r0, 0
beq      lbl_804077D0
lwz      r3, 0x154(r31)
cmpwi    r3, 0
bne      lbl_804077C8
lwz      r3, 0xc0(r31)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r3, 0xc4(r31)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r3, 0xc0(r31)
lfs      f1, lbl_805200B0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r3, 0xc4(r31)
lfs      f1, lbl_805200B0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r0, 0x118(r31)
cmplwi   r0, 0
bne      lbl_80407790
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1806
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_804077B0

lbl_80407790:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x182b
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x2860
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_804077B0:
lwz      r3, 0x90(r31)
li       r0, 2
ori      r3, r3, 0x100
stw      r3, 0x90(r31)
stw      r0, 0x98(r31)
b        lbl_804077D0

lbl_804077C8:
addi     r0, r3, -1
stw      r0, 0x154(r31)

lbl_804077D0:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
lwz      r28, 0x10(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	804077F0
 * Size:	000088
 */
void ObjDayEndResultIncP::callIncPSE(int)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
srwi     r5, r4, 0x1f
stw      r0, 0x14(r1)
clrlwi   r0, r4, 0x1f
xor      r0, r0, r5
subf.    r0, r5, r0
beq      lbl_80407858
lwz      r3, 0xac(r3)
slwi     r0, r4, 2
add      r4, r3, r0
lwzx     r3, r3, r0
lwz      r4, -4(r4)
lwz      r3, 0x20(r3)
lwz      r4, 0x20(r4)
lwz      r3, 0(r3)
lwz      r0, 0(r4)
cmplw    r0, r3
bge      lbl_80407844
li       r4, 0x1828
b        lbl_8040785C

lbl_80407844:
ble      lbl_80407850
li       r4, 0x182a
b        lbl_8040785C

lbl_80407850:
li       r4, 0x1806
b        lbl_8040785C

lbl_80407858:
li       r4, 0x1806

lbl_8040785C:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80407878
 * Size:	00004C
 */
void ObjDayEndResultIncP::callDecPSE(int)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
rlwinm   r0, r4, 2, 0, 0x1c
li       r4, 0x182a
lwz      r5, 0xbc(r3)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
lwzx     r5, r5, r0
lwz      r5, 0x20(r5)
lwz      r0, 0(r5)
cmplwi   r0, 0
bne      lbl_804078AC
li       r4, 0x1806

lbl_804078AC:
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	804078C4
 * Size:	000188
 */
void ObjDayEndResultIncP::effectCommon()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stmw     r27, 0xc(r1)
mr       r31, r3
lwz      r3, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r3, 0xb4(r31)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r3, 0xb0(r31)
lfs      f1, lbl_805200B0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r3, 0xb4(r31)
lfs      f1, lbl_805200B0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040795C
lis      r3, lbl_80498830@ha
lis      r5, lbl_80498900@ha
addi     r3, r3, lbl_80498830@l
li       r4, 0x6c2
addi     r5, r5, lbl_80498900@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040795C:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, arrow__Q22kh6Screen@ha
mr       r29, r3
addi     r28, r4, arrow__Q22kh6Screen@l
li       r27, 0
li       r30, 1

lbl_80407978:
cmpwi    r27, 5
beq      lbl_80407994
lwz      r3, 0x3c(r29)
slw      r0, r30, r27
lbz      r3, 0x70(r3)
and.     r0, r3, r0
beq      lbl_804079B4

lbl_80407994:
lwz      r3, 0x4c(r31)
lwz      r5, 0(r28)
lwz      r12, 0(r3)
lwz      r6, 4(r28)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stb      r30, 0xb0(r3)

lbl_804079B4:
addi     r27, r27, 1
addi     r28, r28, 8
cmpwi    r27, 6
blt      lbl_80407978
lwz      r3, 0xc8(r31)
bl       up__Q32og6Screen8ScaleMgrFv
lwz      r3, 0xe0(r31)
lwz      r0, 0xf8(r31)
cmplw    r3, r0
bge      lbl_80407A00
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1829
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x285f
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_80407A38

lbl_80407A00:
ble      lbl_80407A28
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x182b
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x2860
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_80407A38

lbl_80407A28:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1806
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80407A38:
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80407A4C
 * Size:	00036C
 */
void ObjDayEndResultIncP::updateCommon()
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stfd     f31, 0x20(r1)
psq_st   f31, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
stw      r28, 0x10(r1)
mr       r31, r3
lfs      f0, 0x44(r3)
lwz      r3, 0x3c(r3)
stfs     f0, 8(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x40(r31)
stfs     f0, 8(r3)
lwz      r3, 0x38(r31)
bl       animation__9J2DScreenFv
lfs      f0, 0x44(r31)
lis      r0, 0x4330
lfs      f2, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f0, f2
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x44(r31)
lfs      f0, 0x48(r31)
fadds    f0, f0, f2
stfs     f0, 0x48(r31)
lwz      r3, 0x3c(r31)
lfs      f2, 0x44(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80407AEC
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x44(r31)

lbl_80407AEC:
lwz      r3, 0x40(r31)
lis      r0, 0x4330
stw      r0, 8(r1)
lha      r0, 6(r3)
lfd      f1, lbl_805200B8@sda21(r2)
xoris    r0, r0, 0x8000
lfs      f2, 0x48(r31)
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80407B28
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x48(r31)

lbl_80407B28:
lfs      f0, 0x68(r31)
lwz      r3, 0x58(r31)
stfs     f0, 8(r3)
lfs      f0, 0x6c(r31)
lwz      r3, 0x5c(r31)
stfs     f0, 8(r3)
lwz      r3, 0x4c(r31)
bl       animation__9J2DScreenFv
lfs      f0, 0x68(r31)
lis      r0, 0x4330
lfs      f2, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f0, f2
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x68(r31)
lfs      f0, 0x6c(r31)
fadds    f0, f0, f2
stfs     f0, 0x6c(r31)
lwz      r3, 0x58(r31)
lfs      f2, 0x68(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80407BA0
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x68(r31)

lbl_80407BA0:
lwz      r3, 0x5c(r31)
lis      r0, 0x4330
stw      r0, 8(r1)
lha      r0, 6(r3)
lfd      f1, lbl_805200B8@sda21(r2)
xoris    r0, r0, 0x8000
lfs      f2, 0x6c(r31)
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80407BDC
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x6c(r31)

lbl_80407BDC:
lfs      f0, 0x64(r31)
lis      r3, 0x69746C65@ha
lwz      r4, 0x54(r31)
addi     r6, r3, 0x69746C65@l
li       r5, 0x4e74
stfs     f0, 8(r4)
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lfs      f1, 0x64(r31)
lis      r0, 0x4330
lfs      f0, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x64(r31)
lwz      r3, 0x54(r31)
lfs      f2, 0x64(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80407C58
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x64(r31)

lbl_80407C58:
lfs      f0, 0x78(r31)
lwz      r3, 0x74(r31)
stfs     f0, 8(r3)
lwz      r3, 0x70(r31)
bl       animation__9J2DScreenFv
lfs      f1, 0x78(r31)
lis      r0, 0x4330
lfs      f0, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x78(r31)
lwz      r3, 0x74(r31)
lfs      f2, 0x78(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80407CB8
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x78(r31)

lbl_80407CB8:
lwz      r3, 0x38(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r3, 0xc8(r31)
bl       calc__Q32og6Screen8ScaleMgrFv
lis      r3, arrow__Q22kh6Screen@ha
fmr      f31, f1
addi     r29, r3, arrow__Q22kh6Screen@l
li       r28, 0
mr       r30, r29

lbl_80407CFC:
lwz      r3, 0x4c(r31)
lwz      r5, 0(r30)
lwz      r12, 0(r3)
lwz      r6, 4(r30)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r28, r28, 1
addi     r30, r30, 8
cmpwi    r28, 6
blt      lbl_80407CFC
mr       r30, r31
li       r28, 0

lbl_80407D48:
lwz      r3, 0x4c(r31)
lfs      f31, 0x13c(r30)
lwz      r12, 0(r3)
lwz      r5, 0(r29)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r29)
mtctr    r12
bctrl
stfs     f31, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r28, r28, 1
addi     r29, r29, 8
cmpwi    r28, 6
addi     r30, r30, 4
blt      lbl_80407D48
psq_l    f31, 40(r1), 0, qr0
lwz      r0, 0x34(r1)
lfd      f31, 0x20(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
lwz      r28, 0x10(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	80407DB8
 * Size:	0008B4
 */
void ObjDayEndResultMail::doCreate(JKRArchive*)
{
	/*
stwu     r1, -0x140(r1)
mflr     r0
lis      r5, lbl_80498830@ha
stw      r0, 0x144(r1)
stmw     r22, 0x118(r1)
mr       r31, r3
mr       r25, r4
li       r3, 0x148
addi     r28, r5, lbl_80498830@l
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80407DF0
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_80407DF0:
stw      r0, 0x38(r31)
mr       r6, r25
addi     r4, r28, 0x14
lis      r5, 0x104
lwz      r3, 0x38(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x28
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r31)
mr       r4, r25
addi     r3, r28, 0x3c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r31)
lwz      r3, 0x38(r31)
lwz      r4, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r31)
lwz      r4, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
lis      r4, 0x62746E32@ha
lwz      r3, 0x38(r31)
addi     r6, r4, 0x62746E32@l
li       r5, 0x4e
li       r7, 8
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0x8c(r31)
lwz      r3, 0x8c(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0x8c(r31)
li       r4, 0
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80407EA8
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_80407EA8:
stw      r0, 0x4c(r31)
mr       r6, r25
addi     r4, r28, 0x2d0
lis      r5, 0x104
lwz      r3, 0x4c(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x2e0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r24, r3
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x50(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x54(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0xa8(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0xac(r31)
mr       r4, r25
addi     r3, r28, 0x2f0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x58(r31)
mr       r4, r25
addi     r3, r28, 0x300
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x5c(r31)
lwz      r3, 0x4c(r31)
lwz      r4, 0x58(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lwz      r4, 0x5c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x70(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x656D5731@ha
lis      r4, 0x004E6974@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x656D5731@l
addi     r5, r4, 0x004E6974@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xa8(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x74656D57@ha
addi     r6, r4, 0x74656D57@l
li       r5, 0x4e69
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703030@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703030@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703031@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703031@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703032@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703032@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703033@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703033@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703034@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703034@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703035@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703035@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x65745F70@ha
addi     r6, r4, 0x65745F70@l
li       r5, 0x5073
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xac(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x69746C65@ha
addi     r6, r4, 0x69746C65@l
li       r5, 0x4e74
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x54(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x69636F6E@ha
addi     r6, r4, 0x69636F6E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xa8(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_804081C4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_804081C4:
stw      r0, 0x9c(r31)
mr       r6, r25
addi     r4, r28, 0x310
lis      r5, 0x104
lwz      r3, 0x9c(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x32c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0xa0(r31)
lis      r3, 0x74656D57@ha
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
lwz      r3, 0x9c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xa0(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040823C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_8040823C:
stw      r0, 0x70(r31)
mr       r6, r25
addi     r4, r28, 0x348
lis      r5, 4
lwz      r3, 0x70(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x368
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x74(r31)
lwz      r3, 0x70(r31)
lwz      r4, 0x74(r31)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804082BC
addi     r3, r28, 0
addi     r5, r28, 0xd0
li       r4, 0x76e
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804082BC:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r29, r3
bl       createInstance__Q33ebi4Save4TMgrFv
stw      r3, 0xa4(r31)
lwz      r24, 0xa4(r31)
addi     r3, r24, 0x18
bl       loadResource__Q33ebi6Screen9TSaveMenuFv
lwz      r23, sCurrentHeap__7JKRHeap@sda21(r13)
addi     r3, r24, 0x100
mr       r4, r23
bl       loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
lwz      r3, sys@sda21(r13)
mr       r4, r23
lwz      r3, 0x5c(r3)
bl       loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r9, 0xa4(r31)
lis      r8, 0x79325F31@ha
lis      r5, 0x00506461@ha
lis      r4, 0x64617931@ha
stw      r3, 0x3d0(r9)
addi     r5, r5, 0x00506461@l
addi     r11, r31, 0xbc
li       r0, 3
stw      r3, 0x24(r9)
mr       r7, r5
addi     r6, r8, 0x79325F31@l
addi     r8, r8, 0x5f32
stw      r3, 0x104(r9)
addi     r10, r4, 0x64617931@l
li       r9, 0x50
lwz      r3, 0x64(r29)
stw      r3, 0xbc(r31)
stw      r3, 0xb8(r31)
stw      r11, 8(r1)
stw      r0, 0xc(r1)
stw      r25, 0x10(r1)
lwz      r3, 0x4c(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0xb4(r31)
li       r4, 1
lwz      r3, 0xb4(r31)
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r4, 0x4c(r31)
mr       r3, r31
bl setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3Mgr
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r29)
mr       r30, r3
cmplwi   r0, 0
beq      lbl_8040853C
lwz      r0, 0x224(r30)
li       r3, 0xb0
stw      r0, 0xc0(r31)
bl       __nwa__FUl
lis      r4, __ct__Q42kh6Screen19ObjDayEndResultMail11MailIconAnmFv@ha
li       r5, 0
addi     r4, r4, __ct__Q42kh6Screen19ObjDayEndResultMail11MailIconAnmFv@l
li       r6, 8
li       r7, 0x14
bl       __construct_new_array
stw      r3, 0xc4(r31)
addi     r24, r30, 0x228
li       r25, 0
li       r26, 0

lbl_804083D8:
lbz      r0, 0(r24)
extsb    r0, r0
cmpwi    r0, -1
beq      lbl_8040851C
cmpwi    r0, -2
bne      lbl_8040840C
lwz      r3, 0xc4(r31)
addi     r0, r26, 4
li       r4, 0
stwx     r4, r3, r0
lwz      r3, 0xc4(r31)
stwx     r4, r3, r26
b        lbl_80408508

lbl_8040840C:
lwz      r4, 0x220(r30)
slwi     r3, r0, 2
li       r0, 0x20
addi     r5, r1, 0x14
lwzx     r3, r4, r3
addi     r4, r28, 0x1cc
lwz      r27, 0xc(r3)
mtctr    r0

lbl_8040842C:
lwz      r3, 4(r4)
lwzu     r0, 8(r4)
stw      r3, 4(r5)
stwu     r0, 8(r5)
bdnz     lbl_8040842C

lbl_80408440:
lwz      r6, 0xc4(r31)
mr       r5, r27
addi     r3, r1, 0x18
addi     r4, r28, 0x388
addi     r7, r6, 4
lwzx     r6, r26, r7
addi     r0, r6, 1
stwx     r0, r26, r7
crclr    6
bl       sprintf
lwz      r4, 0xc0(r31)
addi     r3, r1, 0x18
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
cmplwi   r3, 0
bne      lbl_80408440
lwz      r5, 0xc4(r31)
addi     r4, r26, 4
lwzx     r3, r5, r4
addi     r0, r3, -1
stwx     r0, r5, r4
lwz      r3, 0xc4(r31)
lwzx     r0, r3, r4
cmpwi    r0, 0
beq      lbl_804084B0
slwi     r3, r0, 2
bl       __nwa__FUl
lwz      r4, 0xc4(r31)
stwx     r3, r4, r26

lbl_804084B0:
li       r22, 0
li       r23, 0
b        lbl_804084F4

lbl_804084BC:
mr       r5, r27
mr       r6, r22
addi     r3, r1, 0x18
addi     r4, r28, 0x388
crclr    6
bl       sprintf
lwz      r4, 0xc0(r31)
addi     r3, r1, 0x18
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
lwz      r0, 0xc4(r31)
addi     r22, r22, 1
lwzx     r4, r26, r0
stwx     r3, r4, r23
addi     r23, r23, 4

lbl_804084F4:
lwz      r3, 0xc4(r31)
addi     r0, r3, 4
lwzx     r0, r26, r0
cmpw     r22, r0
blt      lbl_804084BC

lbl_80408508:
addi     r25, r25, 1
addi     r24, r24, 1
cmpwi    r25, 0x14
addi     r26, r26, 8
blt      lbl_804083D8

lbl_8040851C:
lwz      r4, 0xc4(r31)
lis      r5, 0x65745F70@ha
lwz      r3, 0x4c(r31)
addi     r6, r5, 0x65745F70@l
lwz      r4, 0(r4)
li       r5, 0x5073
lwz      r7, 0(r4)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG

lbl_8040853C:
lbz      r0, 0x228(r30)
lis      r4, 0x74657874@ha
lwz      r3, 0x4c(r31)
addi     r6, r4, 0x74657874@l
extsb    r0, r0
lwz      r4, 0x220(r30)
lwz      r12, 0(r3)
slwi     r0, r0, 2
lwzx     r4, r4, r0
li       r5, 0x54
lwz      r12, 0x3c(r12)
lwz      r24, 0(r4)
lwz      r25, 4(r4)
mtctr    r12
bctrl
stw      r25, 0x1c(r3)
lis      r5, 0x6A695F6C@ha
lis      r4, 0x004E7961@ha
li       r7, 0x20
stw      r24, 0x18(r3)
addi     r6, r5, 0x6A695F6C@l
addi     r5, r4, 0x004E7961@l
lwz      r3, 0x4c(r31)
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0xcc(r31)
lis      r5, 0x6A695F72@ha
lis      r4, 0x004E7961@ha
li       r7, 0x20
lwz      r3, 0x4c(r31)
addi     r6, r5, 0x6A695F72@l
addi     r5, r4, 0x004E7961@l
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0xd0(r31)
lwz      r0, 0xb8(r31)
cmplwi   r0, 1
bne      lbl_804085E0
lwz      r3, 0xcc(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0xcc(r31)
li       r4, 0
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc

lbl_804085E0:
lwz      r3, 0xd0(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0xd0(r31)
li       r4, 0
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
lwz      r3, 0x9c(r31)
lis      r4, 0x74656D57@ha
addi     r6, r4, 0x74656D57@l
li       r5, 0x4e69
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
mr       r3, r31
bl       changeAlpha__Q32kh6Screen19ObjDayEndResultMailFv
lbz      r0, 0x5c(r29)
cmplwi   r0, 0
beq      lbl_80408658
li       r3, 0
li       r0, 0xff
stw      r3, 0x98(r31)
mr       r3, r31
stw      r0, 0xe8(r31)
bl       changeAlpha__Q32kh6Screen19ObjDayEndResultMailFv
lwz      r3, 0x8c(r31)
bl       fadein__Q32kh6Screen14khUtilFadePaneFv
lfs      f0, lbl_805200B0@sda21(r2)
stfs     f0, 0xdc(r31)
stfs     f0, 0xd8(r31)

lbl_80408658:
lmw      r22, 0x118(r1)
lwz      r0, 0x144(r1)
mtlr     r0
addi     r1, r1, 0x140
blr
	*/
}

/*
 * --INFO--
 * Address:	8040867C
 * Size:	000170
 */
bool ObjDayEndResultMail::doStart(const ::Screen::StartSceneArg*)
{
	return false;
	/*
stwu     r1, -0x10(r1)
mflr     r0
cmplwi   r4, 0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
beq      lbl_804086B4
lbz      r0, 4(r4)
cmplwi   r0, 0
beq      lbl_804086B4
lwz      r0, 0x90(r31)
rlwinm   r0, r0, 0, 0x1d, 0x1b
stw      r0, 0x90(r31)
b        lbl_804086C0

lbl_804086B4:
lwz      r0, 0x90(r31)
ori      r0, r0, 8
stw      r0, 0x90(r31)

lbl_804086C0:
lwz      r0, 0x90(r31)
rlwinm.  r0, r0, 0, 0x1c, 0x1c
beq      lbl_80408700
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x8c(r12)
mtctr    r12
bctrl
stfs     f1, 0x7c(r31)
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
stfs     f1, 0x80(r31)
b        lbl_80408730

lbl_80408700:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x7c(r12)
mtctr    r12
bctrl
stfs     f1, 0x7c(r31)
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x80(r12)
mtctr    r12
bctrl
stfs     f1, 0x80(r31)

lbl_80408730:
lfs      f0, 0x7c(r31)
lis      r3, 0x4E616C6C@ha
addi     r6, r3, 0x4E616C6C@l
li       r5, 0
stfs     f0, 0x60(r31)
lwz      r3, 0x70(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1811
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804087B0
lis      r3, lbl_80498830@ha
lis      r5, lbl_80498900@ha
addi     r3, r3, lbl_80498830@l
li       r4, 0x7e6
addi     r5, r5, lbl_80498900@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804087B0:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lbz      r0, 0x5c(r3)
cmplwi   r0, 0
bne      lbl_804087D4
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x187d
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_804087D4:
lwz      r0, 0x14(r1)
li       r3, 1
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	804087EC
 * Size:	0001B8
 */
bool ObjDayEndResultMail::doUpdateFadein()
{
	return false;
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r3
lfs      f0, 0x60(r3)
lwz      r4, 0xac(r3)
stfs     f0, 8(r4)
lwz      r12, 0(r3)
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
lfs      f0, 0x60(r30)
lis      r3, 0x74656D57@ha
lwz      r4, 0x50(r30)
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
stfs     f0, 8(r4)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r3, 0x4E616C6C@ha
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, 0x60(r30)
lfs      f0, 8(r4)
addi     r6, r3, 0x4E616C6C@l
li       r5, 0
fadds    f0, f1, f0
stfs     f0, 0x60(r30)
lwz      r3, 0x70(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f2, 0x7c(r30)
lfs      f1, 0x60(r30)
lfs      f0, 0x80(r30)
fsubs    f1, f1, f2
lwz      r12, 0(r3)
fsubs    f0, f0, f2
lfs      f2, lbl_805200AC@sda21(r2)
lwz      r12, 0x24(r12)
fdivs    f0, f1, f0
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r4, 0xc(r1)
mtctr    r12
bctrl
lfs      f1, 0x60(r30)
lfs      f0, 0x80(r30)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_804088F0
li       r31, 1
b        lbl_804088F4

lbl_804088F0:
li       r31, 0

lbl_804088F4:
lwz      r4, 0xa0(r30)
lis      r3, 0x74656D57@ha
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
stfs     f1, 8(r4)
lwz      r3, 0x9c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lwz      r3, 0x4c(r30)
lis      r5, 0x656D5730@ha
lis      r4, 0x004E6974@ha
lfs      f30, 0xdc(r30)
lwz      r12, 0(r3)
addi     r6, r5, 0x656D5730@l
addi     r5, r4, 0x004E6974@l
lfs      f31, 0xd8(r30)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stfs     f31, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
mr       r3, r31
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
lwz      r31, 0x1c(r1)
lwz      r0, 0x44(r1)
lwz      r30, 0x18(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	804089A4
 * Size:	000280
 */
bool ObjDayEndResultMail::doUpdate()
{
	return false;
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stfd     f31, 0x20(r1)
psq_st   f31, 40(r1), 0, qr0
stfd     f30, 0x10(r1)
psq_st   f30, 24(r1), 0, qr0
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r31, r3
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_80408A0C
lis      r3, lbl_80498830@ha
lis      r5, lbl_80498900@ha
addi     r3, r3, lbl_80498830@l
li       r4, 0x80e
addi     r5, r5, lbl_80498900@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80408A0C:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lwz      r0, 0x90(r31)
mr       r30, r3
rlwinm.  r0, r0, 0, 0x1d, 0x1d
beq      lbl_80408A94
lwz      r3, 0xa4(r31)
bl       update__Q33ebi4Save4TMgrFv
lwz      r3, 0xa4(r31)
bl       isFinish__Q33ebi4Save4TMgrFv
clrlwi.  r0, r3, 0x18
beq      lbl_80408BE4
lwz      r3, 0xa4(r31)
lwz      r0, 0x474(r3)
cmpwi    r0, 2
beq      lbl_80408A6C
bge      lbl_80408A60
cmpwi    r0, 0
beq      lbl_80408A6C
bge      lbl_80408A78
b        lbl_80408BE4

lbl_80408A60:
cmpwi    r0, 4
bge      lbl_80408BE4
b        lbl_80408A88

lbl_80408A6C:
li       r0, 1
stw      r0, 0x58(r30)
b        lbl_80408BE4

lbl_80408A78:
lwz      r0, 0x90(r31)
rlwinm   r0, r0, 0, 0x1e, 0x1c
stw      r0, 0x90(r31)
b        lbl_80408BE4

lbl_80408A88:
li       r0, 2
stw      r0, 0x58(r30)
b        lbl_80408BE4

lbl_80408A94:
lwz      r0, 0x98(r31)
cmplwi   r0, 7
bgt      lbl_80408B14
lis      r3, lbl_804EADA8@ha
slwi     r0, r0, 2
addi     r3, r3, lbl_804EADA8@l
lwzx     r0, r3, r0
mtctr    r0
bctr
.global  lbl_80408AB8

lbl_80408AB8:
mr       r3, r31
bl       statusNormal__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408AC4

lbl_80408AC4:
mr       r3, r31
bl       statusFadeoutToLeft__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408AD0

lbl_80408AD0:
mr       r3, r31
bl       statusFadeinFromLeft__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408ADC

lbl_80408ADC:
mr       r3, r31
bl       statusFadeoutToRight__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408AE8

lbl_80408AE8:
mr       r3, r31
bl       statusFadeinFromRight__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408AF4

lbl_80408AF4:
mr       r3, r31
bl       statusWaitOpen__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408B00

lbl_80408B00:
mr       r3, r31
bl       statusOpenW__Q32kh6Screen19ObjDayEndResultMailFv
b        lbl_80408B14
.global  lbl_80408B0C

lbl_80408B0C:
mr       r3, r31
bl       statusOpenH__Q32kh6Screen19ObjDayEndResultMailFv

lbl_80408B14:
lwz      r3, 0xc8(r31)
addi     r0, r3, 1
stw      r0, 0xc8(r31)
srawi    r0, r0, 2
addze    r6, r0
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
lwz      r4, 0xc4(r31)
subf     r0, r3, r0
slwi     r0, r0, 3
add      r3, r4, r0
lwz      r0, 4(r3)
cmpw     r6, r0
blt      lbl_80408B58
li       r0, 0
li       r6, 0
stw      r0, 0xc8(r31)

lbl_80408B58:
lwz      r4, 0xbc(r31)
lis      r5, 0x65745F70@ha
lwz      r3, 0xb8(r31)
slwi     r0, r6, 2
lwz      r7, 0xc4(r31)
addi     r6, r5, 0x65745F70@l
subf     r4, r4, r3
lwz      r3, 0x4c(r31)
slwi     r4, r4, 3
li       r5, 0x5073
lwzx     r4, r7, r4
lwzx     r7, r4, r0
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x656D5730@ha
lis      r4, 0x004E6974@ha
lfs      f30, 0xdc(r31)
lwz      r12, 0(r3)
addi     r6, r5, 0x656D5730@l
addi     r5, r4, 0x004E6974@l
lfs      f31, 0xd8(r31)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stfs     f31, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_80408BE4:
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r3, 0
psq_l    f31, 40(r1), 0, qr0
lfd      f31, 0x20(r1)
psq_l    f30, 24(r1), 0, qr0
lfd      f30, 0x10(r1)
lwz      r31, 0xc(r1)
lwz      r0, 0x34(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	80408C24
 * Size:	0001B4
 */
bool ObjDayEndResultMail::doUpdateFadeout()
{
	return false;
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
lwz      r12, 0(r3)
mr       r30, r3
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
lfs      f0, 0x60(r30)
lis      r3, 0x74656D57@ha
lwz      r4, 0x50(r30)
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
stfs     f0, 8(r4)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r3, 0x4E616C6C@ha
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, 0x60(r30)
lfs      f0, 8(r4)
addi     r6, r3, 0x4E616C6C@l
li       r5, 0
fadds    f0, f1, f0
stfs     f0, 0x60(r30)
lwz      r3, 0x70(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f2, 0x84(r30)
lfs      f1, 0x60(r30)
lfs      f0, 0x88(r30)
fsubs    f1, f1, f2
lwz      r12, 0(r3)
fsubs    f0, f0, f2
lfs      f2, lbl_805200B0@sda21(r2)
lfs      f3, lbl_805200AC@sda21(r2)
lwz      r12, 0x24(r12)
fdivs    f0, f1, f0
fsubs    f0, f2, f0
fmuls    f0, f3, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r4, 0xc(r1)
mtctr    r12
bctrl
lfs      f1, 0x60(r30)
lfs      f0, 0x88(r30)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_80408D24
li       r31, 1
b        lbl_80408D28

lbl_80408D24:
li       r31, 0

lbl_80408D28:
lwz      r4, 0xa0(r30)
lis      r3, 0x74656D57@ha
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
stfs     f1, 8(r4)
lwz      r3, 0x9c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lwz      r3, 0x4c(r30)
lis      r5, 0x656D5730@ha
lis      r4, 0x004E6974@ha
lfs      f30, 0xdc(r30)
lwz      r12, 0(r3)
addi     r6, r5, 0x656D5730@l
addi     r5, r4, 0x004E6974@l
lfs      f31, 0xd8(r30)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stfs     f31, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
mr       r3, r31
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
lwz      r31, 0x1c(r1)
lwz      r0, 0x44(r1)
lwz      r30, 0x18(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80408DD8
 * Size:	000214
 */
void ObjDayEndResultMail::statusNormal()
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_80408E14
lwz      r0, 0x90(r31)
ori      r0, r0, 4
stw      r0, 0x90(r31)
lwz      r3, 0xa4(r31)
bl       start__Q33ebi4Save4TMgrFv
b        lbl_80408FD8

lbl_80408E14:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_80408EEC
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r5, __vt__Q26Screen12SceneArgBase@ha
lis      r4, __vt__Q26Screen11SetSceneArg@ha
addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
li       r5, 0x4e24
stw      r0, 0x10(r1)
addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
li       r4, 0
li       r0, 1
stw      r3, 0x1c(r1)
mr       r3, r31
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stb      r4, 0x18(r1)
stb      r0, 0x19(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 0x10
bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
clrlwi.  r0, r3, 0x18
beq      lbl_80408FD8
lis      r4, __vt__Q26Screen12SceneArgBase@ha
lis      r3, __vt__Q26Screen13StartSceneArg@ha
addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
lis      r5, __vt__Q32kh6Screen20SArgDayEndResultBase@ha
stw      r0, 8(r1)
addi     r0, r3, __vt__Q26Screen13StartSceneArg@l
lis      r3, __vt__Q32kh6Screen20SArgDayEndResultIncP@ha
li       r4, 0
stw      r0, 8(r1)
addi     r5, r5, __vt__Q32kh6Screen20SArgDayEndResultBase@l
addi     r0, r3, __vt__Q32kh6Screen20SArgDayEndResultIncP@l
mr       r3, r31
stw      r5, 8(r1)
stb      r4, 0xc(r1)
stw      r0, 8(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 8
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
lwz      r0, 0x90(r31)
ori      r0, r0, 0x10
stw      r0, 0x90(r31)
b        lbl_80408FD8

lbl_80408EEC:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x19, 0x19
beq      lbl_80408F8C
lwz      r3, 0xbc(r31)
cmplwi   r3, 1
ble      lbl_80408FD8
lwz      r0, 0xb8(r31)
addi     r3, r3, -1
subf     r0, r3, r0
cmplwi   r0, 0x14
bge      lbl_80408FD8
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r4, 0xbc(r31)
addi     r5, r3, 0x228
lwz      r0, 0xb8(r31)
addi     r3, r4, -1
subf     r0, r3, r0
cmplwi   r0, 0x13
bne      lbl_80408F60
lbzx     r0, r5, r0
extsb    r0, r0
cmpwi    r0, -2
beq      lbl_80408FD8

lbl_80408F60:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1811
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, 0xd0(r31)
bl       fadein__Q32kh6Screen14khUtilFadePaneFv
li       r0, 3
lfs      f0, lbl_805200D4@sda21(r2)
stw      r0, 0x98(r31)
stfs     f0, 0xb0(r31)
b        lbl_80408FD8

lbl_80408F8C:
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1a, 0x1a
beq      lbl_80408FD8
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
cmplw    r3, r0
bge      lbl_80408FD8
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1811
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, 0xcc(r31)
bl       fadein__Q32kh6Screen14khUtilFadePaneFv
li       r0, 1
lfs      f0, lbl_805200F0@sda21(r2)
stw      r0, 0x98(r31)
stfs     f0, 0xb0(r31)

lbl_80408FD8:
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	80408FEC
 * Size:	0000A8
 */
void ObjDayEndResultMail::statusFadeoutToLeft()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_805200F4@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lfs      f1, 0xb0(r3)
lwz      r4, 0xa8(r3)
stfs     f1, 8(r4)
lfs      f1, 0xb0(r3)
fcmpo    cr0, f1, f0
ble      lbl_8040902C
lfs      f0, lbl_805200B0@sda21(r2)
fsubs    f0, f1, f0
stfs     f0, 0xb0(r31)
b        lbl_80409080

lbl_8040902C:
lwz      r4, 0xbc(r31)
addi     r0, r4, 1
stw      r0, 0xbc(r31)
bl       skipped__Q32kh6Screen19ObjDayEndResultMailCFv
clrlwi.  r0, r3, 0x18
beq      lbl_80409050
lwz      r3, 0xbc(r31)
addi     r0, r3, 1
stw      r0, 0xbc(r31)

lbl_80409050:
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
cmplw    r3, r0
blt      lbl_80409068
lwz      r3, 0xd0(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv

lbl_80409068:
mr       r3, r31
bl       changeMail__Q32kh6Screen19ObjDayEndResultMailFv
li       r0, 2
lfs      f0, lbl_805200D8@sda21(r2)
stw      r0, 0x98(r31)
stfs     f0, 0xb0(r31)

lbl_80409080:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80409094
 * Size:	000038
 */
void ObjDayEndResultMail::statusFadeinFromLeft()
{
	/*
lfs      f1, 0xb0(r3)
lwz      r4, 0xa8(r3)
lfs      f0, lbl_805200D4@sda21(r2)
stfs     f1, 8(r4)
lfs      f1, 0xb0(r3)
fcmpo    cr0, f1, f0
ble      lbl_804090C0
lfs      f0, lbl_805200B0@sda21(r2)
fsubs    f0, f1, f0
stfs     f0, 0xb0(r3)
blr

lbl_804090C0:
li       r0, 0
stw      r0, 0x98(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	804090CC
 * Size:	0000B8
 */
void ObjDayEndResultMail::statusFadeoutToRight()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_805200D8@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lfs      f1, 0xb0(r3)
lwz      r4, 0xa8(r3)
stfs     f1, 8(r4)
lfs      f1, 0xb0(r3)
fcmpo    cr0, f1, f0
bge      lbl_8040910C
lfs      f0, lbl_805200B0@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0xb0(r31)
b        lbl_80409170

lbl_8040910C:
lwz      r4, 0xbc(r31)
addi     r0, r4, -1
stw      r0, 0xbc(r31)
bl       skipped__Q32kh6Screen19ObjDayEndResultMailCFv
clrlwi.  r0, r3, 0x18
beq      lbl_80409130
lwz      r3, 0xbc(r31)
addi     r0, r3, -1
stw      r0, 0xbc(r31)

lbl_80409130:
lwz      r3, 0xbc(r31)
cmplwi   r3, 1
ble      lbl_80409150
lwz      r0, 0xb8(r31)
addi     r3, r3, -1
subf     r0, r3, r0
cmplwi   r0, 0x14
blt      lbl_80409158

lbl_80409150:
lwz      r3, 0xcc(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv

lbl_80409158:
mr       r3, r31
bl       changeMail__Q32kh6Screen19ObjDayEndResultMailFv
li       r0, 4
lfs      f0, lbl_805200F4@sda21(r2)
stw      r0, 0x98(r31)
stfs     f0, 0xb0(r31)

lbl_80409170:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80409184
 * Size:	000038
 */
void ObjDayEndResultMail::statusFadeinFromRight()
{
	/*
lfs      f1, 0xb0(r3)
lwz      r4, 0xa8(r3)
lfs      f0, lbl_805200F0@sda21(r2)
stfs     f1, 8(r4)
lfs      f1, 0xb0(r3)
fcmpo    cr0, f1, f0
bge      lbl_804091B0
lfs      f0, lbl_805200B0@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0xb0(r3)
blr

lbl_804091B0:
li       r0, 0
stw      r0, 0x98(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	804091BC
 * Size:	00012C
 */
void ObjDayEndResultMail::statusWaitOpen()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_80409214
lis      r3, lbl_80498830@ha
lis      r5, lbl_80498900@ha
addi     r3, r3, lbl_80498830@l
li       r4, 0x8f1
addi     r5, r5, lbl_80498900@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80409214:
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r31, r3
li       r0, 1
stb      r0, 0x5c(r3)
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x60(r31)
lwz      r3, 0x220(r3)
slwi     r0, r0, 2
lwzx     r3, r3, r0
lbz      r0, 0xa(r3)
extsb    r0, r0
cmpwi    r0, 3
beq      lbl_804092A0
bge      lbl_80409278
cmpwi    r0, 1
beq      lbl_80409290
bge      lbl_80409298
cmpwi    r0, 0
bge      lbl_80409288
b        lbl_804092B8

lbl_80409278:
cmpwi    r0, 5
beq      lbl_804092B0
bge      lbl_804092B8
b        lbl_804092A8

lbl_80409288:
li       r4, 0x1876
b        lbl_804092BC

lbl_80409290:
li       r4, 0x1877
b        lbl_804092BC

lbl_80409298:
li       r4, 0x1878
b        lbl_804092BC

lbl_804092A0:
li       r4, 0x1879
b        lbl_804092BC

lbl_804092A8:
li       r4, 0x187a
b        lbl_804092BC

lbl_804092B0:
li       r4, 0x187b
b        lbl_804092BC

lbl_804092B8:
li       r4, 0x187c

lbl_804092BC:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 6
stw      r0, 0x98(r30)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	804092E8
 * Size:	0000D4
 */
void ObjDayEndResultMail::statusOpenW()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, lbl_805200F8@sda21(r2)
stw      r0, 0x14(r1)
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f4, lbl_805200B0@sda21(r2)
lfs      f1, 0xe0(r3)
lfs      f0, 0x48(r4)
fmuls    f1, f1, f0
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f1, 0xe0(r3)
lfs      f3, 0xdc(r3)
lfs      f1, 0x3c(r4)
fsubs    f2, f2, f3
fmadds   f1, f2, f1, f3
stfs     f1, 0xdc(r3)
lfs      f1, 0xd8(r3)
lfs      f2, 0x3c(r4)
fsubs    f3, f4, f1
lfs      f1, 0xe0(r3)
fmadds   f1, f3, f2, f1
stfs     f1, 0xe0(r3)
lfs      f2, 0xd8(r3)
lfs      f1, 0xe0(r3)
fadds    f1, f2, f1
stfs     f1, 0xd8(r3)
lfs      f1, 0xe0(r3)
fcmpo    cr0, f1, f0
bge      lbl_80409388
lfs      f1, 0xd8(r3)
lfs      f0, lbl_805200FC@sda21(r2)
fsubs    f1, f1, f4
fcmpo    cr0, f1, f0
bge      lbl_80409388
stfs     f4, 0xd8(r3)
li       r0, 7
lfs      f0, 0x40(r4)
stfs     f0, 0xe4(r3)
stw      r0, 0x98(r3)

lbl_80409388:
lwz      r4, 0xe8(r3)
addi     r0, r4, 0x20
stw      r0, 0xe8(r3)
lwz      r0, 0xe8(r3)
cmpwi    r0, 0xff
ble      lbl_804093A8
li       r0, 0xff
stw      r0, 0xe8(r3)

lbl_804093A8:
bl       changeAlpha__Q32kh6Screen19ObjDayEndResultMailFv
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	804093BC
 * Size:	0000CC
 */
void ObjDayEndResultMail::statusOpenH()
{
	_E4 *= ObjDayEndResultBase::msVal._48;
	_E4 += (1.0f - _DC) * ObjDayEndResultBase::msVal._44;
	_DC += _E4;

	if (_E4 < 0.0f && (_DC - 1.0f) < 0.1f) {
		_DC = 1.0f;
		m_nextBtnFadePane->fadein();
		m_status = MAILSTATUS_Normal;
	}

	_E8 += 32;

	if (_E8 > 255) {
		_E8 = 255;
	}

	changeAlpha();
}

/*
 * --INFO--
 * Address:	80409488
 * Size:	000480
 */
void ObjDayEndResultMail::changeMail()
{
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stw      r31, 0x7c(r1)
mr       r31, r3
stw      r30, 0x78(r1)
stw      r29, 0x74(r1)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x65745F70@ha
stw      r0, 0xc8(r31)
mr       r30, r3
addi     r6, r4, 0x65745F70@l
li       r5, 0x5073
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
lwz      r4, 0xc4(r31)
subf     r0, r3, r0
lwz      r3, 0x4c(r31)
slwi     r0, r0, 3
lwzx     r4, r4, r0
lwz      r7, 0(r4)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG
lwz      r4, 0xbc(r31)
lis      r3, 0x74657874@ha
lwz      r0, 0xb8(r31)
addi     r6, r3, 0x74657874@l
lwz      r3, 0x4c(r31)
li       r5, 0x54
subf     r0, r4, r0
lwz      r7, 0x220(r30)
add      r4, r30, r0
lwz      r12, 0(r3)
lbz      r0, 0x228(r4)
lwz      r12, 0x3c(r12)
extsb    r0, r0
slwi     r0, r0, 2
lwzx     r4, r7, r0
lwz      r30, 0(r4)
lwz      r29, 4(r4)
mtctr    r12
bctrl
stw      r29, 0x1c(r3)
stw      r30, 0x18(r3)
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
cmplw    r3, r0
bne      lbl_804096F0
lwz      r4, 0xd4(r31)
li       r0, 0xff
lfs      f0, lbl_805200B0@sda21(r2)
lis      r3, 0x65745F70@ha
stb      r0, 0x4c(r1)
addi     r6, r3, 0x65745F70@l
li       r5, 0x5073
stfs     f0, 0x38(r4)
stfs     f0, 0x3c(r4)
stfs     f0, 0x40(r4)
stfs     f0, 0x44(r4)
lwz      r3, 0x4c(r31)
stb      r0, 0x4d(r1)
lwz      r12, 0(r3)
stb      r0, 0x4e(r1)
lwz      r12, 0x3c(r12)
stb      r0, 0x4f(r1)
mtctr    r12
bctrl
lwz      r8, 0x4c(r1)
lis      r5, 0x6F6E5F62@ha
lis      r4, 0x00506963@ha
stw      r8, 0x38(r1)
addi     r6, r5, 0x6F6E5F62@l
addi     r5, r4, 0x00506963@l
lbz      r4, 0x38(r1)
stw      r8, 0x3c(r1)
lbz      r0, 0x39(r1)
stb      r4, 0x150(r3)
lbz      r4, 0x3a(r1)
stb      r0, 0x151(r3)
lbz      r0, 0x3b(r1)
stb      r4, 0x152(r3)
lbz      r4, 0x3c(r1)
stb      r0, 0x153(r3)
lbz      r0, 0x3d(r1)
stb      r4, 0x154(r3)
lbz      r4, 0x3e(r1)
stb      r0, 0x155(r3)
lbz      r0, 0x3f(r1)
stw      r8, 0x40(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x40(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x41(r1)
stb      r4, 0x158(r3)
lbz      r7, 0x42(r1)
stw      r8, 0x44(r1)
lbz      r4, 0x43(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x44(r1)
stb      r7, 0x15a(r3)
lbz      r7, 0x45(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x46(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x47(r1)
stb      r7, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r6, 0x4c(r1)
stw      r6, 0x28(r1)
lbz      r4, 0x28(r1)
stw      r6, 0x2c(r1)
lbz      r0, 0x29(r1)
stb      r4, 0x150(r3)
lbz      r4, 0x2a(r1)
stb      r0, 0x151(r3)
lbz      r0, 0x2b(r1)
stb      r4, 0x152(r3)
lbz      r4, 0x2c(r1)
stb      r0, 0x153(r3)
lbz      r0, 0x2d(r1)
stb      r4, 0x154(r3)
lbz      r4, 0x2e(r1)
stb      r0, 0x155(r3)
lbz      r0, 0x2f(r1)
stw      r6, 0x30(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x30(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x31(r1)
stb      r4, 0x158(r3)
lbz      r5, 0x32(r1)
stw      r6, 0x34(r1)
lbz      r4, 0x33(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x34(r1)
stb      r5, 0x15a(r3)
lbz      r5, 0x35(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x36(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x37(r1)
stb      r5, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)
b        lbl_804098EC

lbl_804096F0:
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r3, 0x65745F70@ha
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lwz      r7, 0xd4(r31)
lfs      f3, 0x38(r4)
addi     r6, r3, 0x65745F70@l
lfs      f2, 0x34(r4)
li       r5, 0x5073
lfs      f1, 0x30(r4)
lfs      f0, 0x2c(r4)
lfs      f4, lbl_805200AC@sda21(r2)
stfs     f0, 0x38(r7)
stfs     f1, 0x3c(r7)
stfs     f2, 0x40(r7)
stfs     f3, 0x44(r7)
lfs      f0, 0x2c(r4)
lfs      f2, 0x30(r4)
lfs      f1, 0x34(r4)
fmuls    f3, f4, f0
lfs      f0, 0x38(r4)
fmuls    f2, f4, f2
fmuls    f1, f4, f1
lwz      r3, 0x4c(r31)
fmuls    f0, f4, f0
fctiwz   f3, f3
lwz      r12, 0(r3)
fctiwz   f2, f2
fctiwz   f1, f1
lwz      r12, 0x3c(r12)
fctiwz   f0, f0
stfd     f3, 0x50(r1)
stfd     f2, 0x58(r1)
lwz      r8, 0x54(r1)
stfd     f1, 0x60(r1)
lwz      r7, 0x5c(r1)
stfd     f0, 0x68(r1)
lwz      r4, 0x64(r1)
lwz      r0, 0x6c(r1)
stb      r8, 0x48(r1)
stb      r7, 0x49(r1)
stb      r4, 0x4a(r1)
stb      r0, 0x4b(r1)
mtctr    r12
bctrl
lwz      r8, 0x48(r1)
lis      r5, 0x6F6E5F62@ha
lis      r4, 0x00506963@ha
stw      r8, 0x18(r1)
addi     r6, r5, 0x6F6E5F62@l
addi     r5, r4, 0x00506963@l
lbz      r4, 0x18(r1)
stw      r8, 0x1c(r1)
lbz      r0, 0x19(r1)
stb      r4, 0x150(r3)
lbz      r4, 0x1a(r1)
stb      r0, 0x151(r3)
lbz      r0, 0x1b(r1)
stb      r4, 0x152(r3)
lbz      r4, 0x1c(r1)
stb      r0, 0x153(r3)
lbz      r0, 0x1d(r1)
stb      r4, 0x154(r3)
lbz      r4, 0x1e(r1)
stb      r0, 0x155(r3)
lbz      r0, 0x1f(r1)
stw      r8, 0x20(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x20(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x21(r1)
stb      r4, 0x158(r3)
lbz      r7, 0x22(r1)
stw      r8, 0x24(r1)
lbz      r4, 0x23(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x24(r1)
stb      r7, 0x15a(r3)
lbz      r7, 0x25(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x26(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x27(r1)
stb      r7, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r6, 0x48(r1)
stw      r6, 8(r1)
lbz      r4, 8(r1)
stw      r6, 0xc(r1)
lbz      r0, 9(r1)
stb      r4, 0x150(r3)
lbz      r4, 0xa(r1)
stb      r0, 0x151(r3)
lbz      r0, 0xb(r1)
stb      r4, 0x152(r3)
lbz      r4, 0xc(r1)
stb      r0, 0x153(r3)
lbz      r0, 0xd(r1)
stb      r4, 0x154(r3)
lbz      r4, 0xe(r1)
stb      r0, 0x155(r3)
lbz      r0, 0xf(r1)
stw      r6, 0x10(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x10(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x11(r1)
stb      r4, 0x158(r3)
lbz      r5, 0x12(r1)
stw      r6, 0x14(r1)
lbz      r4, 0x13(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x14(r1)
stb      r5, 0x15a(r3)
lbz      r5, 0x15(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x16(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x17(r1)
stb      r5, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)

lbl_804098EC:
lwz      r0, 0x84(r1)
lwz      r31, 0x7c(r1)
lwz      r30, 0x78(r1)
lwz      r29, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	80409908
 * Size:	000064
 */
void ObjDayEndResultMail::changeAlpha() { _9C->search('NitemW')->setAlpha(255 - _E8); }

/*
 * --INFO--
 * Address:	8040996C
 * Size:	0001C4
 */
void ObjDayEndResultMail::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);

	gfx.m_orthoGraph.setPort();
	_4C->draw(gfx, gfx.m_orthoGraph);

	gfx.m_orthoGraph.setPort();
	_9C->draw(gfx, gfx.m_orthoGraph);

	if (m_flags & 0x4) {
		gfx.m_perspGraph.setPort();
		_4C->search('Nsetpoin');
		m_saveMgr->draw();
	}
}

/*
 * --INFO--
 * Address:	80409B30
 * Size:	000288
 */
void ObjDayEndResultMail::updateCommon()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
lfs      f0, 0x44(r3)
lwz      r3, 0x3c(r3)
stfs     f0, 8(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x40(r31)
stfs     f0, 8(r3)
lwz      r3, 0x38(r31)
bl       animation__9J2DScreenFv
lfs      f0, 0x44(r31)
lis      r0, 0x4330
lfs      f2, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f0, f2
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x44(r31)
lfs      f0, 0x48(r31)
fadds    f0, f0, f2
stfs     f0, 0x48(r31)
lwz      r3, 0x3c(r31)
lfs      f2, 0x44(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80409BBC
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x44(r31)

lbl_80409BBC:
lwz      r3, 0x40(r31)
lis      r0, 0x4330
stw      r0, 8(r1)
lha      r0, 6(r3)
lfd      f1, lbl_805200B8@sda21(r2)
xoris    r0, r0, 0x8000
lfs      f2, 0x48(r31)
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80409BF8
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x48(r31)

lbl_80409BF8:
lfs      f0, 0x68(r31)
lwz      r3, 0x58(r31)
stfs     f0, 8(r3)
lfs      f0, 0x6c(r31)
lwz      r3, 0x5c(r31)
stfs     f0, 8(r3)
lwz      r3, 0x4c(r31)
bl       animation__9J2DScreenFv
lfs      f0, 0x68(r31)
lis      r0, 0x4330
lfs      f2, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f0, f2
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x68(r31)
lfs      f0, 0x6c(r31)
fadds    f0, f0, f2
stfs     f0, 0x6c(r31)
lwz      r3, 0x58(r31)
lfs      f2, 0x68(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80409C70
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x68(r31)

lbl_80409C70:
lwz      r3, 0x5c(r31)
lis      r0, 0x4330
stw      r0, 8(r1)
lha      r0, 6(r3)
lfd      f1, lbl_805200B8@sda21(r2)
xoris    r0, r0, 0x8000
lfs      f2, 0x6c(r31)
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80409CAC
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x6c(r31)

lbl_80409CAC:
lfs      f0, 0x64(r31)
lis      r3, 0x69746C65@ha
lwz      r4, 0x54(r31)
addi     r6, r3, 0x69746C65@l
li       r5, 0x4e74
stfs     f0, 8(r4)
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
lfs      f1, 0x64(r31)
lis      r0, 0x4330
lfs      f0, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x64(r31)
lwz      r3, 0x54(r31)
lfs      f2, 0x64(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80409D28
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x64(r31)

lbl_80409D28:
lfs      f0, 0x78(r31)
lwz      r3, 0x74(r31)
stfs     f0, 8(r3)
lwz      r3, 0x70(r31)
bl       animation__9J2DScreenFv
lfs      f1, 0x78(r31)
lis      r0, 0x4330
lfs      f0, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x78(r31)
lwz      r3, 0x74(r31)
lfs      f2, 0x78(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_80409D88
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x78(r31)

lbl_80409D88:
lwz      r3, 0x38(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
bl       animation__9J2DScreenFv
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80409DB8
 * Size:	0003BC
 */
void ObjDayEndResultMail::setCallBackMessage(P2DScreen::Mgr* mgr, J2DPane* pane)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stmw     r23, 0x1c(r1)
mr       r26, r5
mr       r31, r3
mr       r30, r4
mr       r3, r26
lwz      r12, 0(r26)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80409E74
lwz      r0, 0x18(r26)
li       r3, 0
lwz      r4, 0x1c(r26)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80409E74
li       r3, 0x48
bl       __nw__FUl
or.      r24, r3, r3
beq      lbl_80409E28
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r24, r3

lbl_80409E28:
lwz      r25, 0x10(r26)
mr       r3, r30
lwz      r27, 0x14(r26)
mr       r7, r24
mr       r5, r25
mr       r6, r27
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r26
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r27, r3
xor      r0, r25, r0
or.      r0, r3, r0
bne      lbl_80409E74
stw      r24, 0xd4(r31)

lbl_80409E74:
lwz      r29, 0xdc(r26)
cmplwi   r29, 0
beq      lbl_8040A158
addi     r29, r29, -12
b        lbl_8040A158

lbl_80409E88:
lwz      r24, 0xc(r29)
mr       r3, r24
lwz      r12, 0(r24)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80409F2C
lwz      r0, 0x18(r24)
li       r3, 0
lwz      r4, 0x1c(r24)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80409F2C
li       r3, 0x48
bl       __nw__FUl
or.      r25, r3, r3
beq      lbl_80409EE0
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r25, r3

lbl_80409EE0:
lwz      r26, 0x10(r24)
mr       r3, r30
lwz      r27, 0x14(r24)
mr       r7, r25
mr       r5, r26
mr       r6, r27
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r24
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r27, r3
xor      r0, r26, r0
or.      r0, r3, r0
bne      lbl_80409F2C
stw      r25, 0xd4(r31)

lbl_80409F2C:
addi     r3, r24, 0xdc
bl       getFirstLink__10JSUPtrListCFv
cmplwi   r3, 0
beq      lbl_80409F40
addi     r3, r3, -12

lbl_80409F40:
mr       r28, r3
b        lbl_8040A140

lbl_80409F48:
mr       r3, r28
bl       "getObject__17JSUTree<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80409FF0
lwz      r0, 0x18(r27)
li       r3, 0
lwz      r4, 0x1c(r27)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80409FF0
li       r3, 0x48
bl       __nw__FUl
or.      r24, r3, r3
beq      lbl_80409FA4
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r24, r3

lbl_80409FA4:
lwz      r25, 0x10(r27)
mr       r3, r30
lwz      r26, 0x14(r27)
mr       r7, r24
mr       r5, r25
mr       r6, r26
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r27
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r26, r3
xor      r0, r25, r0
or.      r0, r3, r0
bne      lbl_80409FF0
stw      r24, 0xd4(r31)

lbl_80409FF0:
addi     r26, r27, 0xdc
mr       r3, r26
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)
b        lbl_8040A11C

lbl_8040A004:
addi     r3, r1, 0xc
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_8040A0B4
mr       r3, r27
bl       getUserInfo__7J2DPaneCFv
li       r0, 0
xor      r4, r4, r0
xor      r0, r3, r0
or.      r0, r4, r0
beq      lbl_8040A0B4
li       r3, 0x48
bl       __nw__FUl
or.      r23, r3, r3
beq      lbl_8040A060
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r23, r3

lbl_8040A060:
mr       r3, r27
bl       getTagName__7J2DPaneCFv
mr       r25, r3
mr       r24, r4
mr       r3, r30
mr       r7, r23
mr       r6, r24
mr       r5, r25
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r27
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r24, r3
xor      r0, r25, r0
or.      r0, r3, r0
bne      lbl_8040A0B4
stw      r23, 0xd4(r31)

lbl_8040A0B4:
mr       r3, r27
bl       getPaneTree__7J2DPaneFv
mr       r27, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_8040A0F4

lbl_8040A0D4:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r5, r3
mr       r3, r31
mr       r4, r30
bl
setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3MgrP7J2DPane
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8040A0F4:
mr       r3, r27
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_8040A0D4
lwz      r3, 0xc(r1)
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)

lbl_8040A11C:
mr       r3, r26
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
lwz      r0, 0xc(r1)
cmplw    r0, r3
bne      lbl_8040A004
lwz      r28, 0x18(r28)
cmplwi   r28, 0
beq      lbl_8040A140
addi     r28, r28, -12

lbl_8040A140:
cmplwi   r28, 0
bne      lbl_80409F48
lwz      r29, 0x18(r29)
cmplwi   r29, 0
beq      lbl_8040A158
addi     r29, r29, -12

lbl_8040A158:
cmplwi   r29, 0
bne      lbl_80409E88
lmw      r23, 0x1c(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A174
 * Size:	000024
 */
void ObjDayEndResultMail::setCallBackMessage(P2DScreen::Mgr* mgr)
{
	setCallBackMessage(mgr, mgr);
	/*
stwu     r1, -0x10(r1)
mflr     r0
mr       r5, r4
stw      r0, 0x14(r1)
bl
setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3MgrP7J2DPane
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A198
 * Size:	00005C
 */
void ObjDayEndResultMail::skipped() const
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r4, 0xbc(r31)
lwz      r0, 0xb8(r31)
subf     r0, r4, r0
add      r3, r3, r0
lbz      r0, 0x228(r3)
extsb    r0, r0
subfic   r0, r0, -2
cntlzw   r0, r0
srwi     r3, r0, 5
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A1F4
 * Size:	000068
 */
ObjDayEndResultTitl::ObjDayEndResultTitl()
{
	_38 = nullptr;
	_3C = nullptr;
	_40 = nullptr;
	_48 = 0.0f;
	_44 = 0.0f;
	_4C = 0;
	_50 = 0;
}

/*
 * --INFO--
 * Address:	8040A25C
 * Size:	0001BC
 */
void ObjDayEndResultTitl::doCreate(JKRArchive*)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
lis      r5, lbl_80498830@ha
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r4
stw      r30, 0x48(r1)
addi     r30, r5, lbl_80498830@l
stw      r29, 0x44(r1)
mr       r29, r3
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040A29C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_8040A29C:
stw      r0, 0x38(r29)
mr       r6, r31
addi     r4, r30, 0x3b8
lis      r5, 0x104
lwz      r3, 0x38(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r31
addi     r3, r30, 0x3d0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r29)
mr       r4, r31
addi     r3, r30, 0x3e8
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r29)
lwz      r3, 0x38(r29)
lwz      r4, 0x3c(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
lwz      r4, 0x40(r29)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
li       r5, 1
li       r4, 7
li       r3, 6
li       r0, 0
stb      r5, 0x14(r1)
addi     r31, r1, 0x18
lfd      f3, 0x398(r30)
stb      r4, 0x15(r1)
lfd      f2, 0x3a0(r30)
stb      r3, 0x16(r1)
lfd      f1, 0x3a8(r30)
stb      r0, 0x17(r1)
lfd      f0, 0x3b0(r30)
lwz      r0, 0x14(r1)
stfd     f3, 0x18(r1)
lwz      r30, 0x38(r29)
stw      r0, 0x10(r1)
lbz      r5, 0x10(r1)
lbz      r4, 0x11(r1)
lbz      r3, 0x12(r1)
lbz      r0, 0x13(r1)
stfd     f2, 0x20(r1)
stfd     f1, 0x28(r1)
stfd     f0, 0x30(r1)
stb      r5, 8(r1)
stb      r4, 9(r1)
stb      r3, 0xa(r1)
stb      r0, 0xb(r1)

lbl_8040A384:
lwz      r5, 0(r31)
li       r3, 0
lwz      r6, 4(r31)
xor      r0, r5, r3
xor      r3, r6, r3
or.      r0, r3, r0
beq      lbl_8040A3FC
lwz      r12, 0(r30)
mr       r3, r30
lwz      r12, 0x3c(r12)
mtctr    r12
addi     r31, r31, 8
bctrl
cmplwi   r3, 0
beq      lbl_8040A384
lwz      r12, 0(r3)
lwz      r0, 8(r1)
lwz      r12, 0x13c(r12)
stw      r0, 0xc(r1)
mtctr    r12
bctrl
lbz      r4, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r4, 0x7c(r3)
lbz      r4, 0xe(r1)
stb      r0, 0x7d(r3)
lbz      r0, 0xf(r1)
stb      r4, 0x7e(r3)
stb      r0, 0x7f(r3)
b        lbl_8040A384

lbl_8040A3FC:
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A418
 * Size:	000078
 */
bool ObjDayEndResultTitl::doUpdateFadein()
{
	return false;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       updateCommon__Q32kh6Screen19ObjDayEndResultTitlFv
lwz      r3, 0x38(r31)
lbz      r4, 0x50(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r3, r13, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21
lbz      r4, 0x50(r31)
lbz      r3, 4(r3)
subfic   r0, r3, 0xff
cmpw     r4, r0
ble      lbl_8040A470
li       r0, 0xff
li       r3, 1
stb      r0, 0x50(r31)
b        lbl_8040A47C

lbl_8040A470:
add      r0, r4, r3
li       r3, 0
stb      r0, 0x50(r31)

lbl_8040A47C:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A490
 * Size:	000064
 */
bool ObjDayEndResultTitl::doUpdate()
{
	return false;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       updateCommon__Q32kh6Screen19ObjDayEndResultTitlFv
lwz      r3, 0x4c(r31)
addi     r3, r3, 1
stw      r3, 0x4c(r31)
lwz      r0, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21(r13)
cmplw    r3, r0
bge      lbl_8040A4D4
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_8040A4DC

lbl_8040A4D4:
li       r3, 1
b        lbl_8040A4E0

lbl_8040A4DC:
li       r3, 0

lbl_8040A4E0:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A4F4
 * Size:	000074
 */
bool ObjDayEndResultTitl::doUpdateFadeout()
{
	return false;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       updateCommon__Q32kh6Screen19ObjDayEndResultTitlFv
lwz      r3, 0x38(r31)
lbz      r4, 0x50(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r3, r13, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21
lbz      r0, 0x50(r31)
lbz      r3, 4(r3)
cmplw    r0, r3
bge      lbl_8040A548
li       r0, 0
li       r3, 1
stb      r0, 0x50(r31)
b        lbl_8040A554

lbl_8040A548:
subf     r0, r3, r0
li       r3, 0
stb      r0, 0x50(r31)

lbl_8040A554:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A568
 * Size:	0000CC
 */
void ObjDayEndResultTitl::doUpdateFadeoutFinish()
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, __vt__Q26Screen12SceneArgBase@ha
li       r6, 1
addi     r9, r4, __vt__Q26Screen12SceneArgBase@l
lis      r4, __vt__Q26Screen13StartSceneArg@ha
stw      r9, 8(r1)
addi     r0, r4, __vt__Q26Screen13StartSceneArg@l
lis      r4, __vt__Q32kh6Screen20SArgDayEndResultBase@ha
lis      r7, __vt__Q26Screen11SetSceneArg@ha
stw      r0, 8(r1)
addi     r5, r4, __vt__Q32kh6Screen20SArgDayEndResultBase@l
lis      r4, __vt__Q32kh6Screen20SArgDayEndResultItem@ha
li       r8, 0x4e23
stw      r9, 0x10(r1)
addi     r9, r7, __vt__Q26Screen11SetSceneArg@l
li       r7, 0
addi     r0, r4, __vt__Q32kh6Screen20SArgDayEndResultItem@l
stw      r5, 8(r1)
stw      r3, 0x1c(r1)
mr       r3, r31
stw      r9, 0x10(r1)
stw      r8, 0x14(r1)
stb      r7, 0x18(r1)
stb      r6, 0x19(r1)
stb      r6, 0xc(r1)
stw      r0, 8(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 0x10
bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
clrlwi.  r0, r3, 0x18
beq      lbl_8040A620
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 8
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg

lbl_8040A620:
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A634
 * Size:	000144
 */
void ObjDayEndResultTitl::doDraw(Graphics& gfx)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
mr       r29, r4
addi     r31, r29, 0xbc
stw      r28, 0x40(r1)
mr       r28, r3
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r0, 0xff
mr       r3, r31
stb      r0, 0x18(r1)
addi     r4, r1, 8
addi     r5, r1, 0xc
addi     r6, r1, 0x10
stb      r0, 0x19(r1)
addi     r7, r1, 0x14
stb      r0, 0x1a(r1)
stb      r0, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x14(r1)
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
li       r3, 0
bl       GXSetColorUpdate
li       r3, 1
bl       GXSetAlphaUpdate
bl       getRenderModeObj__6SystemFv
lhz      r30, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_805200A8@sda21(r2)
mr       r3, r31
stw      r4, 0x34(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_805200C8@sda21(r2)
stw      r0, 0x30(r1)
lfd      f0, 0x30(r1)
stw      r30, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
li       r3, 1
bl       GXSetColorUpdate
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r28)
mr       r4, r29
mr       r5, r31
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
lwz      r28, 0x40(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A778
 * Size:	0000E0
 */
void ObjDayEndResultTitl::updateCommon()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
lfs      f0, 0x44(r3)
lwz      r3, 0x3c(r3)
stfs     f0, 8(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x40(r31)
stfs     f0, 8(r3)
lwz      r3, 0x38(r31)
bl       animation__9J2DScreenFv
lfs      f1, 0x44(r31)
lis      r0, 0x4330
lfs      f0, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x44(r31)
lwz      r3, 0x3c(r31)
lfs      f2, 0x44(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8040A7F8
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x44(r31)

lbl_8040A7F8:
lfs      f1, 0x48(r31)
lis      r0, 0x4330
lfs      f0, lbl_805200B0@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805200B8@sda21(r2)
stfs     f0, 0x48(r31)
lwz      r3, 0x40(r31)
lfs      f2, 0x48(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8040A844
lfs      f0, lbl_805200A8@sda21(r2)
stfs     f0, 0x48(r31)

lbl_8040A844:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A858
 * Size:	000048
 */
SceneDayEndResultMail::SceneDayEndResultMail()
{
	_220         = 0;
	m_memArchive = nullptr;
}

/*
 * --INFO--
 * Address:	8040A8A0
 * Size:	00058C
 */
void SceneDayEndResultMail::doUserCallBackFunc(Resource::MgrCommand*)
{
	/*
stwu     r1, -0xd0(r1)
mflr     r0
lis      r4, lbl_80498830@ha
stw      r0, 0xd4(r1)
stmw     r24, 0xb0(r1)
addi     r30, r4, lbl_80498830@l
mr       r24, r3
addi     r3, r1, 0x78
addi     r4, r30, 0x400
li       r28, 0
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 0x78
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
cmplwi   r3, 0
beq      lbl_8040A8F4
lwz      r4, 0x34(r3)
addi     r3, r30, 0x41c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r28, r3
b        lbl_8040A908

lbl_8040A8F4:
addi     r3, r30, 0
li       r4, 0xa72
addi     r5, r2, lbl_80520104@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040A908:
lwz      r7, playData__4Game@sda21(r13)
li       r29, 4
lwz      r27, 0(r28)
lwz      r6, 0x84(r7)
lwz      r5, 0x88(r7)
slwi     r3, r27, 2
lwz      r4, 0x8c(r7)
lwz      r0, 0x90(r7)
stw      r6, 8(r1)
stw      r5, 0xc(r1)
stw      r4, 0x10(r1)
stw      r0, 0x14(r1)
bl       __nwa__FUl
stw      r3, 0x220(r24)
li       r26, 0
li       r31, 0
b        lbl_8040AA08

lbl_8040A94C:
li       r3, 0x18
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_8040A9C4
add      r9, r28, r29
srawi    r5, r26, 3
lwz      r0, 0(r9)
slwi     r7, r5, 3
lwz      r4, 4(r9)
subfic   r6, r5, 0xf
addi     r5, r1, 8
subf     r7, r7, r26
stw      r4, 4(r3)
li       r8, 1
lbzx     r4, r5, r6
slw      r5, r8, r7
stw      r0, 0(r3)
addi     r0, r9, 0xc
and      r6, r5, r4
lbz      r4, 8(r9)
neg      r5, r6
or       r5, r5, r6
stb      r4, 8(r3)
srwi     r5, r5, 0x1f
lbz      r4, 9(r9)
stb      r4, 9(r3)
lbz      r4, 0xa(r9)
stb      r4, 0xa(r3)
stw      r0, 0xc(r3)
stb      r5, 0x10(r3)

lbl_8040A9C4:
lwz      r4, 0x220(r24)
li       r5, 0
stwx     r3, r4, r31
lwz      r3, 0x220(r24)
lwzx     r3, r3, r31
lwz      r3, 0xc(r3)
b        lbl_8040A9E8

lbl_8040A9E0:
addi     r3, r3, 1
addi     r5, r5, 1

lbl_8040A9E8:
lbz      r0, 0(r3)
cmplwi   r0, 0
bne      lbl_8040A9E0
addi     r0, r5, 0x10
addi     r31, r31, 4
rlwinm   r0, r0, 0, 0, 0x1d
addi     r26, r26, 1
add      r29, r29, r0

lbl_8040AA08:
cmplw    r26, r27
blt      lbl_8040A94C
lis      r5, 0x52534C54@ha
lis      r4, 0x0044455F@ha
lwz      r3, 0x21c(r24)
addi     r6, r5, 0x52534C54@l
addi     r5, r4, 0x0044455F@l
li       r4, 0x4b48
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040AA48
addi     r3, r30, 0
addi     r5, r30, 0xd0
li       r4, 0xa82
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040AA48:
lwz      r31, 0x21c(r24)
lwz      r4, 0x4c(r31)
cmplwi   r4, 0
beq      lbl_8040AC80
lwz      r0, 0x50(r31)
cmplwi   r0, 0
bne      lbl_8040AC80
li       r3, -1
li       r5, 0
bl       create__12JKRSolidHeapFUlP7JKRHeapb
stw      r3, 0x50(r31)
li       r26, -1
li       r6, 0
li       r5, 0
mtctr    r27
cmplwi   r27, 0
ble      lbl_8040AAD0

lbl_8040AA8C:
lwz      r3, 0x220(r24)
lwz      r4, 0x54(r31)
lwzx     r3, r3, r5
lbz      r0, 8(r3)
cmpw     r4, r0
bne      lbl_8040AAC4
lbz      r0, 0x10(r3)
cmplwi   r0, 0
beq      lbl_8040AABC
lbz      r0, 9(r3)
extsb.   r0, r0
bge      lbl_8040AAC4

lbl_8040AABC:
mr       r26, r6
b        lbl_8040AAD0

lbl_8040AAC4:
addi     r5, r5, 4
addi     r6, r6, 1
bdnz     lbl_8040AA8C

lbl_8040AAD0:
cmpwi    r26, -1
bne      lbl_8040AAEC
addi     r3, r30, 0
li       r4, 0xa96
addi     r5, r2, lbl_8052010C@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040AAEC:
slwi     r28, r26, 2
li       r25, 0
li       r29, 0
b        lbl_8040AB90

lbl_8040AAFC:
lwz      r5, 0x220(r24)
lwz      r3, 0x54(r31)
lwzx     r4, r5, r29
lbz      r0, 8(r4)
cmpw     r3, r0
bne      lbl_8040AB88
lbz      r0, 0x10(r4)
cmplwi   r0, 0
beq      lbl_8040AB2C
lbz      r0, 9(r4)
extsb.   r0, r0
bge      lbl_8040AB88

lbl_8040AB2C:
lwzx     r3, r28, r5
lbz      r4, 9(r4)
lbz      r0, 9(r3)
extsb    r3, r4
extsb    r0, r0
cmpw     r3, r0
bgt      lbl_8040AB80
bne      lbl_8040AB88
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xac(r1)
lfd      f3, lbl_805200B8@sda21(r2)
stw      r0, 0xa8(r1)
lfs      f1, lbl_80520114@sda21(r2)
lfd      f2, 0xa8(r1)
lfs      f0, lbl_805200D0@sda21(r2)
fsubs    f2, f2, f3
fdivs    f1, f2, f1
fcmpo    cr0, f1, f0
bge      lbl_8040AB88

lbl_8040AB80:
mr       r26, r25
b        lbl_8040AB98

lbl_8040AB88:
addi     r29, r29, 4
addi     r25, r25, 1

lbl_8040AB90:
cmplw    r25, r27
blt      lbl_8040AAFC

lbl_8040AB98:
stw      r26, 0x60(r31)
lwz      r7, 0x60(r31)
cmpwi    r7, 0x80
bge      lbl_8040ABD0
srawi    r0, r7, 3
addi     r5, r1, 8
subfic   r6, r0, 0xf
li       r3, 1
slwi     r0, r0, 3
lbzx     r4, r5, r6
subf     r0, r0, r7
slw      r0, r3, r0
or       r0, r4, r0
stbx     r0, r5, r6

lbl_8040ABD0:
lwz      r4, playData__4Game@sda21(r13)
lwz      r3, 8(r1)
lwz      r0, 0xc(r1)
stw      r3, 0x84(r4)
lwz      r3, 0x10(r1)
stw      r0, 0x88(r4)
lwz      r0, 0x14(r1)
stw      r3, 0x8c(r4)
stw      r0, 0x90(r4)
lwz      r3, playData__4Game@sda21(r13)
lwz      r0, 0x60(r31)
addi     r3, r3, 0x84
extsb    r4, r0
bl       set_history__Q32kh6Screen12MailSaveDataFSc
lwz      r6, playData__4Game@sda21(r13)
addi     r3, r1, 0x48
addi     r4, r30, 0x42c
lwz      r5, 0x94(r6)
lwz      r0, 0x98(r6)
stw      r5, 0x228(r24)
stw      r0, 0x22c(r24)
lwz      r5, 0x9c(r6)
lwz      r0, 0xa0(r6)
stw      r5, 0x230(r24)
stw      r0, 0x234(r24)
lwz      r0, 0xa4(r6)
stw      r0, 0x238(r24)
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r0, 0x50(r31)
addi     r4, r1, 0x48
lwz      r3, gLoadResourceMgr@sda21(r13)
stw      r0, 0x60(r1)
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
cmplwi   r3, 0
beq      lbl_8040AC68
lwz      r0, 0x34(r3)
stw      r0, 0x224(r24)
b        lbl_8040ACAC

lbl_8040AC68:
addi     r3, r30, 0
addi     r5, r30, 0x448
li       r4, 0xabd
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce
b        lbl_8040ACAC

lbl_8040AC80:
lwz      r4, playData__4Game@sda21(r13)
lwz      r3, 0x94(r4)
lwz      r0, 0x98(r4)
stw      r3, 0x228(r24)
stw      r0, 0x22c(r24)
lwz      r3, 0x9c(r4)
lwz      r0, 0xa0(r4)
stw      r3, 0x230(r24)
stw      r0, 0x234(r24)
lwz      r0, 0xa4(r4)
stw      r0, 0x238(r24)

lbl_8040ACAC:
addi     r3, r24, 4
addi     r4, r30, 0x454
bl       makeLanguageResName__Q22og9newScreenFPcPCc
addi     r3, r1, 0x18
addi     r4, r24, 4
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 0x18
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
or.      r25, r3, r3
beq      lbl_8040AE04
li       r3, 0xec
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_8040ADF0
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r4, __vt__Q32kh6Screen19ObjDayEndResultMail@ha
addi     r5, r3, __vt__Q32kh6Screen19ObjDayEndResultBase@l
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
stw      r5, 0(r26)
addi     r0, r5, 0x10
addi     r6, r4, __vt__Q32kh6Screen19ObjDayEndResultMail@l
li       r8, 0
stw      r0, 0x18(r26)
li       r7, 0xff
lfs      f1, lbl_805200A8@sda21(r2)
addi     r5, r6, 0x10
stw      r8, 0x38(r26)
li       r4, 5
li       r0, 1
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
stw      r8, 0x3c(r26)
stw      r8, 0x40(r26)
stw      r8, 0x4c(r26)
stw      r8, 0x50(r26)
stw      r8, 0x54(r26)
stw      r8, 0x58(r26)
stw      r8, 0x5c(r26)
stw      r8, 0x70(r26)
stw      r8, 0x74(r26)
stfs     f1, 0x78(r26)
stfs     f1, 0x6c(r26)
stfs     f1, 0x68(r26)
stfs     f1, 0x64(r26)
stfs     f1, 0x60(r26)
stfs     f1, 0x48(r26)
stfs     f1, 0x44(r26)
stfs     f1, 0x88(r26)
stfs     f1, 0x84(r26)
stfs     f1, 0x80(r26)
stfs     f1, 0x7c(r26)
stw      r8, 0x8c(r26)
stb      r7, 0x95(r26)
stb      r7, 0x94(r26)
stw      r8, 0x90(r26)
stw      r6, 0(r26)
stw      r5, 0x18(r26)
stw      r4, 0x98(r26)
stw      r8, 0x9c(r26)
stw      r8, 0xa0(r26)
stw      r8, 0xa4(r26)
stw      r8, 0x4c(r26)
stw      r8, 0xac(r26)
stw      r8, 0xa8(r26)
stfs     f1, 0xb0(r26)
stw      r8, 0xb4(r26)
stw      r0, 0xbc(r26)
stw      r0, 0xb8(r26)
stw      r8, 0xc0(r26)
stw      r8, 0xc4(r26)
stw      r8, 0xc8(r26)
stw      r8, 0xd0(r26)
stw      r8, 0xcc(r26)
stw      r8, 0xd4(r26)
stfs     f1, 0xdc(r26)
stfs     f1, 0xd8(r26)
lfs      f0, 0x40(r3)
stfs     f0, 0xe0(r26)
stfs     f1, 0xe4(r26)
stw      r8, 0xe8(r26)

lbl_8040ADF0:
lwz      r5, 0x34(r25)
mr       r3, r24
mr       r4, r26
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
b        lbl_8040AE18

lbl_8040AE04:
addi     r3, r30, 0
li       r4, 0xacc
addi     r5, r2, lbl_80520104@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040AE18:
lmw      r24, 0xb0(r1)
lwz      r0, 0xd4(r1)
mtlr     r0
addi     r1, r1, 0xd0
blr
	*/
}

// members aren't getting initialised in correct order for some reason?
ObjDayEndResultBase::StaticValues ObjDayEndResultBase::msVal = ObjDayEndResultBase::StaticValues();
ObjDayEndResultTitl::StaticValues ObjDayEndResultTitl::msVal = ObjDayEndResultTitl::StaticValues();

} // namespace Screen
} // namespace kh

// /*
//  * --INFO--
//  * Address:	8040B300
//  * Size:	0000CC
//  */
// void __sinit_khDayEndResult_cpp()
// {
// 	/*
// 	lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
// 	lfs      f12, lbl_80520154@sda21(r2)
// 	addi     r11, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
// 	lfs      f9, lbl_805200FC@sda21(r2)
// 	lfs      f10, lbl_805200B0@sda21(r2)
// 	li       r7, 0x5a
// 	lfs      f7, lbl_805200A8@sda21(r2)
// 	li       r10, 8
// 	lfs      f11, lbl_80520158@sda21(r2)
// 	li       r9, 3
// 	lfs      f8, lbl_8052015C@sda21(r2)
// 	li       r8, 0x1e
// 	lfs      f6, lbl_80520160@sda21(r2)
// 	li       r6, 0xa0
// 	lfs      f5, lbl_80520164@sda21(r2)
// 	li       r5, 0x20
// 	lfs      f4, lbl_80520168@sda21(r2)
// 	li       r4, 0x14
// 	lfs      f3, lbl_8052016C@sda21(r2)
// 	li       r0, 0x10
// 	lfs      f2, lbl_80520170@sda21(r2)
// 	addi     r3, r13, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21
// 	lfs      f1, lbl_80520174@sda21(r2)
// 	lfs      f0, lbl_80520178@sda21(r2)
// 	stfs     f12, 0(r11)
// 	stfs     f11, 4(r11)
// 	stfs     f10, 8(r11)
// 	stfs     f10, 0xc(r11)
// 	stfs     f9, 0x10(r11)
// 	stw      r10, 0x24(r11)
// 	stw      r9, 0x28(r11)
// 	stb      r8, 0x4c(r11)
// 	stb      r7, 0x4d(r11)
// 	stb      r6, 0x4e(r11)
// 	stb      r5, 0x4f(r11)
// 	stb      r4, 0x50(r11)
// 	stfs     f8, 0x14(r11)
// 	stfs     f7, 0x18(r11)
// 	stfs     f7, 0x1c(r11)
// 	stfs     f6, 0x20(r11)
// 	stfs     f5, 0x2c(r11)
// 	stfs     f4, 0x30(r11)
// 	stfs     f3, 0x34(r11)
// 	stfs     f2, 0x38(r11)
// 	stfs     f1, 0x40(r11)
// 	stfs     f0, 0x48(r11)
// 	stfs     f9, 0x3c(r11)
// 	stfs     f9, 0x44(r11)
// 	stw      r7, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21(r13)
// 	stb      r0, 4(r3)
// 	blr
// 	*/
// }
