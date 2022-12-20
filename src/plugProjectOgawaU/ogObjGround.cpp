#include "og/newScreen/Ground.h"
#include "og/newScreen/Cave.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/SunMeter.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "og/Screen/BloGroup.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char unusedObjGroundArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	8030DEB8
 * Size:	000094
 */
ObjGround::ObjGround(char const* name)
    : m_fadeLevel(0.0f)
    , m_scale(0.0f)
{
	m_name         = name;
	m_disp         = nullptr;
	m_otakara      = nullptr;
	m_bloGroup     = nullptr;
	m_sunMeter     = nullptr;
	m_doping       = nullptr;
	m_lifeGauge1   = nullptr;
	m_lifeGauge2   = nullptr;
	m_pikiCounter  = nullptr;
	m_sensorScreen = nullptr;
	_64            = false;
	m_pokos        = 0;
	_6C            = 0.0f;
}

/*
 * --INFO--
 * Address:	8030DF4C
 * Size:	0000AC
 */
ObjGround::~ObjGround() { }

/*
 * --INFO--
 * Address:	8030DFF8
 * Size:	000464
 */
void ObjGround::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberGround* disp = static_cast<og::Screen::DispMemberGround*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_GROUND)) {
		m_disp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberGround;

	} else {
		JUT_PANICLINE(186, "ERR! in ObjCave CreateŽ¸”sI\n"); // yes they used the wrong class name - lmao
	}

	m_sunMeter     = new og::Screen::SunMeter;
	m_doping       = new og::Screen::DopingScreen;
	m_lifeGauge1   = new og::Screen::NaviLifeGauge;
	m_lifeGauge2   = new og::Screen::NaviLifeGauge;
	m_pikiCounter  = new og::Screen::PikminCounter;
	m_sensorScreen = new P2DScreen::Mgr_tuning;

	m_bloGroup = new og::Screen::BloGroup(6);
	m_bloGroup->addBlo("sun_meter.blo", m_sunMeter, 0x1040000, arc);
	m_bloGroup->addBlo("doping.blo", m_doping, 0x1040000, arc);
	m_bloGroup->addBlo("orima.blo", m_lifeGauge1, 0x1040000, arc);
	m_bloGroup->addBlo("orima.blo", m_lifeGauge2, 0x1040000, arc);
	m_bloGroup->addBlo("gr_pikmin.blo", m_pikiCounter, 0x1040000, arc);
	m_bloGroup->addBlo("sensor.blo", m_sensorScreen, 0x1040000, arc);

	m_sunMeter->setCallBack();
	m_doping->setCallBack(arc);
	m_lifeGauge1->setCallBack(&m_disp->m_dataNavi1, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	disp = m_disp;
	if (disp->m_payDebt) {
		m_lifeGauge2->setCallBack(&m_disp->m_dataNavi2, og::Screen::CallBack_LifeGauge::LIFEGAUGE_PRESIDENT);
	} else {
		m_lifeGauge2->setCallBack(&m_disp->m_dataNavi2, og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
	}
	m_pikiCounter->setCallBack(arc);
	m_pokos = m_disp->m_dataGame.m_pokoCount;
	_6C     = 0.0f;

	m_otakara = new og::Screen::OtakaraSensor;
	m_otakara->init(m_sensorScreen->search('Nhari'), m_sensorScreen->search('Nsensor'), m_disp->m_radarState);
	m_doping->setDopingEnable(m_disp->m_unlockedSpicy, m_disp->m_unlockedBitter);
}

/*
 * --INFO--
 * Address:	8030E45C
 * Size:	00029C
 */
void ObjGround::commonUpdate()
{
	if (!og::newScreen::checkMovieActive()) {
		m_sunMeter->m_currentTime = m_disp->m_dataGame.m_sunGaugeRatio;

		og::Screen::DispMemberGround* disp = m_disp;
		if (disp->m_dataNavi1.m_activeNaviID) {
			m_doping->setParam(disp->m_dataNavi1);
			m_pikiCounter->setParam(m_disp->m_dataGame, m_disp->m_dataNavi1);
		} else {
			m_doping->setParam(disp->m_dataNavi2);
			m_pikiCounter->setParam(m_disp->m_dataGame, m_disp->m_dataNavi2);
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

	m_otakara->setParam(m_disp->m_treasureDist, m_disp->m_radarState, m_disp->m_radarEnabled, m_disp->m_allTreasuresGotten);
	m_otakara->updateInit();

	if (m_disp->m_hasRadar) {
		m_otakara->show();
		m_otakara->update();
		m_otakara->adjPos(msVal.m_sensorX, msVal.m_sensorY);
		m_otakara->adjScale(msVal.m_sensorScale);
		m_otakara->setSensorVec2(ObjCave::msVal._34, ObjCave::msVal._38);
		m_otakara->setSensorVec3(ObjCave::msVal._3C, ObjCave::msVal._40);

	} else {
		m_otakara->hide();
	}

	if (m_disp->m_hasBitter) {
		m_doping->openDopingUp();
		m_doping->openDopingKey();
	}

	if (m_disp->m_hasSpicy) {
		m_doping->openDopingDown();
		m_doping->openDopingKey();
	}

	m_doping->adjPos(msVal.m_dopingX, msVal.m_dopingY);
}

/*
 * --INFO--
 * Address:	8030E6F8
 * Size:	000024
 */
bool ObjGround::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	8030E71C
 * Size:	000090
 */
void ObjGround::doDraw(Graphics& gfx)
{
	if (m_disp->m_isNotDay1) {
		m_sunMeter->show();
	} else {
		m_sunMeter->hide();
	}

	if (m_bloGroup)
		m_bloGroup->draw(&gfx.m_perspGraph);

	if (m_disp->m_hasRadar)
		m_otakara->draw(gfx.m_perspGraph);
}

/*
 * --INFO--
 * Address:	8030E7AC
 * Size:	000014
 */
bool ObjGround::doStart(::Screen::StartSceneArg const*)
{
	m_fadeLevel = 0.0f;
	m_scale     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8030E7C0
 * Size:	000010
 */
bool ObjGround::doEnd(::Screen::EndSceneArg const*)
{
	m_fadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8030E7D0
 * Size:	000074
 */
bool ObjGround::doUpdateFadein()
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
 * Address:	8030E844
 * Size:	000004
 */
void ObjGround::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8030E848
 * Size:	00000C
 */
void ObjGround::doUpdateFinish() { m_fadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	8030E854
 * Size:	00007C
 */
bool ObjGround::doUpdateFadeout()
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
 * Address:	8030E8D0
 * Size:	000004
 */
void ObjGround::doUpdateFadeoutFinish() { }

ObjGround::StaticValues ObjGround::msVal;

} // namespace newScreen
} // namespace og
