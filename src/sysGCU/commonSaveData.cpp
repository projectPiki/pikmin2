#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "Game/Data.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JUtility/JUTException.h"
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
	mFlags.clear();
	mCardSerialNo  = 0;
	_28            = 0;
	mSoundMode     = 0;
	mMusicVol      = 0xFF;
	mSeVol         = -1;
	mIsRumble      = true;
	mIsRubyFont    = true;
	mUseDeflicker  = true;
	mRegion        = (u8)sys->mRegion;
	_18            = 0;
	mTime          = 0;
	mFileIndex     = -1;
	mChallengeOpen = false;
	reset();
}

/*
 * --INFO--
 * Address:	80446D24
 * Size:	000018
 */
void Mgr::setCardSerialNo(u64 tag)
{
	mCardSerialNo = tag;
	mFlags.set(1);
}

/*
 * --INFO--
 * Address:	80446D3C
 * Size:	000020
 */
void Mgr::resetCardSerialNo()
{
	mCardSerialNo = 0xcdcdcdcdcdcdcdcd;
	mFlags.unset(1);
}

/*
 * --INFO--
 * Address:	80446D5C
 * Size:	0000AC
 */
void Mgr::write(Stream& output)
{
	output.mMode = STREAM_MODE_BINARY;
	if (output.mMode == STREAM_MODE_TEXT) {
		output.mTabCount = 0;
	}
	output.writeByte(mSoundMode);
	output.writeByte(mMusicVol);
	output.writeByte(mSeVol);
	output.writeByte(mIsRumble);
	output.writeByte(mIsRubyFont);
	output.writeByte(mUseDeflicker);
	output.writeByte(mRegion);
	PlayCommonData::write(output);
}

/*
 * --INFO--
 * Address:	80446E08
 * Size:	0000AC
 */
void Mgr::read(Stream& input)
{
	input.mMode = STREAM_MODE_BINARY;
	if (input.mMode == STREAM_MODE_TEXT) {
		input.mTabCount = 0;
	}
	mSoundMode    = input.readByte();
	mMusicVol     = input.readByte();
	mSeVol        = input.readByte();
	mIsRumble     = input.readByte();
	mIsRubyFont   = input.readByte();
	mUseDeflicker = input.readByte();
	mRegion       = input.readByte();
	PlayCommonData::read(input);
}

/*
 * --INFO--
 * Address:	80446EB4
 * Size:	000100
 */
void Mgr::setup()
{
	BOOL soundModeCheck = OSGetSoundMode();
	switch (soundModeCheck) {
	case false:
		setSoundModeMono();
		break;
	case true:
		switch (mSoundMode) {
		case SM_Mono:
		case SM_Stereo:
			setSoundModeStereo();
			break;
		case SM_SurroundSound:
			setSoundModeSurround();
			break;
		default:
#if BUILDTARGET == USADEMO1
			JUT_PANICLINE(271, "Unknown sound mode:%d \n", mSoundMode);
#else
			JUT_PANICLINE(268, "Unknown sound mode:%d \n", mSoundMode);
#endif
			break;
		}
		break;
	}
	setBgmVolume(mMusicVol / 255.0f);
	setSeVolume(mSeVol / 255.0f);
	setDeflicker();
}

/*
 * --INFO--
 * Address:	80446FB4
 * Size:	000014
 */
void Mgr::resetPlayer(s8 fileIndex)
{
	mFileIndex = fileIndex;
	mTime      = 0;
	_18        = 0;
}

/*
 * --INFO--
 * Address:	80446FC8
 * Size:	000030
 */
void Mgr::setDeflicker() { setDeflicker(mUseDeflicker); }

/*
 * --INFO--
 * Address:	80446FF8
 * Size:	0000D0
 */
void Mgr::setDeflicker(bool deflicker)
{
	_GXRenderModeObj* obj = System::getRenderModeObj();
	mUseDeflicker         = deflicker;

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
void Mgr::setSoundModeMono()
{
	mSoundMode = SM_Mono;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Mono);
	OSSetSoundMode(false);
}

/*
 * --INFO--
 * Address:	804470FC
 * Size:	000034
 */
void Mgr::setSoundModeStereo()
{
	mSoundMode = SM_Stereo;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Stereo);
	OSSetSoundMode(true);
}

/*
 * --INFO--
 * Address:	80447130
 * Size:	000034
 */
void Mgr::setSoundModeSurround()
{
	mSoundMode = SM_SurroundSound;
	JAIGlobalParameter::setParamSoundOutputMode(SM_SurroundSound);
	OSSetSoundMode(true);
}

/*
 * --INFO--
 * Address:	80447164
 * Size:	00012C
 */
void Mgr::setBgmVolume(f32 volume)
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
		mMusicVol = newCalc;
		PSGetSystemIFA()->setConfigVol_Bgm(volume);
	}
	OSEnableScheduler();
	OSRestoreInterrupts(temp);
}

/*
 * --INFO--
 * Address:	80447290
 * Size:	00012C
 */
void Mgr::setSeVolume(f32 volume)
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
		mSeVol = newCalc;
		PSGetSystemIFA()->setConfigVol_Se(volume);
	}

	OSEnableScheduler();
	OSRestoreInterrupts(temp);
}

} // namespace CommonSaveData
} // namespace Game
