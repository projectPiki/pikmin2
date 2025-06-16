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
/**
 * @note Address: 0x80446C68
 * @note Size: 0x44
 */
Mgr::Mgr()
{
	setDefault();
}

/**
 * @note Address: 0x80446CAC
 * @note Size: 0x78
 */
void Mgr::setDefault()
{
	mFlags.clear();
	mCardSerialNo  = 0;
	mSaveSlotIndex = 0;
	mSoundMode     = 0;
	mMusicVol      = 0xFF;
	mSeVol         = -1;
	mIsRumble      = true;
	mIsRubyFont    = true;
	mUseDeflicker  = true;
	mRegion        = (u8)sys->mRegion;
	mSaveCount     = 0;
	mTime          = 0;
	mFileIndex     = -1;
	mDoSaveOptions = false;
	reset();
}

/**
 * @note Address: 0x80446D24
 * @note Size: 0x18
 */
void Mgr::setCardSerialNo(u64 tag)
{
	mCardSerialNo = tag;
	mFlags.set(SaveFlag_SerialNoSet);
}

/**
 * @note Address: 0x80446D3C
 * @note Size: 0x20
 */
void Mgr::resetCardSerialNo()
{
	mCardSerialNo = 0xcdcdcdcdcdcdcdcd;
	mFlags.unset(SaveFlag_SerialNoSet);
}

/**
 * @note Address: 0x80446D5C
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80446E08
 * @note Size: 0xAC
 */
void Mgr::read(Stream& input)
{
	input.setMode(STREAM_MODE_BINARY, 1);
	mSoundMode    = input.readByte();
	mMusicVol     = input.readByte();
	mSeVol        = input.readByte();
	mIsRumble     = input.readByte();
	mIsRubyFont   = input.readByte();
	mUseDeflicker = input.readByte();
	mRegion       = input.readByte();
	PlayCommonData::read(input);
}

/**
 * @note Address: 0x80446EB4
 * @note Size: 0x100
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

/**
 * @note Address: 0x80446FB4
 * @note Size: 0x14
 */
void Mgr::resetPlayer(s8 fileIndex)
{
	mFileIndex = fileIndex;
	mTime      = 0;
	mSaveCount = 0;
}

/**
 * @note Address: 0x80446FC8
 * @note Size: 0x30
 */
void Mgr::setDeflicker()
{
	setDeflicker(mUseDeflicker);
}

/**
 * @note Address: 0x80446FF8
 * @note Size: 0xD0
 */
void Mgr::setDeflicker(bool deflicker)
{
	_GXRenderModeObj* obj = System::getRenderModeObj();
	mUseDeflicker         = deflicker;

	if (OSGetProgressiveMode() == OS_PROGRESSIVE_MODE_ON) {
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

/**
 * @note Address: 0x804470C8
 * @note Size: 0x34
 */
void Mgr::setSoundModeMono()
{
	mSoundMode = SM_Mono;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Mono);
	OSSetSoundMode(OS_SOUND_MODE_MONO);
}

/**
 * @note Address: 0x804470FC
 * @note Size: 0x34
 */
void Mgr::setSoundModeStereo()
{
	mSoundMode = SM_Stereo;
	JAIGlobalParameter::setParamSoundOutputMode(SM_Stereo);
	OSSetSoundMode(OS_SOUND_MODE_STEREO);
}

/**
 * @note Address: 0x80447130
 * @note Size: 0x34
 */
void Mgr::setSoundModeSurround()
{
	mSoundMode = SM_SurroundSound;
	JAIGlobalParameter::setParamSoundOutputMode(SM_SurroundSound);
	OSSetSoundMode(OS_SOUND_MODE_STEREO);
}

/**
 * @note Address: 0x80447164
 * @note Size: 0x12C
 */
void Mgr::setBgmVolume(f32 volume)
{
	bool temp = OSDisableInterrupts();
	OSDisableScheduler();

#if BUILDTARGET == USADEMO1
	P2ASSERTBOOLLINE(392, volume >= 0.0f && volume <= 1.0f);
#else
	P2ASSERTBOOLLINE(389, volume >= 0.0f && volume <= 1.0f);
#endif

	if (PSSystem::spSysIF) {
		mMusicVol = ROUND_F32_TO_U8(volume * 255.0f);
		PSGetSystemIFA()->setConfigVol_Bgm(volume);
	}
	OSEnableScheduler();
	OSRestoreInterrupts(temp);
}

/**
 * @note Address: 0x80447290
 * @note Size: 0x12C
 */
void Mgr::setSeVolume(f32 volume)
{
	bool temp = OSDisableInterrupts();
	OSDisableScheduler();

#if BUILDTARGET == USADEMO1
	P2ASSERTBOOLLINE(410, volume >= 0.0f && volume <= 1.0f);
#else
	P2ASSERTBOOLLINE(407, volume >= 0.0f && volume <= 1.0f);
#endif

	if (PSSystem::spSysIF) {
		mSeVol = ROUND_F32_TO_U8(volume * 255.0f);
		PSGetSystemIFA()->setConfigVol_Se(volume);
	}

	OSEnableScheduler();
	OSRestoreInterrupts(temp);
}

} // namespace CommonSaveData
} // namespace Game
