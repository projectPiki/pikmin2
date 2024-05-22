#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JMath.h"
#include "stl/math.h"

enum CalcSource {
	CALC_Sound   = 0,
	CALC_Effect  = 1,
	CALC_Channel = 2,
};

enum CalcStyle {
	CALC_NONE   = 0, // don't add that component
	CALC_ADD    = 1, // simply add that component
	CALC_WEIGHT = 2, // add component weighted by power
};

const u8 JASChannel::calc_sw_table[27][3] = {
	// sound, effect, channel
	{ CALC_NONE, CALC_NONE, CALC_NONE },       // 0, null
	{ CALC_NONE, CALC_NONE, CALC_ADD },        // 1, add only channel
	{ CALC_NONE, CALC_NONE, CALC_ADD },        // 2, add only channel
	{ CALC_NONE, CALC_ADD, CALC_NONE },        // 3, add only effect
	{ CALC_NONE, CALC_ADD, CALC_ADD },         // 4, add effect and channel
	{ CALC_NONE, CALC_ADD, CALC_WEIGHT },      // 5, add effect, weight channel
	{ CALC_NONE, CALC_ADD, CALC_NONE },        // 6, add only effect
	{ CALC_NONE, CALC_WEIGHT, CALC_ADD },      // 7, weight effect, add channel
	{ CALC_NONE, CALC_WEIGHT, CALC_WEIGHT },   // 8, weight effect and channel
	{ CALC_ADD, CALC_NONE, CALC_NONE },        // 9, add only sound
	{ CALC_ADD, CALC_NONE, CALC_ADD },         // 10, add sound and channel
	{ CALC_ADD, CALC_NONE, CALC_WEIGHT },      // 11, add sound, weight channel
	{ CALC_ADD, CALC_ADD, CALC_NONE },         // 12, add sound and effect
	{ CALC_ADD, CALC_ADD, CALC_ADD },          // 13, add all
	{ CALC_ADD, CALC_ADD, CALC_WEIGHT },       // 14, add sound and effect, weight channel
	{ CALC_ADD, CALC_WEIGHT, CALC_NONE },      // 15, add sound, weight effect
	{ CALC_ADD, CALC_WEIGHT, CALC_ADD },       // 16, add sound and channel, weight effect
	{ CALC_ADD, CALC_WEIGHT, CALC_WEIGHT },    // 17, add sound, weight effect and channel
	{ CALC_ADD, CALC_NONE, CALC_NONE },        // 18, add only sound
	{ CALC_WEIGHT, CALC_NONE, CALC_ADD },      // 19, weight sound, add channel
	{ CALC_WEIGHT, CALC_NONE, CALC_WEIGHT },   // 20, weight sound and channel
	{ CALC_WEIGHT, CALC_ADD, CALC_NONE },      // 21, weight sound, add effect
	{ CALC_WEIGHT, CALC_ADD, CALC_ADD },       // 22, weight sound, add effect and channel
	{ CALC_WEIGHT, CALC_ADD, CALC_WEIGHT },    // 23, weight sound and channel, weight effect
	{ CALC_WEIGHT, CALC_WEIGHT, CALC_NONE },   // 24, weight sound and effect
	{ CALC_WEIGHT, CALC_WEIGHT, CALC_ADD },    // 25, weight sound and effect, add channel
	{ CALC_WEIGHT, CALC_WEIGHT, CALC_WEIGHT }, // 26, weight all
};

/**
 * @note Address: 0x800A3204
 * @note Size: 0x160
 */
JASChannel::JASChannel(Callback callback, void* cbData)
    : JSULink(this)
    , mStatus(0)
    , mDspChannel(nullptr)
    , mCallback(callback)
    , mCallbackData(cbData)
    , mUpdateTimer(0)
    , mOscillators()
    , mTargetPitch(1.0f)
    , mSweepSteps(0)
    , _C8(0)
    , mModifiedPitch(1.0f)
    , _FC(1.0f)
{
	mWaveInfo             = nullptr;
	mWaveFormat           = 0;
	mWaveData             = nullptr;
	mPanSound             = 0.5f;
	mFxMixSound           = 0.0f;
	mDolbySound           = 0.0f;
	mPanChannel           = 0.5f;
	mFxMixChannel         = 0.0f;
	mDolbyChannel         = 0.0f;
	mMixConfigs[0].mWhole = 0x150;
	mMixConfigs[1].mWhole = 0x210;
	mMixConfigs[2].mWhole = 0x352;
	mMixConfigs[3].mWhole = 0x412;
	mMixConfigs[4].mWhole = 0;
	mMixConfigs[5].mWhole = 0;
	mPriority             = 0x13F;
	mPanCalcType          = CALC_WeightAll;
	mFxMixCalcType        = CALC_AddChannelOnly;
	mDolbyCalcType        = CALC_AddChannelOnly;
	for (u32 i = 0; i < 4; i++) {
		mOscillators[i].init();
	}
	mVolumeChannel = 1.0f;
	mPitchChannel  = 1.0f;
	mPauseFlag     = false;
}

/**
 * @note Address: 0x800A3364
 * @note Size: 0x30
 */
JASOscillator::JASOscillator() { init(); }

/**
 * @note Address: 0x800A3438
 * @note Size: 0x10C
 */
JASChannel::~JASChannel()
{
	if (mDspChannel != nullptr) {
		mDspChannel->drop();
	}
	if (mCallback != nullptr) {
		mCallback(CB_STOP, this, nullptr, mCallbackData);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	or.      r30, r3, r3
	beq      lbl_800A3528
	lis      r3, __vt__10JASChannel@ha
	addi     r3, r3, __vt__10JASChannel@l
	stw      r3, 0x14(r30)
	addi     r0, r3, 8
	stw      r0, 0x10(r30)
	lwz      r3, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_800A347C
	bl       drop__13JASDSPChannelFv

lbl_800A347C:
	lwz      r12, 0x24(r30)
	cmplwi   r12, 0
	beq      lbl_800A34A0
	mr       r4, r30
	lwz      r6, 0x28(r30)
	li       r3, 2
	li       r5, 0
	mtctr    r12
	bctrl

lbl_800A34A0:
	addic.   r0, r30, 0x10
	beq      lbl_800A34B4
	lis      r3,
"__vt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>"@ha
	addi     r0, r3,
"__vt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>"@l
	stw      r0, 0x10(r30)

lbl_800A34B4:
	cmplwi   r30, 0
	beq      lbl_800A34C8
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800A34C8:
	extsh.   r0, r31
	ble      lbl_800A3528
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800A3518
	bl       OSDisableInterrupts
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	stw      r3, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800A3510
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0xc
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800A350C
	bl       __ct__17JASGenericMemPoolFv

lbl_800A350C:
	stw      r31,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)

lbl_800A3510:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts

lbl_800A3518:
	lwz      r3,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	mr       r4, r30
	li       r5, 0x118
	bl       free__17JASGenericMemPoolFPvUl

lbl_800A3528:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A3544
 * @note Size: 0x34
 */
void JASChannel::setOscInit(int index, const JASOscillator::Data* data) { mOscillators[index].initStart(data); }

/**
 * @note Address: 0x800A3578
 * @note Size: 0x10
 */
void JASChannel::setMixConfig(int index, u16 mixConfig) { mMixConfigs[index].mWhole = mixConfig; }

/**
 * @note Address: 0x800A3588
 * @note Size: 0x8
 */
void JASChannel::directReleaseOsc(u16 release) { mOscillators[0].mRelease = release; }

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void JASChannel::effectOsc(int index, EffectOscParam* effectParms)
{
	f32 value = mOscillators[index].getValue();
	switch (mOscillators[index].getTarget()) {
	case JASOscillator::TARGET_Pitch:
		effectParms->mPitch *= value;
		break;
	case JASOscillator::TARGET_Volume:
		effectParms->mVolume *= value;
		break;
	case JASOscillator::TARGET_Pan:
		value -= 0.5;
		effectParms->mPan += value;
		break;
	case JASOscillator::TARGET_FxMix:
		effectParms->mFxMix += value;
		break;
	case JASOscillator::TARGET_Dolby:
		effectParms->mDolby += value;
		break;
	}
}

/**
 * @note Address: 0x800A3590
 * @note Size: 0x48
 */
void JASChannel::copyOsc(int index, JASOscillator::Data* toData)
{
	const JASOscillator::Data* fromData = mOscillators[index].mData;
	if (!fromData) {
		return;
	}
	toData->mTarget  = fromData->mTarget;
	toData->mRate    = fromData->mRate;
	toData->mAttack  = fromData->mAttack;
	toData->mRelease = fromData->mRelease;
	toData->mWidth   = fromData->mWidth;
	toData->mVertex  = fromData->mVertex;
}

/**
 * @note Address: 0x800A35D8
 * @note Size: 0x34
 */
void JASChannel::overwriteOsc(int index, JASOscillator::Data* data) { mOscillators[index].initStart(data); }

/**
 * @note Address: 0x800A360C
 * @note Size: 0x88
 */
void JASChannel::setKeySweepTarget(u8 key, u32 steps)
{
	u32 pitchKey;
	if (mWaveFormat == 2 || mWaveInfo == nullptr) {
		pitchKey = key;
	} else {
		pitchKey = key + 60 - mWaveInfo->mKey;
	}
	f32 pitch = JASDriver::key2pitch_c5(pitchKey);
	pitch *= mActivePitch;
	if (steps == 0) {
		mModifiedPitch = pitch;
	} else {
		mTargetPitch = pitch;
	}
	mSweepSteps = steps;
}

/**
 * @note Address: 0x800A3694
 * @note Size: 0x8
 */
void JASChannel::setPauseFlag(bool doPause) { mPauseFlag = doPause; }

/**
 * @note Address: 0x800A369C
 * @note Size: 0x24
 */
void JASChannel::setPanPower(f32 sound, f32 effect, f32 channel)
{
	f32 sum            = sound + effect + channel;
	mPanPower.mSound   = sound / sum;
	mPanPower.mEffect  = effect / sum;
	mPanPower.mChannel = channel / sum;
}

/**
 * @note Address: 0x800A36C0
 * @note Size: 0x84
 */
BOOL JASChannel::play()
{
	JASDSPChannel* dspChannel = JASDSPChannel::alloc(mPriority, dspUpdateCallback, this);
	if (dspChannel == nullptr) {
		delete this;
		return FALSE;
	}
	mDspChannel = dspChannel;
	dspChannel->start();
	mStatus = STATUS_ACTIVE;
	return TRUE;
}

/**
 * @note Address: 0x800A3744
 * @note Size: 0x84
 */
BOOL JASChannel::playForce()
{
	JASDSPChannel* dspChannel = JASDSPChannel::allocForce(mPriority, dspUpdateCallback, this);
	if (dspChannel == nullptr) {
		delete this;
		return FALSE;
	}
	mDspChannel = dspChannel;
	dspChannel->start();
	mStatus = STATUS_ACTIVE;
	return TRUE;
}

/**
 * @note Address: 0x800A37C8
 * @note Size: 0x98
 */
void JASChannel::release(u16 release)
{
	if (mStatus != STATUS_ACTIVE) {
		return;
	}
	if (release != 0) {
		mOscillators[0].mRelease = release;
	}
	for (u32 i = 0; i < 4; i++) {
		if (mOscillators[i].mData != nullptr) {
			mOscillators[i].release();
		}
	}
	mDspChannel->setPriority(mPriority >> 8);
	mStatus = STATUS_RELEASE;
}

/**
 * @note Address: 0x800A3860
 * @note Size: 0x25C
 */
void JASChannel::updateEffectorParam(JASDsp::TChannel* dspChan, u16* mixerVol, const JASChannel::EffectOscParam& effectParms)
{
	PanVector panVec, fxmixVec, dolbyVec;
	panVec.mSound     = mPanSound;
	panVec.mChannel   = mPanChannel;
	panVec.mEffect    = effectParms.mPan;
	fxmixVec.mSound   = mFxMixSound;
	fxmixVec.mChannel = mFxMixChannel;
	fxmixVec.mEffect  = effectParms.mFxMix;
	dolbyVec.mSound   = mDolbySound;
	dolbyVec.mChannel = mDolbyChannel;
	dolbyVec.mEffect  = effectParms.mDolby;

	f32 pan;
	f32 fxmix;
	f32 dolby = 0.0f;
	switch (JASDriver::getOutputMode()) {
	case 0:
		pan   = 0.5f;
		dolby = 0.0f;
		fxmix = calcEffect(&fxmixVec, &mPanPower, mFxMixCalcType);
		break;
	case 1:
		pan   = (mPanCalcType == CALC_None) ? 0.5f : calcPan(&panVec, &mPanPower, mPanCalcType);
		fxmix = calcEffect(&fxmixVec, &mPanPower, mFxMixCalcType);
		dolby = 0.0f;
		break;
	case 2:
		pan   = (mPanCalcType == CALC_None) ? 0.5f : calcPan(&panVec, &mPanPower, mPanCalcType);
		fxmix = calcEffect(&fxmixVec, &mPanPower, mFxMixCalcType);
		dolby = calcEffect(&dolbyVec, &mPanPower, mDolbyCalcType);
		break;
	}

	f32 volume = mVolumeChannel * (_FC * effectParms.mVolume);

	pan   = JASCalc::clamp01(pan);
	fxmix = JASCalc::clamp01(fxmix);
	dolby = JASCalc::clamp01(dolby);

	if (mMixConfigs[0].mWhole != 0xFFFF) {
		updateMixer(volume, pan, fxmix, dolby, mixerVol);
	} else {
		updateAutoMixer(dspChan, volume, pan, fxmix, dolby);
	}
}

/**
 * @note Address: 0x800A3ABC
 * @note Size: 0xA0
 */
s32 JASChannel::dspUpdateCallback(u32 p1, JASDsp::TChannel* dspChan, void* tmpChan)
{
	JASChannel* channel = static_cast<JASChannel*>(tmpChan);
	switch (p1) {
	case 0:
		return channel->updateDSPChannel(dspChan);
	case 1:
		channel->initialUpdateDSPChannel(dspChan);
		break;
	case 2:
	case 3:
		channel->mDspChannel->free();
		channel->mDspChannel = nullptr;
		delete channel;
		return -1;
	}
	return 0;
}

/**
 * @note Address: 0x800A3B5C
 * @note Size: 0x2A4
 */
void JASChannel::initialUpdateDSPChannel(JASDsp::TChannel* dspChan)
{
	if (mCallback != nullptr) {
		mCallback(CB_START, this, dspChan, mCallbackData);
	}

	switch (mWaveFormat) {
	case 0:
		dspChan->setWaveInfo(*mWaveInfo, (u32)mWaveData, _C8);
		break;
	case 2:
		dspChan->setOscInfo((u32)mWaveData);
		break;
	}

	for (u8 i = 0; i < 6; i++) {
		MixConfig config = mMixConfigs[i];
		u32 mode         = JASDriver::getOutputMode();
		if (mode == JASOUTPUT_Mono) {
			switch (config.mParts.u) {
			case 8:
				config.mParts.u = 11;
				break;
			case 9:
				config.mParts.u = 2;
				break;
			}
		} else if (mode == JASOUTPUT_Stereo && config.mParts.u == 8) {
			config.mParts.u = 11;
		}
		dspChan->setBusConnect(i, config.mParts.u);
	}

	JASChannel::EffectOscParam effectParms;
	for (int i = 0; i < 4; i++) {
		if (mOscillators[i].isValid()) {
			effectOsc(i, &effectParms);
		}
	}

	u16 mixerVols[6];
	updateEffectorParam(dspChan, mixerVols, effectParms);
	for (u8 i = 0; i < 6; i++) {
		dspChan->setMixerInitVolume(i, mixerVols[i]);
	}

	f32 pitch = 4096.0f * (mPitchChannel * (mModifiedPitch * effectParms.mPitch));
	dspChan->setPitch(pitch);

	dspChan->setPauseFlag(mPauseFlag);
}

/**
 * @note Address: 0x800A3E00
 * @note Size: 0x2BC
 */
s32 JASChannel::updateDSPChannel(JASDsp::TChannel* dspChan)
{
	if (mWaveInfo && *(u32*)mWaveInfo->_24 == 0) {
		mDspChannel->free();
		mDspChannel = nullptr;
		delete this;
		return -1;
	}

	if (mCallback != nullptr) {
		mCallback(CB_PLAY, this, dspChan, mCallbackData);
	}

	if (mUpdateTimer != 0) {
		mUpdateTimer--;
		if (mUpdateTimer == 0 && mCallback != nullptr) {
			mCallback(CB_TIMER, this, dspChan, mCallbackData);
		}
	}

	EffectOscParam effectParms;
	for (int i = 0; i < 4; i++) {
		if (mOscillators[i].isValid()) {
			mOscillators[i].incCounter();
			effectOsc(i, &effectParms);
			if (i == 0 && mOscillators[i].isStop()) {
				mDspChannel->free();
				mDspChannel = nullptr;
				delete this;
				return -1;
			}
		}
	}

	u16 mixerVols[6];
	updateEffectorParam(dspChan, mixerVols, effectParms);
	sweepProc();
	for (u8 i = 0; i < 6; i++) {
		dspChan->setMixerVolume(i, mixerVols[i]);
	}

	f32 pitch = 4096.0f * (mPitchChannel * (mModifiedPitch * effectParms.mPitch));
	dspChan->setPitch(pitch);
	dspChan->setPauseFlag(mPauseFlag);

	return 0;
}

/**
 * @note Address: 0x800A40BC
 * @note Size: 0xC0
 */
f32 JASChannel::calcEffect(const JASChannel::PanVector* params, const JASChannel::PanVector* power, u8 calcType)
{
	f32 value           = 0.0f;
	const u8* calcTypes = calc_sw_table[calcType];
	switch (calcTypes[CALC_Sound]) {
	case CALC_NONE:
		break;
	case CALC_ADD:
		value += params->mSound;
		break;
	case CALC_WEIGHT:
		value += params->mSound * power->mSound;
		break;
	}

	switch (calcTypes[CALC_Effect]) {
	case CALC_NONE:
		break;
	case CALC_ADD:
		value += params->mEffect;
		break;
	case CALC_WEIGHT:
		value += params->mEffect * power->mEffect;
		break;
	}

	switch (calcTypes[CALC_Channel]) {
	case CALC_NONE:
		break;
	case CALC_ADD:
		value += params->mChannel;
		break;
	case CALC_WEIGHT:
		value += params->mChannel * power->mChannel;
		break;
	}

	return value;
}

/**
 * @note Address: 0x800A417C
 * @note Size: 0xFC
 */
f32 JASChannel::calcPan(const JASChannel::PanVector* params, const JASChannel::PanVector* power, u8 calcType)
{
	f32 value           = 0.0f;
	const u8* calcTypes = calc_sw_table[calcType];
	switch (calcTypes[CALC_Sound]) {
	case CALC_NONE:
		break;
	case CALC_ADD:
		value += (params->mSound - 0.5f);
		break;
	case CALC_WEIGHT:
		value += (params->mSound - 0.5f) * power->mSound;
		break;
	}

	switch (calcTypes[CALC_Effect]) {
	case CALC_NONE:
		break;
	case CALC_ADD:
		value += (params->mEffect - 0.5f);
		break;
	case CALC_WEIGHT:
		value += (params->mEffect - 0.5f) * power->mEffect;
		break;
	}

	switch (calcTypes[CALC_Channel]) {
	case CALC_NONE:
		break;
	case CALC_ADD:
		value += (params->mChannel - 0.5f);
		break;
	case CALC_WEIGHT:
		value += (params->mChannel - 0.5f) * power->mChannel;
		break;
	}

	value += 0.5f;
	return value;
}

/**
 * @note Address: 0x800A4278
 * @note Size: 0x120
 */
void JASChannel::updateAutoMixer(JASDsp::TChannel* dspChan, f32 volume, f32 pan, f32 fxMix, f32 dolby)
{
	dspChan->setAutoMixer(JASCalc::clamp01(volume) * JASDriver::getAutoLevel(), pan * 127.5f, dolby * 127.5f, fxMix * 127.5f,
	                      mMixConfigs[1].mWhole);
}

/**
 * @note Address: 0x800A4398
 * @note Size: 0x3D4
 */
void JASChannel::updateMixer(f32 volume, f32 pan, f32 fxmix, f32 dolby, u16* outVolume)
{
	for (u32 i = 0; i < 6; i++) {
		f32 vol          = volume;
		MixConfig config = mMixConfigs[i];
		if (config.mParts.u == 0) {
			outVolume[i] = 0;
		} else {
			f32 scale;

			if (config.mParts.l0 != 0) {
				switch (config.mParts.l0) {
				case 1:
					scale = pan;
					break;
				case 2:
					scale = fxmix;
					break;
				case 3:
					scale = dolby;
					break;
				case 5:
					scale = 1.0f - pan;
					break;
				case 6:
					scale = 1.0f - fxmix;
					break;
				case 7:
					scale = 1.0f - dolby;
					break;
				}

				switch (config.mParts.l0) {
				case 2:
				case 6:
					vol *= scale;
					break;
				default:
					vol *= JMASin(scale * (PI * 0.5f));
					break;
				}
			}

			if (config.mParts.l1 != 0) {
				switch (config.mParts.l1) {
				case 1:
					scale = pan;
					break;
				case 2:
					scale = fxmix;
					break;
				case 3:
					scale = dolby;
					break;
				case 5:
					scale = 1.0f - pan;
					break;
				case 6:
					scale = 1.0f - fxmix;
					break;
				case 7:
					scale = 1.0f - dolby;
					break;
				}

				switch (config.mParts.l1) {
				case 3:
				case 7:
					vol *= JMASin((scale * 0.34776f + 0.32612f) * (PI * 0.5f));
					break;
				case 2:
				case 6:
					vol *= scale;
					break;
				default:
					vol *= JMASin(scale * (PI * 0.5f));
					break;
				}
			}

			outVolume[i] = JASCalc::clamp01(vol) * JASDriver::getChannelLevel();
		}
	}
}

/**
 * @note Address: 0x800A476C
 * @note Size: 0x54
 */
void JASChannel::sweepProc()
{
	if (mSweepSteps == 0) {
		return;
	}

	f32 pitch = mTargetPitch;
	pitch -= mModifiedPitch;
	pitch /= mSweepSteps;
	mModifiedPitch += pitch;
	mSweepSteps--;
}

/**
 * @note Address: 0x800A47C0
 * @note Size: 0x10
 */
void JASChannel::free()
{
	mCallback     = nullptr;
	mCallbackData = nullptr;
}
