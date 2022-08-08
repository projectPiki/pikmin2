#include "types.h"
#include "Dolphin/os.h"
#include "PSSystem/BankRandPrm.h"
#include "PSSystem/Task.h"
#include "JSystem/JUT/JUTException.h"


/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global sTable__Q28PSSystem20TriangleTableModTask
    sTable__Q28PSSystem20TriangleTableModTask:
        .4byte 0x00000000
        .float 0.1
        .4byte 0x3E4CCCCD
        .float 0.3
        .4byte 0x3ECCCCCD
        .float 0.5
        .4byte 0x3F19999A
        .float 0.7
        .4byte 0x3F4CCCCD
        .4byte 0x3F666666
        .float 1.0
        .4byte 0x3F666666
        .4byte 0x3F4CCCCD
        .float 0.7
        .4byte 0x3F19999A
        .float 0.5
        .4byte 0x3ECCCCCD
        .float 0.3
        .4byte 0x3E4CCCCD
        .float 0.1
        .4byte 0x00000000
        .4byte 0xBDCCCCCD
        .4byte 0xBE4CCCCD
        .4byte 0xBE99999A
        .4byte 0xBECCCCCD
        .4byte 0xBF000000
        .4byte 0xBF19999A
        .4byte 0xBF333333
        .4byte 0xBF4CCCCD
        .4byte 0xBF666666
        .4byte 0xBF800000
        .4byte 0xBF666666
        .4byte 0xBF4CCCCD
        .4byte 0xBF333333
        .4byte 0xBF19999A
        .4byte 0xBF000000
        .4byte 0xBECCCCCD
        .4byte 0xBE99999A
        .4byte 0xBE4CCCCD
        .4byte 0xBDCCCCCD
    .global lbl_8048FFF0
    lbl_8048FFF0:
        .4byte 0x50534267
        .4byte 0x6D546173
        .4byte 0x6B2E6370
        .4byte 0x70000000
    .global lbl_80490000
    lbl_80490000:
        .4byte 0x50324173
        .4byte 0x73657274
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28PSSystem14SimpleWaitTask
    __vt__Q28PSSystem14SimpleWaitTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem14SimpleWaitTaskFR8JASTrack
    .global __vt__Q28PSSystem14OuterParamTask
    __vt__Q28PSSystem14OuterParamTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
        .4byte getPreParam__Q28PSSystem14OuterParamTaskFR8JASTrack
        .4byte timeTask__Q28PSSystem14OuterParamTaskFR8JASTrackf
    .global __vt__Q28PSSystem12PitchModTask
    __vt__Q28PSSystem12PitchModTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
        .4byte getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc
        .4byte getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv
        .4byte tableTask__Q28PSSystem12PitchModTaskFR8JASTrackf
    .global __vt__Q28PSSystem21ModParamWithTableTask
    __vt__Q28PSSystem21ModParamWithTableTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q28PSSystem16ModParamWithFade
    __vt__Q28PSSystem16ModParamWithFade:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInstance__Q28PSSystem11BankRandPrm
    sInstance__Q28PSSystem11BankRandPrm:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E178
    lbl_8051E178:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051E180
    lbl_8051E180:
        .4byte 0x00000000
    .global lbl_8051E184
    lbl_8051E184:
        .float 1.0
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033E6B4
 * Size:	000124
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
 * Address:	8033E7D8
 * Size:	0000F4
 */
int ModParamWithTableTask::task(JASTrack& track) 
{
    _24 += _20;
    u8 param = (u8) _24;
    if (param >= getTableIdxNum()) {
        _24 -= getTableIdxNum();
    }
    
    return tableTask(track, getTgtWithTable(_24));
}

/*
 * --INFO--
 * Address:	8033E8CC
 * Size:	000030
 */
int PitchModTask::tableTask(JASTrack& track, f32 param) 
{
    track.setParam(1, param, -1);
    return -0x10;
}

/*
 * --INFO--
 * Address:	8033E8FC
 * Size:	0000D4
 */
float OuterParamTask::getPreParam(JASTrack& track) 
{
    switch (_30) {
    case 0x1:
        return track._33C->_04;
    case 0x2:
        return track._33C->_08;
    case 0x4:
        return track._33C->_0C;
    case 0x10:
        return track._33C->_10;
    case 0x8:
        return track._33C->_14;
    case 0x40:
        return track._33C->_18;
    default:
        JUT_PANICLINE(135, "P2Assert");
        return 0.0f;
    }
}

/*
 * --INFO--
 * Address:	8033E9D0
 * Size:	000098
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
    
    track._33C->onSwitch(_30);
    track._33C->setParam(_30, param);
}

/*
 * --INFO--
 * Address:	8033EA68
 * Size:	000028
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
 * Address:	8033EA90
 * Size:	000074
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
 * Address:	8033EB04
 * Size:	000080
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
    
    append((TaskBase*) &m_outerParamTask);
}

/*
 * --INFO--
 * Address:	8033EB84
 * Size:	000054
 */
void TaskEntry_IdMask::makeEntry(u8 noteMask) 
{
    OSDisableInterrupts();
    m_idMaskTask.m_noteMask = noteMask;
    m_idMaskTask._14 = 1;
    OSEnableInterrupts();
    
    append((TaskBase*) &m_idMaskTask);
}

/*
 * --INFO--
 * Address:	8033EBD8
 * Size:	000110
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
        
        m_pitModTask._18 = (u32) &m_waitTask._04;
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
 * Address:	8033ECE8
 * Size:	0000A4
 */
void TaskEntry_MuteVolume::makeEntry(float p1, u32 p2) 
{
    f32 temp_f0;

    OSDisableInterrupts();
    m_muteTask._1C = 0;
    m_muteTask._14 = 1;
    OSEnableInterrupts();
    
    append(&m_muteTask);
    OSDisableInterrupts();
    m_outerParamTask._20 = p1;
    m_outerParamTask._1C = p2;
    m_outerParamTask._14 = 1;
    m_outerParamTask._28 = 0;
    m_outerParamTask._2C = 0.0f;
    m_outerParamTask._24 = 0.0f;
    OSEnableInterrupts();
    append(&m_outerParamTask);
}

/*
 * --INFO--
 * Address:	8033ED8C
 * Size:	00008C
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
 * Address:	8033EE18
 * Size:	000080
 */
void TaskEntry_Tempo::makeEntry(float p1, u32 p2) 
{
    OSDisableInterrupts();
    m_outerParamTask._20 = p1;
    m_outerParamTask._1C = p2;
    m_outerParamTask._14 = 1;
    m_outerParamTask._28 = 0;
    m_outerParamTask._2C = 0.0f;
    m_outerParamTask._24 = 0.0f;
    OSEnableInterrupts();
    
    append(&m_outerParamTask);
}
} // namespace PSSystem
