#include "Game/TimeMgr.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "stream.h"
#include "System.h"

namespace Game {

/*
 * --INFO--
 * Address:	80126C00
 * Size:	000090
 */
TimeMgr::TimeMgr()
    : CNode("タイムマネージャ")
{
	m_speedFactor = 1.0f;
	u8* flagPtr   = (u8*)&m_flags;
	flagPtr[0]    = 0;
	flagPtr[1]    = 0;
	flagPtr[2]    = 0;
	flagPtr[3]    = 0;
	init();
}

/*
 * --INFO--
 * Address:	80126FF0
 * Size:	0000B0
 */
void TimeMgr::init()
{
	_220                 = TIMEMGR_DAY_HOURS - m_parms.parms.m_eveningEndTime.m_value + m_parms.parms.m_morningStartTime.m_value;
	m_earlyMorningLength = m_parms.parms.m_midMorningTime.m_value - m_parms.parms.m_morningStartTime.m_value;
	m_midMorningLength   = m_parms.parms.m_morningEndTime.m_value - m_parms.parms.m_midMorningTime.m_value;
	m_middayLength       = m_parms.parms.m_eveningStartTime.m_value - m_parms.parms.m_morningEndTime.m_value;
	m_earlyEveningLength = m_parms.parms.m_midEveningStartTime.m_value - m_parms.parms.m_eveningStartTime.m_value;
	m_lateEveningLength  = m_parms.parms.m_eveningEndTime.m_value - m_parms.parms.m_midEveningEndTime.m_value;
	m_dayLengthHours     = m_parms.parms.m_dayEndTime.m_value - m_parms.parms.m_dayStartTime.m_value;
	m_sunRatio           = TIMEMGR_DAY_HOURS - m_dayLengthHours;
	m_dayCount           = 0;

	setTime(m_parms.parms.m_dayStartTime.m_value);
}

/*
 * --INFO--
 * Address:	801270A0
 * Size:	00003C
 */
void TimeMgr::setTime(f32 time)
{
	m_currentTimeOfDay = time;
	m_currentHour      = (m_currentTimeOfDay / TIMEMGR_DAY_HOURS) * m_parms.parms.m_dayLengthSeconds.m_value;

	updateSlot();
}

/*
 * --INFO--
 * Address:	801270DC
 * Size:	000040
 */
void TimeMgr::setStartTime()
{
	m_currentTimeOfDay = m_parms.parms.m_dayStartTime.m_value;
	m_currentHour      = (m_currentTimeOfDay / TIMEMGR_DAY_HOURS) * m_parms.parms.m_dayLengthSeconds.m_value;

	updateSlot();
}

/*
 * --INFO--
 * Address:	8012711C
 * Size:	000040
 */
void TimeMgr::setEndTime()
{
	m_currentTimeOfDay = m_parms.parms.m_dayEndTime.m_value;
	m_currentHour      = (m_currentTimeOfDay / TIMEMGR_DAY_HOURS) * m_parms.parms.m_dayLengthSeconds.m_value;

	updateSlot();
}

/*
 * --INFO--
 * Address:	8012715C
 * Size:	000168
 */
#pragma dont_inline on
void TimeMgr::updateSlot()
{
	if ((m_currentTimeOfDay < m_parms.parms.m_morningStartTime.m_value) || m_currentTimeOfDay >= m_parms.parms.m_eveningEndTime.m_value) {
		m_slotPosition = 0;

		f32 time = m_currentTimeOfDay;
		if (m_currentTimeOfDay < m_parms.parms.m_morningStartTime.m_value) {
			time += TIMEMGR_DAY_HOURS;
		}

		_214 = (time - m_parms.parms.m_eveningEndTime.m_value) / _220;
		return;
	}

	if (m_currentTimeOfDay < m_parms.parms.m_morningEndTime.m_value) {
		m_slotPosition = 1;

		if (m_currentTimeOfDay < m_parms.parms.m_midMorningTime.m_value) {
			_214 = (0.5f * (m_currentTimeOfDay - m_parms.parms.m_morningStartTime.m_value)) / m_earlyMorningLength;
			return;
		}

		_214 = 0.5f + ((0.5f * (m_currentTimeOfDay - m_parms.parms.m_midMorningTime.m_value)) / m_midMorningLength);
		return;
	}

	if (m_currentTimeOfDay < m_parms.parms.m_eveningStartTime.m_value) {
		m_slotPosition = 2;
		_214           = (m_currentTimeOfDay - m_parms.parms.m_morningEndTime.m_value) / m_middayLength;
		return;
	}

	if (m_currentTimeOfDay < m_parms.parms.m_eveningEndTime.m_value) {
		m_slotPosition = 3;

		if (m_currentTimeOfDay < m_parms.parms.m_midEveningStartTime.m_value) {
			_214 = (0.5f * (m_currentTimeOfDay - m_parms.parms.m_eveningStartTime.m_value)) / m_earlyEveningLength;
			return;
		}

		if (m_currentTimeOfDay < m_parms.parms.m_midEveningEndTime.m_value) {
			_214 = 0.5f;
			return;
		}

		_214 = 0.5f + ((0.5f * (m_currentTimeOfDay - m_parms.parms.m_midEveningEndTime.m_value)) / m_lateEveningLength);
	}
}
#pragma dont_inline reset

/*
 * --INFO--
 * Address:	801272C4
 * Size:	000060
 */
f32 TimeMgr::getSunGaugeRatio()
{
	if (m_currentTimeOfDay >= m_parms.parms.m_dayStartTime.m_value && m_currentTimeOfDay < m_parms.parms.m_dayEndTime.m_value) {
		return (m_currentTimeOfDay - m_parms.parms.m_dayStartTime.m_value) / m_dayLengthHours;
	}

	f32 time = m_currentTimeOfDay;
	if (m_currentTimeOfDay < m_parms.parms.m_dayStartTime.m_value) {
		time += TIMEMGR_DAY_HOURS;
	}

	return 1.0f - ((time - m_parms.parms.m_dayEndTime.m_value) / m_sunRatio);
}

/*
 * --INFO--
 * Address:	80127324
 * Size:	000074
 */
void TimeMgr::update()
{
	if (!(m_flags & TIMEMGR_FLAG_STOPPED)) {
		m_currentHour += m_speedFactor * sys->m_deltaTime;

		if (m_currentHour > m_parms.parms.m_dayLengthSeconds.m_value) {
			m_currentHour -= m_parms.parms.m_dayLengthSeconds.m_value;
		}

		m_currentTimeOfDay = TIMEMGR_DAY_HOURS * (m_currentHour / m_parms.parms.m_dayLengthSeconds.m_value);

		updateSlot();
	}
}

/*
 * --INFO--
 * Address:	80127398
 * Size:	000018
 */
bool TimeMgr::isDayOver() { return m_currentTimeOfDay > m_parms.parms.m_dayEndTime.m_value; }

/*
 * --INFO--
 * Address:	801273B0
 * Size:	000030
 */
bool TimeMgr::isDayTime()
{
	return m_currentTimeOfDay > m_parms.parms.m_dayStartTime.m_value && m_currentTimeOfDay <= m_parms.parms.m_dayEndTime.m_value;
}

/*
 * --INFO--
 * Address:	801273E0
 * Size:	000020
 */
f32 TimeMgr::getRealDayTime()
{
	return m_parms.parms.m_dayLengthSeconds.m_value
	     * ((m_parms.parms.m_dayEndTime.m_value - m_parms.parms.m_dayStartTime.m_value) / TIMEMGR_DAY_HOURS);
}

/*
 * --INFO--
 * Address:	80127400
 * Size:	000150
 */
void TimeMgr::loadSettingFile(char* filename)
{
	loadAndRead(&m_parms.parms, filename, JKRHeap::sSystemHeap);

	_220                 = TIMEMGR_DAY_HOURS - m_parms.parms.m_eveningEndTime.m_value + m_parms.parms.m_morningStartTime.m_value;
	m_earlyMorningLength = m_parms.parms.m_midMorningTime.m_value - m_parms.parms.m_morningStartTime.m_value;
	m_midMorningLength   = m_parms.parms.m_morningEndTime.m_value - m_parms.parms.m_midMorningTime.m_value;
	m_middayLength       = m_parms.parms.m_eveningStartTime.m_value - m_parms.parms.m_morningEndTime.m_value;
	m_earlyEveningLength = m_parms.parms.m_midEveningStartTime.m_value - m_parms.parms.m_eveningStartTime.m_value;
	m_lateEveningLength  = m_parms.parms.m_eveningEndTime.m_value - m_parms.parms.m_midEveningEndTime.m_value;
	m_dayLengthHours     = m_parms.parms.m_dayEndTime.m_value - m_parms.parms.m_dayStartTime.m_value;
	m_sunRatio           = TIMEMGR_DAY_HOURS - m_dayLengthHours;
	m_dayCount           = 0;
	m_currentTimeOfDay   = m_parms.parms.m_dayStartTime.m_value;
	m_currentHour        = m_currentTimeOfDay / TIMEMGR_DAY_HOURS * m_parms.parms.m_dayLengthSeconds.m_value;

	updateSlot();
}

} // namespace Game
