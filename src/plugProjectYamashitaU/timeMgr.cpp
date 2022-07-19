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
    u8* flagPtr = (u8*) &m_flags;
    flagPtr[0] = 0;
    flagPtr[1] = 0;
    flagPtr[2] = 0;
    flagPtr[3] = 0;
    init();
}

/*
 * --INFO--
 * Address:	80126C90
 * Size:	000034
 */
TimeMgrParms::TimeMgrParms() { }

/*
 * --INFO--
 * Address:	80126CC4
 * Size:	00032C
 */
TimeMgrParms::Parms::Parms()
    : Parameters(nullptr, "TimeMgrParms")
    , m_dayStartTime(this, 'fp00', "ゲーム開始時刻", 7.0f, 0.0f, 24.0f)
    , m_dayEndTime(this, 'fp01', "ゲーム終了時刻", 19.0f, 0.0f, 24.0f)
    , m_dayLengthSeconds(this, 'fp02', "1日の時間<秒）", 1560.f, 0.0f, 3600.0f)
    , m_morningStartTime(this, 'fp03', "朝開始時刻", 5.25f, 0.0f, 24.0f)
    , m_midMorningTime(this, 'fp04', "朝中間時刻", 7.0f, 0.0f, 24.0f)
    , m_morningEndTime(this, 'fp05', "朝終了時刻", 8.0f, 0.0f, 24.0f)
    , m_eveningStartTime(this, 'fp06', "夕方開始時刻", 15.0f, 0.0f, 24.0f)
    , m_midEveningStartTime(this, 'fp07', "夕方中間開始時刻", 15.5f, 0.0f, 24.0f)
    , m_midEveningEndTime(this, 'fp11', "夕方中間終了時刻", 18.5f, 0.0f, 24.0f)
    , m_eveningEndTime(this, 'fp08', "夕方終了時刻", 19.0f, 0.0f, 24.0f)
    , m_sundownAlertTime(this, 'fp09', "夜警告時刻", 18.0f, 0.0f, 24.0f)
    , m_countdownTime(this, 'fp10', "カウントダウン", 18.5f, 0.0f, 24.0f)
{
}

/*
 * --INFO--
 * Address:	80126FF0
 * Size:	0000B0
 */
void TimeMgr::init()
{
    _220                 = 24.0f - m_parms.parms.m_eveningEndTime.m_value + m_parms.parms.m_morningStartTime.m_value;
    m_earlyMorningLength = m_parms.parms.m_midMorningTime.m_value - m_parms.parms.m_morningStartTime.m_value;
    m_midMorningLength   = m_parms.parms.m_morningEndTime.m_value - m_parms.parms.m_midMorningTime.m_value;
    m_middayLength       = m_parms.parms.m_eveningStartTime.m_value - m_parms.parms.m_morningEndTime.m_value;
    m_earlyEveningLength = m_parms.parms.m_midEveningStartTime.m_value - m_parms.parms.m_eveningStartTime.m_value;
    m_lateEveningLength  = m_parms.parms.m_eveningEndTime.m_value - m_parms.parms.m_midEveningEndTime.m_value;
    m_dayLengthHours     = m_parms.parms.m_dayEndTime.m_value - m_parms.parms.m_dayStartTime.m_value;
    m_sunRatio           = 24.0f - m_dayLengthHours;
    m_dayCount           = 0;
	
    setTime(m_parms.parms.m_dayStartTime.m_value);
}

/*
 * --INFO--
 * Address:	801270A0
 * Size:	00003C
 */
void TimeMgr::setTime(float time)
{
	m_currentTimeOfDay = time;
	m_currentHour      = (m_currentTimeOfDay / 24.0f) * m_parms.parms.m_dayLengthSeconds.m_value;

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
	m_currentHour      = (m_currentTimeOfDay / 24.0f) * m_parms.parms.m_dayLengthSeconds.m_value;

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
	m_currentHour      = (m_currentTimeOfDay / 24.0f) * m_parms.parms.m_dayLengthSeconds.m_value;
	
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
        _210 = 0;
        f32 var_f2 = m_currentTimeOfDay;

        if (m_currentTimeOfDay < m_parms.parms.m_morningStartTime.m_value) {
            var_f2 += 24.0f;
        }

        _214 = (var_f2 - m_parms.parms.m_eveningEndTime.m_value) / _220;
        return;
    }

    if (m_currentTimeOfDay < m_parms.parms.m_morningEndTime.m_value) {
        _210 = 1;

        if (m_currentTimeOfDay < m_parms.parms.m_midMorningTime.m_value) {
            _214 = (0.5f * (m_currentTimeOfDay - m_parms.parms.m_morningStartTime.m_value)) / m_earlyMorningLength;
            return;
        }

        _214 = 0.5f + ((0.5f * (m_currentTimeOfDay - m_parms.parms.m_midMorningTime.m_value)) / m_midMorningLength);
        return;
    }

    if (m_currentTimeOfDay < m_parms.parms.m_eveningStartTime.m_value) {
        _210 = 2;
        _214 = (m_currentTimeOfDay - m_parms.parms.m_morningEndTime.m_value) / m_middayLength;
        return;
    }

    if (m_currentTimeOfDay < m_parms.parms.m_eveningEndTime.m_value) {
        _210 = 3;

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
#pragma dont_inline off

/*
 * --INFO--
 * Address:	801272C4
 * Size:	000060
 */
float TimeMgr::getSunGaugeRatio()
{
    if (m_currentTimeOfDay >= m_parms.parms.m_dayStartTime.m_value && m_currentTimeOfDay < m_parms.parms.m_dayEndTime.m_value) {
        return (m_currentTimeOfDay - m_parms.parms.m_dayStartTime.m_value) / m_dayLengthHours;
    }

    f32 var_f3 = m_currentTimeOfDay;

    if (m_currentTimeOfDay < m_parms.parms.m_dayStartTime.m_value) {
        var_f3 += 1.0f;
    }

    return 1.0f - ((var_f3 - m_parms.parms.m_dayEndTime.m_value) / m_sunRatio);
}

/*
 * --INFO--
 * Address:	80127324
 * Size:	000074
 */
void TimeMgr::update()
{
	if (!(m_flags & 1)) {
        m_currentHour += m_speedFactor * sys->m_secondsPerFrame;

        if (m_currentHour > m_parms.parms.m_dayLengthSeconds.m_value) {
            m_currentHour -= m_parms.parms.m_dayLengthSeconds.m_value;
        }

        m_currentTimeOfDay = 24.0f * (m_currentHour / m_parms.parms.m_dayLengthSeconds.m_value);

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
float TimeMgr::getRealDayTime() { return m_parms.parms.m_dayLengthSeconds.m_value * ((m_parms.parms.m_dayEndTime.m_value - m_parms.parms.m_dayStartTime.m_value) / 24.0f); }

/*
 * --INFO--
 * Address:	80127400
 * Size:	000150
 */
void TimeMgr::loadSettingFile(char* filename)
{
    void* data = JKRDvdRipper::loadToMainRAM(filename, nullptr, Switch_0, 0, JKRHeap::sSystemHeap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
    
    if (data != nullptr) {
        RamStream input(data, -1);
        input.resetPosition(true, 1);
        m_parms.parms.read(input);
        delete[] data;
    }

    _220                 = 24.0f - m_parms.parms.m_eveningEndTime.m_value + m_parms.parms.m_morningStartTime.m_value;
    m_earlyMorningLength = m_parms.parms.m_midMorningTime.m_value - m_parms.parms.m_morningStartTime.m_value;
    m_midMorningLength   = m_parms.parms.m_morningEndTime.m_value - m_parms.parms.m_midMorningTime.m_value;
    m_middayLength       = m_parms.parms.m_eveningStartTime.m_value - m_parms.parms.m_morningEndTime.m_value;
    m_earlyEveningLength = m_parms.parms.m_midEveningStartTime.m_value - m_parms.parms.m_eveningStartTime.m_value;
    m_lateEveningLength  = m_parms.parms.m_eveningEndTime.m_value - m_parms.parms.m_midEveningEndTime.m_value;
    m_dayLengthHours     = m_parms.parms.m_dayEndTime.m_value - m_parms.parms.m_dayStartTime.m_value;
    m_sunRatio           = 24.0f - m_dayLengthHours;
    m_dayCount           = 0;
    m_currentTimeOfDay   = m_parms.parms.m_dayStartTime.m_value;
    m_currentHour        = m_currentTimeOfDay / 24.0f * m_parms.parms.m_dayLengthSeconds.m_value;
    
    updateSlot();
}

/*
 * --INFO--
 * Address:	80127550
 * Size:	000060
 */
TimeMgr::~TimeMgr() { }
} // namespace Game
