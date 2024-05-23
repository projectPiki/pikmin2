#include "Dolphin/os.h"
#include "JSystem/JAudio/DSP.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASWave.h"

namespace JASDsp {

static TChannel* CH_BUF;
static Fxline* FX_BUF;
static f32 sDSPVolume;

static const u16 DSPADPCM_FILTER[32] ATTRIBUTE_ALIGN(32)
    = { 0x0,    0x0,    0x800,  0x0,    0x0,    0x800,  0x400, 0x400,  0x1000, 0xF800, 0xE00,  0xFA00, 0xC00,  0xFC00, 0x1200, 0xF600,
	    0x1068, 0xF738, 0x12C0, 0xF704, 0x1400, 0xF400, 0x800, 0xF800, 0x400,  0xFC00, 0xFC00, 0x400,  0xFC00, 0x0,    0xF800, 0x0 };

static const u16 DSPRES_FILTER[640] ATTRIBUTE_ALIGN(32) = {
	0xC39,  0x66AD, 0xD46,  0xFFDF, 0xB39,  0x6696, 0xE5F,  0xFFD8, 0xA44,  0x6669, 0xF83,  0xFFD0, 0x95A,  0x6626, 0x10B4, 0xFFC8, 0x87D,
	0x65CD, 0x11F0, 0xFFBF, 0x7AB,  0x655E, 0x1338, 0xFFB6, 0x6E4,  0x64D9, 0x148C, 0xFFAC, 0x628,  0x643F, 0x15EB, 0xFFA1, 0x577,  0x638F,
	0x1756, 0xFF96, 0x4D1,  0x62CB, 0x18CB, 0xFF8A, 0x435,  0x61F3, 0x1A4C, 0xFF7E, 0x3A4,  0x6106, 0x1BD7, 0xFF71, 0x31C,  0x6007, 0x1D6C,
	0xFF64, 0x29F,  0x5EF5, 0x1F0B, 0xFF56, 0x22A,  0x5DD0, 0x20B3, 0xFF48, 0x1BE,  0x5C9A, 0x2264, 0xFF3A, 0x15B,  0x5B53, 0x241E, 0xFF2C,
	0x101,  0x59FC, 0x25E0, 0xFF1E, 0xAE,   0x5896, 0x27A9, 0xFF10, 0x63,   0x5720, 0x297A, 0xFF02, 0x1F,   0x559D, 0x2B50, 0xFEF4, 0xFFE2,
	0x540D, 0x2D2C, 0xFEE8, 0xFFAC, 0x5270, 0x2F0D, 0xFEDB, 0xFF7C, 0x50C7, 0x30F3, 0xFED0, 0xFF53, 0x4F14, 0x32DC, 0xFEC6, 0xFF2E, 0x4D57,
	0x34C8, 0xFEBD, 0xFF0F, 0x4B91, 0x36B6, 0xFEB6, 0xFEF5, 0x49C2, 0x38A5, 0xFEB0, 0xFEDF, 0x47ED, 0x3A95, 0xFEAC, 0xFECE, 0x4611, 0x3C85,
	0xFEAB, 0xFEC0, 0x4430, 0x3E74, 0xFEAC, 0xFEB6, 0x424A, 0x4060, 0xFEAF, 0xFEAF, 0x4060, 0x424A, 0xFEB6, 0xFEAC, 0x3E74, 0x4430, 0xFEC0,
	0xFEAB, 0x3C85, 0x4611, 0xFECE, 0xFEAC, 0x3A95, 0x47ED, 0xFEDF, 0xFEB0, 0x38A5, 0x49C2, 0xFEF5, 0xFEB6, 0x36B6, 0x4B91, 0xFF0F, 0xFEBD,
	0x34C8, 0x4D57, 0xFF2E, 0xFEC6, 0x32DC, 0x4F14, 0xFF53, 0xFED0, 0x30F3, 0x50C7, 0xFF7C, 0xFEDB, 0x2F0D, 0x5270, 0xFFAC, 0xFEE8, 0x2D2C,
	0x540D, 0xFFE2, 0xFEF4, 0x2B50, 0x559D, 0x1F,   0xFF02, 0x297A, 0x5720, 0x63,   0xFF10, 0x27A9, 0x5896, 0xAE,   0xFF1E, 0x25E0, 0x59FC,
	0x101,  0xFF2C, 0x241E, 0x5B53, 0x15B,  0xFF3A, 0x2264, 0x5C9A, 0x1BE,  0xFF48, 0x20B3, 0x5DD0, 0x22A,  0xFF56, 0x1F0B, 0x5EF5, 0x29F,
	0xFF64, 0x1D6C, 0x6007, 0x31C,  0xFF71, 0x1BD7, 0x6106, 0x3A4,  0xFF7E, 0x1A4C, 0x61F3, 0x435,  0xFF8A, 0x18CB, 0x62CB, 0x4D1,  0xFF96,
	0x1756, 0x638F, 0x577,  0xFFA1, 0x15EB, 0x643F, 0x628,  0xFFAC, 0x148C, 0x64D9, 0x6E4,  0xFFB6, 0x1338, 0x655E, 0x7AB,  0xFFBF, 0x11F0,
	0x65CD, 0x87D,  0xFFC8, 0x10B4, 0x6626, 0x95A,  0xFFD0, 0xF83,  0x6669, 0xA44,  0xFFD8, 0xE5F,  0x6696, 0xB39,  0xFFDF, 0xD46,  0x66AD,
	0xC39,  0x0,    0xC8B,  0x18F8, 0x2527, 0x30FB, 0x3C56, 0x471C, 0x5133, 0x5A82, 0x62F1, 0x6A6D, 0x70E2, 0x7641, 0x7A7C, 0x7D89, 0x7F61,
	0x7FFF, 0x7F61, 0x7D89, 0x7A7C, 0x7641, 0x70E2, 0x6A6D, 0x62F1, 0x5A82, 0x5133, 0x471C, 0x3C56, 0x30FB, 0x2527, 0x18F8, 0xC8B,  0x0,
	0xF375, 0xE708, 0xDAD9, 0xCF05, 0xC3AA, 0xB8E4, 0xAECD, 0xA57E, 0x9D0F, 0x9593, 0x8F1E, 0x89BF, 0x8584, 0x8277, 0x809F, 0x8001, 0x809F,
	0x8277, 0x8584, 0x89BF, 0x8F1E, 0x9593, 0x9D0F, 0xA57E, 0xAECD, 0xB8E4, 0xC3AA, 0xCF05, 0xDAD9, 0xE708, 0xF375, 0x0,    0x7FF,  0xFFF,
	0x17FF, 0x1FFF, 0x27FF, 0x2FFF, 0x37FF, 0x3FFF, 0x47FF, 0x4FFF, 0x57FF, 0x5FFF, 0x67FF, 0x6FFF, 0x77FF, 0x7FFF, 0x7800, 0x7000, 0x6800,
	0x6000, 0x5800, 0x5000, 0x4800, 0x4000, 0x3800, 0x3000, 0x2800, 0x2000, 0x1800, 0x1000, 0x800,  0x0,    0xF801, 0xF001, 0xE801, 0xE001,
	0xD801, 0xD001, 0xC801, 0xC001, 0xB801, 0xB001, 0xA801, 0xA001, 0x9801, 0x9001, 0x8801, 0x8001, 0x8800, 0x9000, 0x9800, 0xA000, 0xA800,
	0xB000, 0xB800, 0xC000, 0xC800, 0xD000, 0xD800, 0xE000, 0xE800, 0xF000, 0xF800, 0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x1FFF, 0x3FFF, 0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
	0x1FFF, 0xC001, 0x0,    0x192,  0x324,  0x4B6,  0x647,  0x7D9,  0x96A,  0xAFB,  0xC8B,  0xE1B,  0xFAB,  0x1139, 0x12C7, 0x1455, 0x15E1,
	0x176D, 0x18F8, 0x1A82, 0x1C0B, 0x1D93, 0x1F19, 0x209F, 0x2223, 0x23A6, 0x2527, 0x26A7, 0x2826, 0x29A3, 0x2B1F, 0x2C98, 0x2E10, 0x2F87,
	0x30FB, 0x326E, 0x33DE, 0x354D, 0x36B9, 0x3824, 0x398C, 0x3AF2, 0x3C56, 0x3DB7, 0x3F17, 0x4073, 0x41CD, 0x4325, 0x447A, 0x45CC, 0x471C,
	0x4869, 0x49B3, 0x4AFB, 0x4C3F, 0x4D81, 0x4EBF, 0x4FFB, 0x5133, 0x5268, 0x539A, 0x54C9, 0x55F5, 0x571D, 0x5842, 0x5964, 0x5A82, 0x5B9C,
	0x5CB3, 0x5DC7, 0x5ED7, 0x5FE3, 0x60EB, 0x61F0, 0x62F1, 0x63EE, 0x64E8, 0x65DD, 0x66CF, 0x67BC, 0x68A6, 0x698B, 0x6A6D, 0x6B4A, 0x6C23,
	0x6CF8, 0x6DC9, 0x6E96, 0x6F5E, 0x7022, 0x70E2, 0x719D, 0x7254, 0x7307, 0x73B5, 0x745F, 0x7504, 0x75A5, 0x7641, 0x76D8, 0x776B, 0x77FA,
	0x7884, 0x7909, 0x7989, 0x7A05, 0x7A7C, 0x7AEE, 0x7B5C, 0x7BC5, 0x7C29, 0x7C88, 0x7CE3, 0x7D39, 0x7D89, 0x7DD5, 0x7E1D, 0x7E5F, 0x7E9C,
	0x7ED5, 0x7F09, 0x7F37, 0x7F61, 0x7F86, 0x7FA6, 0x7FC1, 0x7FD8, 0x7FE9, 0x7FF5, 0x7FFD
};

static u16 SEND_TABLE[] = {
	0x0D00, 0x0D60, 0x0DC0, 0x0E20, 0x0E80, 0x0EE0, 0x0CA0, 0x0F40, 0x0FA0, 0x0B00, 0x09A0, 0x0000,
};

/**
 * @note Address: 0x800A5310
 * @note Size: 0x4C
 */
void boot(DSPCallback callback)
{
	static bool first = true;
	if (first) {
		DspBoot(callback);
		first = false;
	}
}

/**
 * @note Address: 0x800A535C
 * @note Size: 0x20
 */
void releaseHalt(u32 msg) { DSPReleaseHalt2(msg); }

/**
 * @note Address: 0x800A537C
 * @note Size: 0x20
 */
void finishWork(u16 p1) { DspFinishWork(p1); }

/**
 * @note Address: 0x800A539C
 * @note Size: 0x20
 */
void syncFrame(u32 p1, u32 p2, u32 p3) { DsyncFrame2(p1, p2, p3); }

/**
 * @note Address: 0x800A53BC
 * @note Size: 0x24
 */
void setDSPMixerLevel(f32 dspMixerLevel)
{
	sDSPVolume = dspMixerLevel;
	DsetMixerLevel(dspMixerLevel);
}

/**
 * @note Address: 0x800A53E0
 * @note Size: 0x8
 */
f32 getDSPMixerLevel() { return sDSPVolume; }

/**
 * @note Address: 0x800A53E8
 * @note Size: 0x10
 */
TChannel* getDSPHandle(int index) { return &CH_BUF[index]; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void getDSPHandleNc(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void setFilterTable(s16*, s16*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void flushBuffer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void flushChannelAll()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void cacheChannelAll()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A53F8
 * @note Size: 0x28
 */
void invalChannelAll() { DCInvalidateRange(CH_BUF, sizeof(TChannel) * 64); }

/**
 * @note Address: 0x800A5420
 * @note Size: 0xC4
 */
void initBuffer()
{
	CH_BUF = new (JASDram, 0x20) TChannel[64];
	FX_BUF = new (JASDram, 0x20) Fxline[4];
	JASCalc::bzero(CH_BUF, sizeof(u8) * 0x6000);
	JASCalc::bzero(FX_BUF, sizeof(Fxline) * 4);
	for (u8 i = 0; i < 4; i++) {
		setFXLine(i, nullptr, nullptr);
	}
	DsetupTable(0x40, (u32)CH_BUF, (u32)DSPRES_FILTER, (u32)DSPADPCM_FILTER, (u32)FX_BUF);
	DCFlushRange(CH_BUF, sizeof(u8) * 0x6000);
	DCFlushRange(FX_BUF, sizeof(u16) * 0x40);
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
Fxline& getFXHandle(u8 index)
{
	// UNUSED FUNCTION
	return FX_BUF[index];
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void getFXHandleNc(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A54E4
 * @note Size: 0x154
 */
bool setFXLine(u8 lineIndex, s16* audioBuffer, FxlineConfig_* config)
{
	Fxline& fx       = getFXHandle(lineIndex);
	BOOL enable      = OSDisableInterrupts();
	fx.mBufferStatus = 0;

	if (config) {
		fx._0A = config->_04;
		fx._08 = SEND_TABLE[config->_02];
		fx._0E = config->_08;
		fx._0C = SEND_TABLE[config->_06];
		fx._02 = config->mBufferCount;
		for (int i = 0; i < 8; i++) {
			fx._10[i] = config->_10[i];
		}
	}

	if (audioBuffer && config) {
		// TODO: sizeof
		size_t length   = config->mBufferCount * 0xA0;
		fx.mAudioBuffer = audioBuffer;
		JASCalc::bzero(audioBuffer, length);
		DCFlushRange(audioBuffer, length);

	} else if (!config || audioBuffer) {
		fx.mAudioBuffer = audioBuffer;
	}

	if (fx.mAudioBuffer) {
		fx.mBufferStatus = config->mStatus;
	} else {
		fx.mBufferStatus = 0;
	}

	DCFlushRange(&fx, sizeof(fx));
	OSRestoreInterrupts(enable);
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void changeFXLineParam(u8, u8, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A5638
 * @note Size: 0x3C
 * init__Q26JASDsp8TChannelFv
 */
void TChannel::init()
{
	mPauseFlag          = 0;
	mIsFinished         = false;
	mForcedStop         = false;
	mIsActive           = false;
	mIsMixerInitialized = 0;
	mBlockCount         = 0;
	initFilter();
}

/**
 * @note Address: 0x800A5674
 * @note Size: 0xA0
 */
void TChannel::playStart()
{
	_10C       = 0;
	_60        = 0;
	mIsPlaying = 1;
	_66        = 0;

	for (s32 i = 0; i < 4; i++) {
		_78[i] = 0;
		_A8[i] = 0;
	}

	for (s32 i = 0; i < 20; i++) {
		_80[i] = 0;
	}

	mIsActive = true;
}

/**
 * @note Address: 0x800A5714
 * @note Size: 0xC
 */
void TChannel::playStop() { mIsActive = false; }

/**
 * @note Address: 0x800A5720
 * @note Size: 0x10
 */
void TChannel::replyFinishRequest()
{
	mIsFinished = false;
	mIsActive   = false;
}

/**
 * @note Address: 0x800A5730
 * @note Size: 0xC
 */
void TChannel::forceStop() { mForcedStop = true; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool TChannel::isActive() const { return mIsActive; }

/**
 * @note Address: 0x800A573C
 * @note Size: 0x14
 */
bool TChannel::isFinish() const { return mIsFinished; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u16 TChannel::getBlockCounter() const
{
	// UNUSED FUNCTION
	// return 0x0;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u16 TChannel::getRemainSamples() const
{
	// UNUSED FUNCTION
	// return 0x10;
}

/**
 * @note Address: 0x800A5750
 * @note Size: 0x150
 */
void TChannel::setWaveInfo(JASWaveInfo const& info, u32 dataOffset, u32 blockCount)
{
	static u8 COMP_BLOCKSAMPLES[8] = { 0x10, 0x10, 0x01, 0x01, 0x01, 0x10, 0x10, 0x01 };
	static u8 COMP_BLOCKBYTES[8]   = { 0x9, 0x5, 0x8, 0x10, 0x1, 0x1, 0x1, 0x1 };

	mDataOffset      = dataOffset;
	mSamplesPerBlock = COMP_BLOCKSAMPLES[info.mFormat];
	mBytesPerBlock   = COMP_BLOCKBYTES[info.mFormat];

	mBlockCount = 0;

	if (mBytesPerBlock < 4) {
		return;
	}

	mSampleCount = info.mSampleCount;
	mLoopOffset  = info.mLoopOffset;
	if (mLoopOffset != 0) {
		if (blockCount == 1) {
			blockCount = info.mLoopStartOffset;
		}

		mLoopStartOffset  = info.mLoopStartOffset;
		mNextSampleOffset = info.mLoopEndOffset;
		mLast             = info.mLast;
		mPenult           = info.mPenult;
	} else {
		mNextSampleOffset = mSampleCount;
	}

	if (blockCount != 0 && mNextSampleOffset > blockCount) {
		switch (info.mFormat) {
		case 0:
		case 1:
			mBlockCount = blockCount;
			mDataOffset += blockCount * mBytesPerBlock >> 4;
			mLoopStartOffset -= blockCount;
			mNextSampleOffset -= blockCount;
			break;
		case 2:
		case 3:
			mBlockCount = blockCount;
			break;
		}
	}

	for (s32 i = 0; i < 16; i++) {
		_B0[i] = 0;
	}
}

/**
 * @note Address: 0x800A58A0
 * @note Size: 0x18
 */
void TChannel::setOscInfo(u32 bytesPerBlock)
{
	mDataOffset      = 0;
	mSamplesPerBlock = 0x10;
	mBytesPerBlock   = bytesPerBlock;
}

/**
 * @note Address: 0x800A58B8
 * @note Size: 0x2C
 */
void TChannel::initAutoMixer()
{
	if (mIsMixerInitialized) {
		mCurrentMixerValue = mMixerLevel;
	} else {
		mCurrentMixerValue  = 0;
		mIsMixerInitialized = 1;
	}
}

/**
 * @note Address: 0x800A58E4
 * @note Size: 0x2C
 */
void TChannel::setAutoMixer(u16 level, u8 volume, u8 pan, u8 fxMix, u8 dolby)
{
	mVolumeAndPan       = (volume << 8) | pan;
	mFxMixAndDolby      = (fxMix << 8) | (fxMix << 1);
	mMixerLevel         = level;
	mIsMixerInitialized = 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void TChannel::updateAMVolume(u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void TChannel::updateAMPan(u8, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void TChannel::updateAMFX(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A5910
 * @note Size: 0x18
 */
void TChannel::setPitch(u16 pitch)
{
	if (pitch >= 32767) {
		pitch = 32767;
	}

	mPitch = pitch;
}

/**
 * @note Address: 0x800A5928
 * @note Size: 0xC
 */
void TChannel::setMixerInitDelayMax(u8 mixerInitDelayMax) { mMixerInitDelayMax = mixerInitDelayMax; }

/**
 * @note Address: 0x800A5934
 * @note Size: 0x20
 */
void TChannel::setMixerInitVolume(u8 index, s16 volume)
{
	TMixer* mixer     = &mMixer[index];
	mixer->mMixVolume = mixer->mBaseVolume = volume;
	mixer->mMixFlags                       = 0;
}

/**
 * @note Address: 0x800A5954
 * @note Size: 0x18
 */
void TChannel::setMixerInitDelaySamples(u8 index, u8 samples)
{
	TMixer* mixer    = &mMixer[index];
	mixer->mMixFlags = (samples << 8) | samples;
}

/**
 * @note Address: 0x800A596C
 * @note Size: 0x20
 */
void TChannel::setMixerDelaySamples(u8 index, u8 samples)
{
	TMixer* mixer    = &mMixer[index];
	mixer->mMixFlags = (samples << 8) | (mixer->mMixFlags & 0xFF);
}

/**
 * @note Address: 0x800A598C
 * @note Size: 0x2C
 */
void TChannel::setMixerVolume(u8 index, s16 volume)
{
	if (mForcedStop) {
		return;
	}
	TMixer* mixer     = &mMixer[index];
	mixer->mMixVolume = volume;
	mixer->mMixFlags &= 0xFF;
}

/**
 * @note Address: 0x800A59B8
 * @note Size: 0xC
 */
void TChannel::setPauseFlag(u8 pauseFlag) { mPauseFlag = pauseFlag; }

/**
 * @note Address: 0x800A59C4
 * @note Size: 0x24
 */
void TChannel::flush() { DCFlushRange(this, sizeof(TChannel)); }

/**
 * @note Address: 0x800A59E8
 * @note Size: 0x48
 */
void TChannel::initFilter()
{
	for (int i = 0; i < 8; i++) {
		mFir8FilterParam[i] = 0;
	}
	mFir8FilterParam[0] = 0x7FFF;
	for (int i = 0; i < 4; i++) {
		mIirFilterParam[i] = 0;
	}
	mIirFilterParam[0] = 0x7FFF;
	mDistFilter        = 0;
}

/**
 * @note Address: 0x800A5A30
 * @note Size: 0x38
 */
void TChannel::setFilterMode(u16 filterMode)
{
	u8 v1 = filterMode & 0x1F;

	if (filterMode & 0x20) {
		if (v1 > 20) {
			v1 = 20;
		}
	} else if (v1 > 24) {
		v1 = 24;
	}

	mFilterMode = (filterMode & 0x20) + v1;
}

/**
 * @note Address: 0x800A5A68
 * @note Size: 0x24
 */
void TChannel::setIIRFilterParam(s16* params)
{
	for (int i = 0; i < 4; i++) {
		mIirFilterParam[i] = params[i];
	}
}

/**
 * @note Address: 0x800A5A8C
 * @note Size: 0x44
 */
void TChannel::setFIR8FilterParam(s16* params)
{
	for (int i = 0; i < 8; i++) {
		mFir8FilterParam[i] = params[i];
	}
}

/**
 * @note Address: 0x800A5AD0
 * @note Size: 0x8
 */
void TChannel::setDistFilter(s16 distFilter) { mDistFilter = distFilter; }

/**
 * @note Address: 0x800A5AD8
 * @note Size: 0x20
 */
void TChannel::setBusConnect(u8 index, u8 connectType)
{
	static const u16 connect_table[12] = { 0x000, 0xD00, 0xD60, 0xDC0, 0xE20, 0xE80, 0xEE0, 0xCA0, 0xF40, 0xFA0, 0xB00, 0x9A0 };
	TMixer* mixer                      = &mMixer[index];
	mixer->mBusConnect                 = connect_table[connectType];
}

} // namespace JASDsp

/**
 * @note Address: 0x800A5AF8
 * @note Size: 0x90
 */
u16 DSP_CreateMap2(u32 p1)
{
	u16 map                  = 0;
	JASDsp::TChannel* buffer = &JASDsp::CH_BUF[p1 << 4];
	for (int i = 0; i < 16; i++) {
		map <<= 1;
		if (buffer->mIsActive) {
			map |= 1;
		}
		buffer++;
	}
	return map;
}

/**
 * @note Address: N/A
 * @note Size: 0x15C
 */
void DSP_CreateMap()
{
	// UNUSED FUNCTION
}
