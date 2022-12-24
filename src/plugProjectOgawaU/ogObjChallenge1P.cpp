#include "og/newScreen/Challenge.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char objChall1PUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	80327D48
 * Size:	000074
 */
ObjChallenge1P::ObjChallenge1P(const char* name)
{
	m_name        = name;
	m_disp        = nullptr;
	m_bloGroup    = nullptr;
	m_doping      = nullptr;
	m_lifeGauge1  = nullptr;
	m_lifeGauge2  = nullptr;
	m_pikiCounter = nullptr;
	m_pokoScreen  = nullptr;
}

/*
 * --INFO--
 * Address:	80327DBC
 * Size:	000068
 */
ObjChallenge1P::~ObjChallenge1P() { }

/*
 * --INFO--
 * Address:	80327E24
 * Size:	000678
 */
void ObjChallenge1P::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberChallenge1P* disp = static_cast<og::Screen::DispMemberChallenge1P*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CHALLENGE_1P)) {
		m_disp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberChallenge1P;

	} else {
		JUT_PANICLINE(122, "ERR! in ObjChallenge1P CreateŽ¸”sI\n");
	}

	m_doping      = new og::Screen::DopingScreen;
	m_lifeGauge1  = new og::Screen::NaviLifeGauge;
	m_lifeGauge2  = new og::Screen::NaviLifeGauge;
	m_pikiCounter = new og::Screen::PikminCounterChallenge1P;
	m_pokoScreen  = new P2DScreen::Mgr_tuning;

	m_bloGroup = new og::Screen::BloGroup(5);
	m_bloGroup->addBlo("doping.blo", m_doping, 0x1040000, arc);
	m_bloGroup->addBlo("orima.blo", m_lifeGauge1, 0x1040000, arc);
	m_bloGroup->addBlo("orima.blo", m_lifeGauge2, 0x1040000, arc);
	m_bloGroup->addBlo("cave_pikmin.blo", m_pikiCounter, 0x1040000, arc);
	m_bloGroup->addBlo("2P_challenge_poko.blo", m_pokoScreen, 0x1040000, arc);

	m_doping->setCallBack(arc);
	m_lifeGauge1->setCallBack(&m_disp->m_olimarData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	m_lifeGauge2->setCallBack(&m_disp->m_louieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
	m_pikiCounter->setCallBack(arc);

	m_doping->setDopingEnable(true, true);
	og::Screen::CallBack_CounterRV* counter = og::Screen::setCallBack_CounterRV(m_pokoScreen, 'Ppoko1', &m_disp->m_pokos, 6, 1, 1, arc);
	counter->m_scaleUpSoundID               = PSSE_SY_REGI_SUM_UP;
	og::Screen::setCallBack_CounterRV(m_pokoScreen, 'PdeadP1', &m_disp->m_deadPiki, 6, 1, 1, arc);
	m_timeLeftInt = m_timeLeft;
	counter       = og::Screen::setCallBack_CounterRV(m_pokoScreen, 'Ptime1', &m_timeLeftInt, 6, 1, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);

	J2DPane* pane  = m_pokoScreen->search('Nmenu01');
	msVal.m_menu01 = pane;
	msVal._28      = pane->_0D4.x;
	msVal._2C      = pane->_0D4.y;
	msVal._30      = pane->m_scale.x;
	msVal._34      = pane->m_scale.y;
	msVal._38      = 0.0f;
	msVal._3C      = 0.0f;
	msVal._40      = 1.0f;
	msVal._44      = 1.0f;
	if (pane) {
		pane->setOffset(msVal._28, 0.0f, msVal._2C, 0.0f);
		msVal.m_menu01->updateScale(msVal._30 * msVal._40, msVal._34 * msVal._44);
	}

	J2DPane* pane2 = m_pokoScreen->search('Nmenu00');
	msVal.m_menu00 = pane2;
	msVal._04      = pane2->_0D4.x;
	msVal._08      = pane2->_0D4.y;
	msVal._0C      = pane2->m_scale.x;
	msVal._10      = pane2->m_scale.y;
	msVal._14      = -293.0f;
	msVal._18      = -165.0f;
	msVal._1C      = 1.0f;
	msVal._20      = 1.0f;
	if (pane2) {
		pane2->setOffset(msVal._04, -293.0f, msVal._08, -165.0f);
		msVal.m_menu00->updateScale(msVal._0C * msVal._1C, msVal._10 * msVal._20);
	}

	J2DPane* pane3 = m_pokoScreen->search('Nmenu02');
	msVal.m_menu02 = pane3;
	msVal._4C      = pane3->_0D4.x;
	msVal._50      = pane3->_0D4.y;
	msVal._54      = pane3->m_scale.x;
	msVal._58      = pane3->m_scale.y;
	msVal._5C      = -160.0f;
	msVal._60      = -200.0f;
	msVal._64      = 1.0f;
	msVal._68      = 1.0f;
	if (pane3) {
		pane3->setOffset(msVal._4C, -160.0f, msVal._50, -200.0f);
		msVal.m_menu02->updateScale(msVal._54 * msVal._64, msVal._58 * msVal._68);
	}

	setSubLevel(m_disp->m_dataGame.m_floorNum);
	doCreateAfter(arc, counter);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
void ObjChallenge1P::commonUpdate()
{
	og::Screen::DispMemberChallenge1P* disp = m_disp;
	if (disp) {
		updateTimer(disp->_5C, disp->_60);
		m_doping->setParam(m_disp->m_olimarData);
		disp = m_disp;
		if (disp->m_olimarData.m_activeNaviID) {
			m_pikiCounter->setParam(disp->m_dataGame, disp->m_olimarData);
		} else {
			m_pikiCounter->setParam(disp->m_dataGame, disp->m_louieData);
		}
	}

	P2DScreen::Mgr_tuning* screen = m_pokoScreen;
	m_pokoScreen->setXY((pikmin2_cosf(m_scale * PI) + 1.0f) / 2 * 300.0f, 0.0f);

	u16 width  = System::getRenderModeObj()->fbWidth;
	u16 height = System::getRenderModeObj()->efbHeight;

	m_bloGroup->rotate((f32)width / 2, (f32)height / 2, J2DROTATE_Z, 0.0f);

	f32 cosTheta = -(pikmin2_cosf((m_scale + 1.0f) * PI / 2));
	m_bloGroup->scale((1.0f - cosTheta) * 0.4f + 1.0f);
	m_bloGroup->update();
}

/*
 * --INFO--
 * Address:	8032849C
 * Size:	0001D4
 */
bool ObjChallenge1P::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	80328670
 * Size:	000030
 */
void ObjChallenge1P::doDraw(Graphics& gfx)
{
	if (m_bloGroup) {
		m_bloGroup->draw(&gfx.m_perspGraph);
	}
}

/*
 * --INFO--
 * Address:	803286A0
 * Size:	000228
 */
bool ObjChallenge1P::doUpdateFadein()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;

	if (m_fadeLevel > ObjChallengeBase::msBaseVal._00) {
		m_fadeLevel = ObjChallengeBase::msBaseVal._00;
		check       = true;
	}
	m_scale = m_fadeLevel / ObjChallengeBase::msBaseVal._00;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	803288C8
 * Size:	000004
 */
void ObjChallenge1P::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	803288CC
 * Size:	00000C
 */
void ObjChallenge1P::doUpdateFinish() { m_fadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	803288D8
 * Size:	000230
 */
bool ObjChallenge1P::doUpdateFadeout()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > ObjChallengeBase::msBaseVal._04) {
		m_fadeLevel = ObjChallengeBase::msBaseVal._04;
		check       = true;
	}
	m_scale = 1.0f - m_fadeLevel / ObjChallengeBase::msBaseVal._04;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	80328B08
 * Size:	000004
 */
void ObjChallenge1P::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	80328B0C
 * Size:	000074
 */
bool ObjChallenge1P::doStart(::Screen::StartSceneArg const* arg)
{
	ObjChallengeBase::doStart(arg);
	SArgChallenge1P* challArg = static_cast<SArgChallenge1P*>((::Screen::StartSceneArg*)(arg));
	if (challArg && challArg->getSceneType() == SCENE_CHALLENGE_1P) {
		m_incTimeLeftDelay = (challArg->_04);
	} else {
		m_incTimeLeftDelay = 0.0f;
	}
	return true;
}

ObjChallenge1P::StaticValues ObjChallenge1P::msVal;

} // namespace newScreen
} // namespace og
