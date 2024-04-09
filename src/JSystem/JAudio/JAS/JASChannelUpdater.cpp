#include "JSystem/JAudio/JAS/JASChannel.h"

/**
 * @note Address: 0x800A8504
 * @note Size: 0x30
 */
JASChannelUpdater::JASChannelUpdater() { init(); }

/**
 * @note Address: 0x800A8534
 * @note Size: 0xC0
 */
void JASChannelUpdater::init()
{
	_00              = 1.0f;
	_04              = 1.0f;
	mPan             = 0.5f;
	mFxMix           = 0.0f;
	mDolby           = 0.0f;
	mFIR8FilterParam = 0;
	_16[0]           = 0;
	_16[1]           = 0;
	_16[2]           = 0;
	_16[3]           = 0;
	_16[4]           = 0;
	_16[5]           = 0;
	_16[6]           = 0;
	mFIR8FilterParam = 0x7FFF;
	_34              = 0;
	mIIRFilterParam  = 0;
	_26[0]           = 0;
	_26[1]           = 0;
	_26[2]           = 0;
	mDelaySamples[0] = 0;
	mDelaySamples[1] = 0;
	mDelaySamples[2] = 0;
	mDelaySamples[3] = 0;
	mDelaySamples[4] = 0;
	mDelaySamples[5] = 0;
	mDelayMax        = 0;
	mIIRFilterParam  = 0x7FFF;
	mFilterMode      = 0;
	mMixConfigs[0]   = 0x150;
	mMixConfigs[1]   = 0x210;
	mMixConfigs[2]   = 0x352;
	mMixConfigs[3]   = 0x412;
	mMixConfigs[4]   = 0;
	mMixConfigs[5]   = 0;
	mPanCalcType     = JASChannel::CALC_AddAll;
	mFxMixCalcType   = JASChannel::CALC_AddAll;
	mDolbyCalcType   = JASChannel::CALC_AddAll;
}

/**
 * @note Address: 0x800A85F4
 * @note Size: 0x164
 */
void JASChannelUpdater::initialUpdateChannel(JASChannel* chan, JASDsp::TChannel* dspChan)
{
	for (int i = 0; i < 6; i++) {
		chan->setMixConfig(i, mMixConfigs[i]);
	}
	if (chan->mMixConfigs[0].mWhole == 0xFFFF) {
		dspChan->initAutoMixer();
	} else {
		dspChan->setMixerInitDelayMax(mDelayMax);
		for (u8 i = 0; i < 6; i++) {
			dspChan->setMixerInitDelaySamples(i, mDelaySamples[i]);
		}
	}
	chan->mPanCalcType   = mPanCalcType;
	chan->mFxMixCalcType = mFxMixCalcType;
	chan->mDolbyCalcType = mDolbyCalcType;
	chan->_100           = _00;
	chan->_104           = _04;
	chan->mPanChannel    = mPan;
	chan->mFxMixChannel  = mFxMix;
	chan->mDolbyChannel  = mDolby;
	for (u8 i = 0; i < 6; i++) {
		dspChan->setMixerDelaySamples(i, mDelaySamples[i]);
	}
	if (mFilterMode & 0x20) {
		dspChan->setIIRFilterParam(&mIIRFilterParam);
	}
	if (mFilterMode & 0x1F) {
		dspChan->setFIR8FilterParam(&mFIR8FilterParam);
	}
	dspChan->setFilterMode(mFilterMode);
	dspChan->setDistFilter(_34);
}

/**
 * @note Address: 0x800A8758
 * @note Size: 0xE8
 * updateChannel__17JASChannelUpdaterFP10JASChannelPQ26JASDsp8TChannel
 */
void JASChannelUpdater::updateChannel(JASChannel* chan, JASDsp::TChannel* dspChan)
{
	if (chan->mStatus != JASChannel::STATUS_RELEASE) {
		chan->_100          = _00;
		chan->_104          = _04;
		chan->mPanChannel   = mPan;
		chan->mFxMixChannel = mFxMix;
		chan->mDolbyChannel = mDolby;
		for (u8 i = 0; i < 6; i++) {
			dspChan->setMixerDelaySamples(i, mDelaySamples[i]);
		}
		if (mFilterMode & 0x20) {
			dspChan->setIIRFilterParam(&mIIRFilterParam);
		}
		if (mFilterMode & 0x1F) {
			dspChan->setFIR8FilterParam(&mFIR8FilterParam);
		}
		dspChan->setFilterMode(mFilterMode);
		dspChan->setDistFilter(_34);
	}
}
