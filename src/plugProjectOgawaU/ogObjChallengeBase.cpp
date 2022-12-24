#include "og/newScreen/Challenge.h"
#include "og/Screen/callbackNodes.h"
#include "System.h"
#include "og/Sound.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032C8A0
 * Size:	000098
 */
ObjChallengeBase::ObjChallengeBase()
    : m_fadeLevel(0.0f)
    , m_scale(0.0f)
{
	m_doneChime1       = false;
	m_doneChime2       = false;
	m_paneTime         = nullptr;
	m_incTimeLeftDelay = 0.0f;
	m_timeLeft         = 0.0f;
	m_white.set(255, 255, 255, 255);
	m_black.set(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	8032C938
 * Size:	0000AC
 */
ObjChallengeBase::~ObjChallengeBase() { }

/*
 * --INFO--
 * Address:	8032C9E4
 * Size:	0000A0
 */
void ObjChallengeBase::doCreateAfter(JKRArchive* arc, og::Screen::CallBack_CounterRV* timer)
{
	m_paneTime = timer->m_pic1;
	m_white    = m_paneTime->getWhite();
	m_black    = m_paneTime->getBlack();
}

/*
 * --INFO--
 * Address:	8032CA84
 * Size:	000014
 */
bool ObjChallengeBase::doStart(::Screen::StartSceneArg const*)
{
	m_fadeLevel = 0.0f;
	m_scale     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8032CA98
 * Size:	000010
 */
bool ObjChallengeBase::doEnd(::Screen::EndSceneArg const*)
{
	m_fadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8032CAA8
 * Size:	0001D0
 */
void ObjChallengeBase::updateTimer(f32 set, f32 dec)
{
	// for sublevels past 1, wait a set time before increasing the time
	if (m_subLevel != 0 && m_incTimeLeftDelay > 0.0f) {
		m_incTimeLeftDelay -= sys->m_deltaTime;
		if (dec > 0.0f && m_incTimeLeftDelay < 0.0f) {
			ogSound->setTimeCarry();
		}
		if (dec > 0.0f) {
			m_timeLeft = set - dec;
		} else {
			m_timeLeft = set;
		}
	} else {
		m_timeLeft = set;
	}
	m_timeLeftInt = m_timeLeft;

	if (m_timeLeftInt <= msBaseVal.m_timerLimitLow) {
		m_paneTime->setWhite(msBaseVal.m_timerLowWhite);
		m_paneTime->setBlack(msBaseVal.m_timerLowBlack);
	} else {
		m_paneTime->setWhite(m_white);
		m_paneTime->setBlack(m_black);
	}

	if (m_incTimeLeftDelay <= 0.0f) {
		if (m_timeLeftInt == 30 && !m_doneChime1) {
			m_doneChime1 = true;
			ogSound->setChime();
		}
		if (m_timeLeftInt == 10 && !m_doneChime2) {
			m_doneChime2 = true;
			ogSound->setChime();
		}
	}
}

/*
 * --INFO--
 * Address:	8032CC78
 * Size:	000008
 */
void ObjChallengeBase::setSubLevel(u32 a1) { m_subLevel = a1; }

ObjChallengeBase::StaticValues ObjChallengeBase::msBaseVal;

} // namespace newScreen
} // namespace og
