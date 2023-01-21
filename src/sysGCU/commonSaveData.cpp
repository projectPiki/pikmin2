#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "Game/Data.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"
#include "stream.h"
#include "PSSystem/PSSystemIF.h"

namespace Game {
namespace CommonSaveData {
/*
 * --INFO--
 * Address:	80446C68
 * Size:	000044
 */
Mgr::Mgr() { setDefault(); }

/*
 * --INFO--
 * Address:	80446CAC
 * Size:	000078
 */
void Mgr::setDefault()
{
	m_flags.clear();
	m_cardSerialNo  = 0;
	_28             = 0;
	m_soundMode     = 0;
	m_musicVol      = 0xFF;
	m_seVol         = -1;
	m_rumble        = true;
	m_rubyFont      = true;
	m_deflicker     = true;
	m_region        = (u8)sys->m_region;
	_18             = 0;
	m_time          = 0;
	m_fileIndex     = -1;
	m_challengeOpen = false;
	reset();
}

/*
 * --INFO--
 * Address:	80446D24
 * Size:	000018
 */
void CommonSaveData::Mgr::setCardSerialNo(u64 tag)
{
	m_cardSerialNo = tag;
	m_flags.typeView |= 1;
}

/*
 * --INFO--
 * Address:	80446D3C
 * Size:	000020
 */
void CommonSaveData::Mgr::resetCardSerialNo()
{
	m_cardSerialNo = 0xcdcdcdcdcdcdcdcd;
	m_flags.typeView &= ~1;
}

/*
 * --INFO--
 * Address:	80446D5C
 * Size:	0000AC
 */
void CommonSaveData::Mgr::write(Stream& output)
{
	output.m_mode = STREAM_MODE_BINARY;
	if (output.m_mode == STREAM_MODE_TEXT) {
		output.m_tabCount = 0;
	}
	output.writeByte(m_soundMode);
	output.writeByte(m_musicVol);
	output.writeByte(m_seVol);
	output.writeByte(m_rumble);
	output.writeByte(m_rubyFont);
	output.writeByte(m_deflicker);
	output.writeByte(m_region);
	PlayCommonData::write(output);
}

/*
 * --INFO--
 * Address:	80446E08
 * Size:	0000AC
 */
void CommonSaveData::Mgr::read(Stream& input)
{
	input.m_mode = STREAM_MODE_BINARY;
	if (input.m_mode == STREAM_MODE_TEXT) {
		input.m_tabCount = 0;
	}
	m_soundMode = input.readByte();
	m_musicVol  = input.readByte();
	m_seVol     = input.readByte();
	m_rumble    = input.readByte();
	m_rubyFont  = input.readByte();
	m_deflicker = input.readByte();
	m_region    = input.readByte();
	PlayCommonData::read(input);
}

/*
 * --INFO--
 * Address:	80446EB4
 * Size:	000100
 */
void CommonSaveData::Mgr::setup()
{
	BOOL soundModeCheck = OSGetSoundMode();
	switch (soundModeCheck) {
	case false:
		setSoundModeMono();
		break;
	case true:
		switch (m_soundMode) {
		case SM_Mono:
		case SM_Stereo:
			setSoundModeStereo();
			break;
		case SM_SurroundSound:
			setSoundModeSurround();
			break;
		default:
#if BUILDTARGET == USADEMO1
			JUT_PANICLINE(271, "Unknown sound mode:%d \n", m_soundMode);
#else
			JUT_PANICLINE(268, "Unknown sound mode:%d \n", m_soundMode);
#endif
			break;
		}
		break;
	}
	setBgmVolume(m_musicVol / 255.0f);
	setSeVolume(m_seVol / 255.0f);
	setDeflicker();
}

/*
 * --INFO--
 * Address:	80446FB4
 * Size:	000014
 */
void CommonSaveData::Mgr::resetPlayer(signed char fileIndex)
{
	m_fileIndex = fileIndex;
	m_time      = 0;
	_18         = 0;
}

/*
 * --INFO--
 * Address:	80446FC8
 * Size:	000030
 */
void CommonSaveData::Mgr::setDeflicker() { setDeflicker(m_deflicker); }

/*
 * --INFO--
 * Address:	80446FF8
 * Size:	0000D0
 */
void CommonSaveData::Mgr::setDeflicker(bool deflicker)
{
	_GXRenderModeObj* obj = System::getRenderModeObj();
	m_deflicker           = deflicker;

	if ((u32)OSGetProgressiveMode() == 1) {
		obj->vfilter[0] = 0;
		obj->vfilter[1] = 0;
		obj->vfilter[2] = 21;
		obj->vfilter[3] = 22;
		obj->vfilter[4] = 21;
		obj->vfilter[5] = 0;
		obj->vfilter[6] = 0;

	} else if (deflicker) {
		obj->vfilter[0] = 7;
		obj->vfilter[1] = 7;
		obj->vfilter[2] = 12;
		obj->vfilter[3] = 12;
		obj->vfilter[4] = 12;
		obj->vfilter[5] = 7;
		obj->vfilter[6] = 7;

	} else {
		obj->vfilter[0] = 16;
		obj->vfilter[1] = 0;
		obj->vfilter[2] = 0;
		obj->vfilter[3] = 48;
		obj->vfilter[4] = 0;
		obj->vfilter[5] = 0;
		obj->vfilter[6] = 0;
	}
}

/*
 * --INFO--
 * Address:	804470C8
 * Size:	000034
 */
void CommonSaveData::Mgr::setSoundModeMono()
{
	m_soundMode = SM_Mono;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Mono);
	OSSetSoundMode(false);
}

/*
 * --INFO--
 * Address:	804470FC
 * Size:	000034
 */
void CommonSaveData::Mgr::setSoundModeStereo()
{
	m_soundMode = SM_Stereo;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Stereo);
	OSSetSoundMode(true);
}

/*
 * --INFO--
 * Address:	80447130
 * Size:	000034
 */
void CommonSaveData::Mgr::setSoundModeSurround()
{
	m_soundMode = SM_SurroundSound;
	JAIGlobalParameter::setParamSoundOutputMode(SM_SurroundSound);
	OSSetSoundMode(true);
}

/*
 * --INFO--
 * Address:	80447164
 * Size:	00012C
 */
void CommonSaveData::Mgr::setBgmVolume(f32 volume)
{
	bool temp = OSDisableInterrupts();
	OSDisableScheduler();

	bool volumeCheck = false;
	if (volume >= 0.0f && volume <= 1.0f) {
		volumeCheck = true;
	}
#if BUILDTARGET == USADEMO1
	P2ASSERTLINE(392, volumeCheck);
#else
	P2ASSERTLINE(389, volumeCheck);
#endif

	if (PSSystem::spSysIF) {
		f32 calc = volume * 255.0f;
		f32 newCalc;
		if (calc >= 0.0f) {
			newCalc = 0.5f + calc;
		} else {
			newCalc = calc - 0.5f;
		}
		m_musicVol = newCalc;
		PSSystem::getSysIF()->setConfigVol_Bgm(volume);
	}
	OSEnableScheduler();
	OSRestoreInterrupts(temp);
}

/*
 * --INFO--
 * Address:	80447290
 * Size:	00012C
 */
void CommonSaveData::Mgr::setSeVolume(f32 volume)
{
	bool temp = OSDisableInterrupts();
	OSDisableScheduler();

	bool volumeCheck = false;
	if (volume >= 0.0f && volume <= 1.0f) {
		volumeCheck = true;
	}
#if BUILDTARGET == USADEMO1
	P2ASSERTLINE(410, volumeCheck);
#else
	P2ASSERTLINE(407, volumeCheck);
#endif

	if (PSSystem::spSysIF) {
		f32 calc = volume * 255.0f;
		f32 newCalc;
		if (calc >= 0.0f) {
			newCalc = 0.5f + calc;
		} else {
			newCalc = calc - 0.5f;
		}
		m_seVol = newCalc;
		PSSystem::getSysIF()->setConfigVol_Se(volume);
	}

	OSEnableScheduler();
	OSRestoreInterrupts(temp);
}
} // namespace CommonSaveData
} // namespace Game
