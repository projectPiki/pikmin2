#include "types.h"
#include "Dolphin/os.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JUT/JUTException.h"

namespace PSSystem {

// clang-format off
const float TriangleTableModTask::sTable[40] = { 0.0f,   0.1f,  0.2f,  0.3f,  0.4f,  0.5f,  0.6f,  0.7f,  0.8f,  0.9f,
                                                 1.0f,   0.9f,  0.8f,  0.7f,  0.6f,  0.5f,  0.4f,  0.3f,  0.2f,  0.1f,
                                                 0.0f,  -0.1f, -0.2f, -0.3f, -0.4f, -0.5f, -0.6f, -0.7f, -0.8f, -0.9f,
                                                -1.0f,  -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f
                                               };
// clang-format on

BankRandPrm* BankRandPrm::sInstance;

/*
 * --INFO--
 * Address: 8033E6B4
 * Size:    000124
 */
int ModParamWithFade::task(JASTrack& track)
{
	int result;
	if (_28 == 0) {
		if (_1C != 0) {
			float preParam = getPreParam(track);
			_24            = (_20 - preParam) / _1C;
			_2C            = preParam + _24;
		} else {
			timeTask(track, _20);
			return -1;
		}
	}
	if (_28 < _1C) {
		_2C += _24;
		timeTask(track, _2C);
		result = 0;
		_28++;
	} else {
		timeTask(track, _20);
		result = -1;
	}
	return result;
}

/*
 * task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
 * --INFO--
 * Address: 8033E7D8
 * Size:    0000F4
 */
int ModParamWithTableTask::task(JASTrack& track)
{
	_24 += _20;
	u8 param = (u8)_24;
	if (param >= getTableIdxNum()) {
		_24 -= getTableIdxNum();
	}

	return tableTask(track, getTgtWithTable(_24));
}

/*
 * --INFO--
 * Address: 8033E8CC
 * Size:    000030
 */
int PitchModTask::tableTask(JASTrack& track, f32 param)
{
	track.setParam(1, param, -1);
	return -0x10;
}

/*
 * --INFO--
 * Address: 8033E8FC
 * Size:    0000D4
 */
float OuterParamTask::getPreParam(JASTrack& track)
{
	switch (_30) {
	case 0x1:
		return track.m_extBuffer->_04;
	case 0x2:
		return track.m_extBuffer->_08;
	case 0x4:
		return track.m_extBuffer->_0C;
	case 0x10:
		return track.m_extBuffer->_10;
	case 0x8:
		return track.m_extBuffer->_14;
	case 0x40:
		return track.m_extBuffer->_18;
	default:
		JUT_PANICLINE(135, "P2Assert");
		return 0.0f;
	}
}

/*
 * --INFO--
 * Address: 8033E9D0
 * Size:    000098
 */
void OuterParamTask::timeTask(JASTrack& track, float param)
{
	if (_30 != 2) {
		if (param < 0.0f) {
			param = 0.0f;
		} else if (param > 1.0f) {
			param = 1.0f;
		}
	}

	track.m_extBuffer->onSwitch(_30);
	track.m_extBuffer->setParam(_30, param);
}

/*
 * --INFO--
 * Address: 8033EA68
 * Size:    000028
 */
int SimpleWaitTask::task(JASTrack& track)
{
	if (_1C >= _20) {
		return -1;
	}
	_1C++;
	return -0x10;
}

/*
 * --INFO--
 * Address: 8033EA90
 * Size:    000074
 */
BankRandPrm::BankRandPrm()
    : m_inst()
{
	m_inst.setTarget(1);
	m_inst._08 = 1.0f;
	m_inst._0C = 0.0f;
}

/*
 * --INFO--
 * Address: 8033EB04
 * Size:    000080
 */
void TaskEntry_OuterParam::makeEntry(float p1, u32 p2)
{
	OSDisableInterrupts();
	m_outerParamTask._20 = p1;
	m_outerParamTask._1C = p2;
	m_outerParamTask._14 = 1;
	m_outerParamTask._28 = 0;
	m_outerParamTask._2C = 0.0f;
	m_outerParamTask._24 = 0.0f;
	OSEnableInterrupts();

	append((TaskBase*)&m_outerParamTask);
}

/*
 * --INFO--
 * Address: 8033EB84
 * Size:    000054
 */
void TaskEntry_IdMask::makeEntry(u8 noteMask)
{
	OSDisableInterrupts();
	m_idMaskTask.m_noteMask = noteMask;
	m_idMaskTask._14        = 1;
	OSEnableInterrupts();

	append((TaskBase*)&m_idMaskTask);
}

/*
 * --INFO--
 * Address: 8033EBD8
 * Size:    000110
 */
void TaskEntry_PitMod::makeEntry(float p1, float p2, u32 p3)
{
	if (p3 != 0) {
		OSDisableInterrupts();
		m_waitTask._1C = 0;
		m_waitTask._20 = p3;
		m_waitTask._14 = 1;
		OSEnableInterrupts();

		m_waitTask._15 = 1;
		append(&m_waitTask);

		OSDisableInterrupts();
		m_pitModTask._1C = p1;
		m_pitModTask._20 = p2;
		m_pitModTask._14 = 1;
		m_pitModTask._24 = 0.0f;
		OSEnableInterrupts();

		m_pitModTask._18 = &m_waitTask._04;
		append(&m_pitModTask);
	} else {
		OSDisableInterrupts();
		m_pitModTask._1C = p1;
		m_pitModTask._20 = p2;
		m_pitModTask._14 = 1;
		m_pitModTask._24 = 0.0f;
		OSEnableInterrupts();

		append(&m_pitModTask);
	}
	OSDisableInterrupts();
	m_pitResetTask._14 = 1;
	OSEnableInterrupts();
	append(&m_pitResetTask);
}

/*
 * --INFO--
 * Address: 8033ECE8
 * Size:    0000A4
 */
void TaskEntry_MuteVolume::makeEntry(float p1, u32 p2)
{
	f32 temp_f0;

	OSDisableInterrupts();
	m_muteTask1._1C = 0;
	m_muteTask1._14 = 1;
	OSEnableInterrupts();

	append(&m_muteTask1);
	OSDisableInterrupts();
	m_outerParamTask1._20 = p1;
	m_outerParamTask1._1C = p2;
	m_outerParamTask1._14 = 1;
	m_outerParamTask1._28 = 0;
	m_outerParamTask1._2C = 0.0f;
	m_outerParamTask1._24 = 0.0f;
	OSEnableInterrupts();
	append(&m_outerParamTask1);
}

/*
 * --INFO--
 * Address: 8033ED8C
 * Size:    00008C
 */
void TaskEntry_MuteOnVolume::makeEntry(u32 p1)
{
	OSDisableInterrupts();
	m_outerParamTask._20 = 0.0f;
	m_outerParamTask._1C = p1;
	m_outerParamTask._14 = 1;
	m_outerParamTask._28 = 0;
	m_outerParamTask._2C = 0.0f;
	m_outerParamTask._24 = 0.0f;
	OSEnableInterrupts();

	append(&m_outerParamTask);
	OSDisableInterrupts();
	m_muteTask._1C = 1;
	m_muteTask._14 = 1;
	OSEnableInterrupts();

	append(&m_muteTask);
}

/*
 * --INFO--
 * Address: 8033EE18
 * Size:    000080
 */
void TaskEntry_Tempo::makeEntry(float p1, u32 p2)
{
	OSDisableInterrupts();
	m_outerParamTask1._20 = p1;
	m_outerParamTask1._1C = p2;
	m_outerParamTask1._14 = 1;
	m_outerParamTask1._28 = 0;
	m_outerParamTask1._2C = 0.0f;
	m_outerParamTask1._24 = 0.0f;
	OSEnableInterrupts();

	append(&m_outerParamTask1);
}
} // namespace PSSystem
