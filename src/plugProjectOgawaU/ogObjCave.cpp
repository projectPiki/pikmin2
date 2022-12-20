#include "og/newScreen/Cave.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "og/Screen/TotalPokoScreen.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char objCaveUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	8031C008
 * Size:	00009C
 */
ObjCave::ObjCave(const char* name)
{
	m_fadeLevel       = 0.0f;
	m_scale           = 0.0f;
	m_name            = name;
	m_disp            = nullptr;
	m_otakara         = nullptr;
	m_bloGroup        = nullptr;
	m_doping          = nullptr;
	m_lifeGauge1      = nullptr;
	m_lifeGauge2      = nullptr;
	m_pikiCounter     = nullptr;
	m_totalPoko       = nullptr;
	m_sensorScreen    = nullptr;
	m_totalPokoActive = false;
	m_pokos           = 0;
	m_totalPokoTimer  = 0.0f;
	m_paneChika       = nullptr;
	m_paneFinalf      = nullptr;
}

/*
 * --INFO--
 * Address:	8031C0A4
 * Size:	0000AC
 */
ObjCave::~ObjCave() { }

/*
 * --INFO--
 * Address:	8031C150
 * Size:	000518
 */
void ObjCave::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberCave* disp = static_cast<og::Screen::DispMemberCave*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CAVE)) {
		m_disp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberCave;

	} else {
		JUT_PANICLINE(189, "ERR! in ObjCave CreateŽ¸”sI\n");
	}

	m_doping       = new og::Screen::DopingScreen;
	m_lifeGauge1   = new og::Screen::NaviLifeGauge;
	m_lifeGauge2   = new og::Screen::NaviLifeGauge;
	m_pikiCounter  = new og::Screen::PikminCounterCave;
	m_totalPoko    = new og::Screen::TotalPokoScreen;
	m_sensorScreen = new P2DScreen::Mgr_tuning;

	m_bloGroup = new og::Screen::BloGroup(6);
	m_bloGroup->addBlo("doping.blo", m_doping, 0x1040000, arc);
	m_bloGroup->addBlo("orima.blo", m_lifeGauge1, 0x1040000, arc);
	m_bloGroup->addBlo("orima.blo", m_lifeGauge2, 0x1040000, arc);
	m_bloGroup->addBlo("cave_pikmin.blo", m_pikiCounter, 0x1040000, arc);
	m_bloGroup->addBlo("grand_cave_poko.blo", m_totalPoko, 0x1040000, arc);
	m_bloGroup->addBlo("sensor.blo", m_sensorScreen, 0x1040000, arc);

	m_doping->setCallBack(arc);
	m_lifeGauge1->setCallBack(&m_disp->m_olimarData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	disp = m_disp;
	if (disp->m_payDebt) {
		m_lifeGauge2->setCallBack(&m_disp->m_louieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_PRESIDENT);
	} else {
		m_lifeGauge2->setCallBack(&m_disp->m_louieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
	}

	m_pikiCounter->setCallBack(arc);
	m_totalPoko->setCallBack(arc, msVal._08, msVal._0C, msVal._10, msVal._14);
	m_paneChika  = og::Screen::TagSearch(m_pikiCounter, 'Pchika');
	m_paneFinalf = og::Screen::TagSearch(m_pikiCounter, 'Nfinalf');

	if (m_disp->m_isFinalFloor) {
		m_paneChika->m_isVisible  = false;
		m_paneFinalf->m_isVisible = true;
	} else {
		m_paneChika->m_isVisible  = true;
		m_paneFinalf->m_isVisible = false;
	}

	m_pokos = m_disp->m_dataGame.m_pokoCount;
	m_totalPoko->setTotalPoko(m_pokos);
	m_totalPokoTimer                   = 0.0f;
	m_pikiCounter->m_isTotalPokoActive = false;
	m_totalPoko->closeTotalPoko();
	m_totalPoko->hideTotalPoko();

	m_otakara = new og::Screen::OtakaraSensor;

	m_otakara->init(m_sensorScreen->search('Nhari'), m_sensorScreen->search('Nsensor'), m_disp->m_radarState);
	m_doSensorEff = true;

	m_otakara->setSensorVec1(msVal._2C, msVal._30);
	m_doping->setDopingEnable(m_disp->m_isBitterUnlocked, m_disp->m_isSpicyUnlocked);
}

/*
 * --INFO--
 * Address:	8031C668
 * Size:	0003A4
 */
void ObjCave::commonUpdate()
{
	if (m_disp) {
		if (m_disp->m_isFinalFloor) {
			m_paneChika->hide();
			m_paneFinalf->show();

		} else {
			m_paneChika->show();
			m_paneFinalf->hide();
		}

		m_doping->setParam(m_disp->m_olimarData);

		og::Screen::DispMemberCave* disp = m_disp;
		if (disp->m_olimarData.m_activeNaviID) {
			m_pikiCounter->setParam(disp->m_dataGame, disp->m_olimarData);
		} else {
			m_pikiCounter->setParam(disp->m_dataGame, disp->m_louieData);
		}

		if (m_totalPokoActive) {
			m_totalPokoTimer += sys->m_deltaTime;
			if (m_totalPokoTimer > 2.0f) {
				m_totalPokoActive = false;
			}

			int pokos = m_disp->m_dataGame.m_pokoCount;
			if (pokos != m_pokos) {
				m_pokos = pokos;
				m_totalPoko->setTotalPoko(m_pokos);
				m_totalPokoTimer = 0.0f;
			}

		} else {
			if (m_disp->m_dataGame.m_pokoCount != m_pokos) {
				m_totalPokoActive = true;
				m_pokos           = m_disp->m_dataGame.m_pokoCount;
				m_totalPoko->setTotalPoko(m_pokos);
				m_totalPokoTimer = 0.0f;
			}
		}

		if (m_totalPokoActive) {
			m_pikiCounter->m_isTotalPokoActive = true;
			m_totalPoko->showTotalPoko();

		} else {
			m_pikiCounter->m_isTotalPokoActive = false;
			m_totalPoko->closeTotalPoko();
		}

		if (m_disp->m_payDebt) {
			m_lifeGauge2->setType(og::Screen::CallBack_LifeGauge::LIFEGAUGE_PRESIDENT);

		} else {
			m_lifeGauge2->setType(og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
		}
	}

	u16 width  = System::getRenderModeObj()->fbWidth;
	u16 height = System::getRenderModeObj()->efbHeight;

	m_bloGroup->rotate((f32)width / 2, (f32)height / 2, J2DROTATE_Z, 0.0f);

	f32 cosTheta = -(pikmin2_cosf((m_scale + 1.0f) * PI / 2));
	m_bloGroup->scale((1.0f - cosTheta) * 0.4f + 1.0f);
	m_bloGroup->update();

	if (m_disp->m_drawSensor && m_doSensorEff && m_disp->_5F) {
		m_otakara->startSensorEff();
		m_doSensorEff = false;
	}

	m_otakara->setParam(m_disp->m_treasureDist, m_disp->m_radarState, m_disp->m_radarEnabled, m_disp->m_allTreasureGotten);
	m_otakara->updateInit();

	if (m_disp->m_drawSensor) {
		m_otakara->show();
		m_otakara->update();
		m_otakara->adjPos(msVal._18, msVal._1C);
		m_otakara->adjScale(msVal._20);
		m_otakara->setSensorVec2(msVal._34, msVal._38);
		m_otakara->setSensorVec3(msVal._3C, msVal._40);

	} else {
		m_otakara->hide();
	}

	m_doping->setDopingEnable(m_disp->m_isBitterUnlocked, m_disp->m_isSpicyUnlocked);
	m_doping->adjPos(msVal._24, msVal._28);
}

/*
 * --INFO--
 * Address:	8031CA0C
 * Size:	000024
 */
bool ObjCave::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	8031CA30
 * Size:	000064
 */
void ObjCave::doDraw(Graphics& gfx)
{
	if (m_bloGroup) {
		m_bloGroup->draw(&gfx.m_perspGraph);
	}

	if (m_disp->m_drawSensor) {
		m_otakara->draw(gfx.m_perspGraph);
	}
}

/*
 * --INFO--
 * Address:	8031CA94
 * Size:	000014
 */
bool ObjCave::doStart(::Screen::StartSceneArg const*)
{
	m_fadeLevel = 0.0f;
	m_scale     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031CAA8
 * Size:	000010
 */
bool ObjCave::doEnd(::Screen::EndSceneArg const*)
{
	m_fadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031CAB8
 * Size:	000074
 */
bool ObjCave::doUpdateFadein()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > msVal._00) {
		m_fadeLevel = msVal._00;
		check       = true;
	}

	m_scale = m_fadeLevel / msVal._00;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031CB2C
 * Size:	000004
 */
void ObjCave::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031CB30
 * Size:	00000C
 */
void ObjCave::doUpdateFinish() { m_fadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	8031CB3C
 * Size:	00007C
 */
bool ObjCave::doUpdateFadeout()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > msVal._04) {
		m_fadeLevel = msVal._04;
		check       = true;
	}

	m_scale = 1.0f - m_fadeLevel / msVal._04;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031CBB8
 * Size:	000004
 */
void ObjCave::doUpdateFadeoutFinish() { }

ObjCave::StaticValues ObjCave::msVal;

} // namespace newScreen
} // namespace og