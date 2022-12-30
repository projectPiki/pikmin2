#include "og/newScreen/Cave.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/OtakaraSensor.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/AngleMgr.h"
#include "efx2d/T2DSensor.h"
#include "og/Sound.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "System.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "PS.h"

namespace og {
namespace Screen {

static const char otakaraSensorName[] = "ogOtakaraSensor";

/*
 * --INFO--
 * Address:	8032D8E8
 * Size:	000140
 */
OtakaraSensor::OtakaraSensor()
{
	m_pane1             = nullptr;
	m_pane2             = nullptr;
	m_currReactionLevel = 0.0f;
	m_angle             = 0.0f;
	m_currAngle         = 0.0f;
	m_reactTimer        = 0.0f;
	m_panePos           = 0.0f;
	m_doAngleOffset     = false;
	m_scale             = 1.0f;
	m_scaleMgr          = new ScaleMgr;
	m_angleOffsetMod    = 3.0f;
	m_efxActive         = false;
	m_angleMgr          = new AngleMgr;
	m_angleMgr->init(0.0f, 0.3f, 0.0f);
	m_timer             = 0.0f;
	m_angleOffs         = 0.0f;
	m_angleOffsetMod2   = 0.3f;
	m_doStartAppear     = false;
	m_state             = 1;
	m_sensorGetTimer    = 0.0f;
	_4C.x               = 0.2f;
	_4C.y               = 0.25f;
	m_isFuefukid        = false;
	m_randAngle         = 0.0f;
	m_completeEfxOffset = 0.0f;
	m_appearEfxOffset   = 0.0f;
	m_enabled           = false;
	m_notreasures       = true;
	m_doIncNoise        = false;
	m_isInit            = false;
	m_treeColor         = nullptr;
	m_noiseLevel        = 0.0f;
	m_isPoweringOff     = false;
	m_powerOffTimer     = 3.2f;
	m_noiseTimer        = 0.0f;
	m_canIncNoise       = false;
	m_isPoweredOff      = false;
	m_setGrayTimer      = 0.0f;
}

/*
 * --INFO--
 * Address:	8032DA28
 * Size:	0000A8
 */
void OtakaraSensor::init(J2DPane* pane1, J2DPane* pane2, int state)
{
	if (pane1 && pane2) {
		m_pane1             = pane1;
		m_pane2             = pane2;
		m_currReactionLevel = 0.0f;
		m_angle             = 0.0f;
		m_panePos.x         = m_pane2->m_offset.x;
		m_panePos.y         = m_pane2->m_offset.y;
		m_state             = state;
		m_isInit            = false;
		m_treeColor         = og::Screen::capturePictureTreeColor(pane2, 30);
	} else {
		JUT_PANICLINE(237, "NULL pane.\n");
	}
	m_notreasures = true;
}

/*
 * --INFO--
 * Address:	8032DAD0
 * Size:	000150
 */
void OtakaraSensor::setParam(f32 dist, int state, bool enabled, bool complete)
{
	bool flag         = true;
	m_isFuefukid      = false;
	m_enabled         = enabled;
	f32 temp          = 12.0f;
	m_notreasures     = complete;
	m_angleOffsetMod2 = 0.3f;
	int old           = m_state;
	m_state           = state;

	switch (m_state) {
	case 0:
		temp = 0.0f;
		flag = false;
		break;
	case 1:
		m_angleOffsetMod2 = 1.0f;
		break;
	case 2:
		m_angleOffsetMod2 = 1.0f;
		break;
	case 3:
		temp              = 100.0f;
		m_angleOffsetMod2 = 0.4f;
		break;
	case 4:
		temp              = 100.0f;
		m_angleOffsetMod2 = 0.4f;
		m_isFuefukid      = true;
		if (m_state != old) {
			m_randAngle = randFloat() * 180.0f - 90.0f;
		}
		break;
	}
	m_currReactionLevel = calcLevel(dist);
	m_doAngleOffset     = flag;
	m_angleOffsetMod    = temp;
}

/*
 * --INFO--
 * Address:	8032DC20
 * Size:	00005C
 */
f32 OtakaraSensor::calcLevel(f32 distance)
{
	f32 level = 0.0f;
	if (m_state != 0) {
		level = 1.0f - (distance / 900.0f);

		if (level < 0.0f) {
			level = 0.0f;

		} else if (level > 1.0f) {
			level = 1.0f;
		}

		level *= level;
		level *= 0.95f;
		level += 0.05f;
	}
	return level;
}

/*
 * --INFO--
 * Address:	8032DC7C
 * Size:	000010
 */
void OtakaraSensor::show() { m_pane2->show(); }

/*
 * --INFO--
 * Address:	8032DC8C
 * Size:	000010
 */
void OtakaraSensor::hide() { m_pane2->hide(); }

/*
 * --INFO--
 * Address:	8032DC9C
 * Size:	000014
 */
void OtakaraSensor::startSensorEff()
{
	m_efxActive = true;
	m_timer     = 0.3f;
}

/*
 * --INFO--
 * Address:	8032DCB0
 * Size:	0000D8
 */
void OtakaraSensor::adjPos(f32 x, f32 y)
{
	f32 offs = 0.0f;
	if (m_efxActive) {
		f32 temp = m_angleMgr->calc();
		offs     = pikmin2_cosf(temp) * 100.0f;
	}
	m_pane2->setOffset(m_panePos.x + x, m_panePos.y + y + offs);
}

/*
 * --INFO--
 * Address:	8032DD88
 * Size:	000008
 */
void OtakaraSensor::adjScale(f32 scale) { m_scale = scale; }

/*
 * --INFO--
 * Address:	8032DD90
 * Size:	000088
 */
void OtakaraSensor::update()
{
	if (m_appearTimer > 0.0f) {
		m_appearTimer -= sys->m_deltaTime;
	}

	calcAppear();
	calcGrayColor();
	if (m_state != 5) {
		calcAngle();
	}
	calcReaction();
	PSStartTresureLaderNoiseSE(m_state, m_noiseLevel, m_currReactionLevel);
}

/*
 * --INFO--
 * Address:	8032DE18
 * Size:	000160
 */
void OtakaraSensor::updateInit()
{
	if (!m_isInit) {
		m_isInit = true;
		if (m_enabled && m_state == 0) {
			m_doIncNoise = true;
			if (m_notreasures) {
				m_noiseLevel            = 0.0f;
				m_isPoweringOff         = true;
				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
				PSSystem::checkGameScene(scene);
				if (scene->isCave()) {
					scene->startPollutUpSe();
				}
			} else {
				m_noiseLevel = 1.0f;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8032DF78
 * Size:	000370
 */
void OtakaraSensor::calcGrayColor()
{
	if (m_state != 5) {
		if (m_isPoweringOff) {
			if (m_powerOffTimer > 0.0f) {
				m_powerOffTimer -= sys->m_deltaTime;
			} else {
				m_isPoweringOff = false;
				m_doIncNoise    = true;
				ogSound->setFloorComplete();
				m_isPoweredOff = true;
				m_setGrayTimer = 1.5f;
			}
		} else {
			if (m_doIncNoise) {
				m_noiseLevel += 0.05f;
				if (m_noiseLevel > 1.0f) {
					m_noiseLevel = 1.0f;
				}
				if (m_state != 0) {
					m_doIncNoise = false;
				}
			} else {
				m_noiseLevel -= 0.05f;
				if (m_noiseLevel < 0.0f) {
					m_noiseLevel = 0.0f;
				}
			}
		}

		if (m_isPoweredOff && m_setGrayTimer > 0.0f) {
			m_setGrayTimer -= sys->m_deltaTime;
			if (m_setGrayTimer < 0.0f) {
				ogSound->setGraySensor();
				startGraySensor();
			}
		}
		JUtility::TColor col1(255, 255, 255, 255);
		JUtility::TColor col2(0, 0, 0, 0);
		switch (m_state) {
		case 3:
			col1.set(255, 0, 200, 255);
			m_noiseTimer += sys->m_deltaTime * TAU * 2.5f;
			if (m_noiseTimer > TAU) {
				m_noiseTimer -= TAU;
			}
			m_noiseLevel  = (pikmin2_sinf(m_noiseTimer) + 1.0f) * 0.3f / 2;
			m_canIncNoise = true;
			break;

		case 4:
			col1.set(255, 0, 200, 255);
			f32 timeFactor = sys->m_deltaTime * TAU;
			m_noiseTimer += newScreen::ObjCave::msVal._44 * timeFactor;
			if (m_noiseTimer > TAU)
				m_noiseTimer -= TAU;
			m_noiseLevel  = (pikmin2_sinf(m_noiseTimer) + 1.0f) * newScreen::ObjCave::msVal._48 / 2;
			m_canIncNoise = true;
			break;

		default:
			if (m_canIncNoise && m_state == 0) {
				m_canIncNoise = false;
				m_doIncNoise  = true;
			}
			break;
		}

		og::Screen::blendPictureTreeColor(m_treeColor, col1, col2, m_noiseLevel);
	}
}

/*
 * --INFO--
 * Address:	8032E2E8
 * Size:	0001FC
 */
void OtakaraSensor::calcAppear()
{
	if (m_efxActive) {
		if (m_timer > 0.0f) {
			m_timer -= sys->m_deltaTime;
			if (m_timer < 0.0f) {
				m_angleMgr->chase(HALF_PI, _4C.x);
				m_doStartAppear  = true;
				m_sensorGetTimer = _4C.y;
			}
		}
	}

	if (m_doStartAppear) {
		if (m_sensorGetTimer > 0.0f) {
			m_sensorGetTimer -= sys->m_deltaTime;
			if (m_sensorGetTimer <= 0.0f) {
				m_scaleMgr->up(0.7f, 40.0f, 0.5f, 0.0f);
				m_appearTimer = 3.0f;
				efx2d::T2DSensorGet efx;
				Vector3f pos1   = m_pane1->getGlbVtx(0);
				Vector3f pos2   = m_pane1->getGlbVtx(3);
				Vector3f midPos = pos1 + pos2;
				Vector2f argVec(midPos.x / 2 + m_appearEfxOffset.x, midPos.y / 2 + m_appearEfxOffset.y);
				efx2d::Arg arg = argVec;
				efx.create(&arg);
				ogSound->setGetSensor();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8032E4E4
 * Size:	000138
 */
void OtakaraSensor::startGraySensor()
{
	efx2d::T2DSensorComp efx;
	Vector3f pos1   = m_pane1->getGlbVtx(0);
	Vector3f pos2   = m_pane1->getGlbVtx(3);
	Vector3f midPos = pos1 + pos2;
	Vector2f argVec(midPos.x / 2 + m_completeEfxOffset.x, midPos.y / 2 + m_completeEfxOffset.y);
	efx2d::Arg arg = argVec;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	8032E61C
 * Size:	00022C
 */
void OtakaraSensor::calcAngle()
{
	m_angle += (m_currReactionLevel - m_angle) / 10.0f;
	if (m_pane1) {
		f32 angle = -(m_angle * 180.0f - 90.0f);
		if (m_isFuefukid) {
			angle = m_currAngle;
		}
		f32 initOffs = 0.0f;
		f32 offs;
		if (m_doAngleOffset) {
			offs = initOffs;
			f32 temp;
			f32 angle2 = m_angleOffsetMod / 2;
			temp       = angle - angle2;
			if (temp < -90.0f) {
				offs = -90.0f - temp;

			} else {
				temp = angle + angle2;
				if (temp > 90.0f) {
					offs = 90.0f - temp;
				}
			}

			initOffs = (m_angleOffsetMod / 2) * (randFloat() * 2.0f - 1.0f) + offs;
		}

		m_angleOffs += m_angleOffsetMod2 * (initOffs - m_angleOffs);

		if (m_isFuefukid) {
			f32 temp = m_randAngle - m_currAngle;
			if (FABS(temp) < 15.0f) {
				m_randAngle = randFloat() * 180.0f - 90.0f;
				temp        = m_randAngle - m_currAngle;
			}
			f32 newangle = temp * 0.5f;
			if (newangle < -30.0f) {
				newangle = -30.0f;
			}
			if (newangle > 30.0f) {
				newangle = 30.0f;
			}
			m_currAngle += newangle;
			angle = m_currAngle;
		}

		m_currAngle = angle;
		if (!m_doIncNoise) {
			angle += m_angleOffs;
		}

		if (angle < -90.0f) {
			angle = -90.0f;
		}
		if (angle > 90.0f) {
			angle = 90.0f;
		}
		m_pane1->rotate(angle);

	} else {
		m_currAngle = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8032E848
 * Size:	000204
 */
void OtakaraSensor::calcReaction()
{
	if (m_reactTimer > 0.0f) {
		m_reactTimer -= sys->m_deltaTime;
		if (m_reactTimer < 0.0f) {
			m_reactTimer = 0.0f;
			if (!og::newScreen::checkMovieActive()) {
				PSStartTreasureLaderSE(m_currReactionLevel);
				if (m_appearTimer <= 0.0f) {
					m_scaleMgr->up(m_currReactionLevel * 0.1f, 30.0f, 0.8f, 0.0f);
					efx2d::T2DSensorAct efx;
					Vector3f pos1   = m_pane1->getGlbVtx(0);
					Vector3f pos2   = m_pane1->getGlbVtx(3);
					Vector3f midPos = pos1 + pos2;
					Vector2f argVec(midPos.x / 2 + m_completeEfxOffset.x, midPos.y / 2 + m_completeEfxOffset.y);
					efx2d::Arg arg = argVec;
					efx.create(&arg);
				}
			}
		}
	} else {
		if (m_currReactionLevel > 0.3f) {
			m_reactTimer = (1.0f - m_currReactionLevel) * 2.0f + 0.4f;
		}
	}
	m_pane2->updateScale(m_scale * m_scaleMgr->calc());
}

/*
 * --INFO--
 * Address:	8032EA4C
 * Size:	000004
 */
void OtakaraSensor::draw(J2DGrafContext&) { }

} // namespace Screen
} // namespace og
