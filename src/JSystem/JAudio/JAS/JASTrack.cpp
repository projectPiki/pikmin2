#include "Dolphin/OS/OSCache.h"
#include "math.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASPlayer.h"
#include "JSystem/JAudio/JAS/JASSeqParser.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JMath.h"
#include "trig.h"

static f32 c32 = 1.0f;

JASTrack::SeqCallback JASTrack::sCallBackFunc;
JASSeqParser JASTrack::sParser;
JASTrack* JASTrack::sFreeList;
JASTrack* JASTrack::sFreeListEnd;

/**
 * @note Address: 0x8009EF94
 * @note Size: 0x12C
 */
JASTrack::JASTrack()
    : mVibrate()
    , mChannelUpdater()
    , mNoteOnCallback(nullptr)
    , mTimedParam()
    , mRegisterParam()
    , mParentTrack(nullptr)
    , _340(0.0f)
    , mCurrentTempo(0.0f)
    , _348(0)
    , mUpdateFlags(0)
    , _350(0)
    , mTempo(120)
    , mTimeBase(120)
    , mTranspose(0)
    , _357(0)
    , mPauseStatus(0)
    , mVolumeMode(0)
    , mNoteMask(0)
    , _35B(0)
    , mIsPaused(false)
    , mIsMuted(0)
    , mTimeRelate(0)
    , _365(0)
    , _366(0)
{
	mChannelUpdater.init();
	for (int i = 0; i < 12; i++) {
		_2E0[i] = JASPlayer::sAdsTable[i];
	}
	JASCalc::bzero(&mTimedParam, sizeof(TimedParam_));
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSUList<JASChannel>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
JASTrack::~JASTrack()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009F254
 * @note Size: 0x1E8
 */
void JASTrack::init()
{
	mSeqCtrl.init();
	mTrackPort.init();
	mIntrMgr.init();
	_E0 = 0;
	_E4 = 0;
	_E5 = 0;
	_E6 = 0;
	for (int i = 0; i < 8; i++) {
		mChannels[i] = nullptr;
	}
	mChannelUpdater.init();
	mNoteOnCallback = nullptr;
	initTimed();
	mRegisterParam.init();

	initOscillators();

	mParentTrack  = nullptr;
	mChildList[0] = nullptr;

	for (int i = 1; i < 16; i++) {
		mChildList[i] = 0;
	}
	if (mExtBuffer) {
		mExtBuffer->initExtBuffer();
	}
	_340          = 0.0f;
	mCurrentTempo = 1.0f;
	_348          = 0;
	mVibrate.init();
	mUpdateFlags = 0;
	_350         = 0;
	mTempo       = 120;
	mTimeBase    = 48;
	updateTempo();
	mTranspose   = 0;
	_357         = 0;
	mPauseStatus = 10;
	mVolumeMode  = 0;
	mNoteMask    = 0;
	_35B         = 0;

	mPanCalcType                 = 0;
	mParentPanCalcType           = 0;
	mChannelUpdater.mPanCalcType = JASChannel::CALC_AddAll;

	mFxmixCalcType                 = 0;
	mParentFxmixCalcType           = 0;
	mChannelUpdater.mFxMixCalcType = JASChannel::CALC_AddAll;

	mDolbyCalcType                 = 0;
	mParentDolbyCalcType           = 0;
	mChannelUpdater.mDolbyCalcType = JASChannel::CALC_AddAll;

	mIsPaused   = false;
	mIsMuted    = 0;
	mTimeRelate = 1;
	_365        = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x120
 */
int JASTrack::inherit()
{
	if (mParentTrack) {
		mTempo        = mParentTrack->mTempo;
		_365          = 0;
		mCurrentTempo = mParentTrack->mCurrentTempo;
		mTimeBase     = mParentTrack->mTimeBase;
		mTimeRelate   = mParentTrack->mTimeRelate;
		mIsPaused     = mParentTrack->mIsPaused;
		mPauseStatus  = mParentTrack->mPauseStatus;
		mVolumeMode   = mParentTrack->mVolumeMode;
		mIsMuted      = mParentTrack->mIsMuted;
		if (_357 & 0x2) {
			return;
		}

		mRegisterParam.inherit(mParentTrack->mRegisterParam);
		mPanCalcType                 = mParentTrack->mPanCalcType;
		mParentPanCalcType           = mParentTrack->mParentPanCalcType;
		mChannelUpdater.mPanCalcType = mParentTrack->mChannelUpdater.mPanCalcType;

		mFxmixCalcType                 = mParentTrack->mFxmixCalcType;
		mParentFxmixCalcType           = mParentTrack->mParentFxmixCalcType;
		mChannelUpdater.mFxMixCalcType = mParentTrack->mChannelUpdater.mFxMixCalcType;

		mDolbyCalcType                 = mParentTrack->mDolbyCalcType;
		mParentDolbyCalcType           = mParentTrack->mParentDolbyCalcType;
		mChannelUpdater.mDolbyCalcType = mParentTrack->mChannelUpdater.mDolbyCalcType;
	}
}

/**
 * @note Address: 0x8009F43C
 * @note Size: 0x20C
 */
s8 JASTrack::mainProc()
{
	int seqRes = 0;
	if (_365 != 0 && mParentTrack != nullptr) {
		f32 tempoProportion = (f32)mTempo;
		tempoProportion /= (f32)mParentTrack->mTempo;
		if (tempoProportion > 1.0f) {
			tempoProportion = 1.0f;
		}
		_340 += tempoProportion;
		if (_340 < 1.0f) {
			return 0;
		}
		_340 -= 1.0f;
	}

	mIntrMgr.request(7);
	mIntrMgr.timerProcess();
	tryInterrupt();
	if (!mIsPaused || !(mPauseStatus & 2)) {
		if (mSeqCtrl.mWaitTimer == -1) {
			if (checkNoteStop(0)) {
				mSeqCtrl.mWaitTimer = 0;
			} else {
				goto timed;
			}
		}

		if (mSeqCtrl.mState.w > 0) {
			mSeqCtrl.mState.w--;
		}

		if (mSeqCtrl.mWaitTimer > 0) {
			if (mSeqCtrl.waitCountDown()) {
				if (_E0 != -1 && _E4 == 0) {
					mChannels[0] = nullptr;
				}
			} else {
				goto timed;
			}
		}
		seqRes = sParser.parseSeq(this);

	// would i love to get rid of this goto? yes.
	// can i work out how to do it? god no.
	timed:
		updateTimedParam();
	}

	updateSeq(0, false);
	if (seqRes < 0) {
		return -1;
	}

	for (int i = 0; i < 16; i++) {
		JASTrack* childTrack = mChildList[i];
		if (childTrack && childTrack->_35B != 0 && childTrack->mainProc() == -1) {
			childTrack->close();
			mChildList[i] = nullptr;
		}
	}
	return 0;
}

/**
 * @note Address: 0x8009F648
 * @note Size: 0x28
 */
void JASTrack::setInterrupt(u16 interrupt) { mIntrMgr.request(interrupt); }

/**
 * @note Address: 0x8009F670
 * @note Size: 0x60
 */
bool JASTrack::tryInterrupt()
{
	if (mSeqCtrl.mPreviousFilePtr) {
		return false;
	}
	void* intr = mIntrMgr.checkIntr();
	if (intr == nullptr) {
		return false;
	}
	return mSeqCtrl.callIntr(intr);
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void JASTrack::setBankNumber(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009F6D0
 * @note Size: 0x8
 */
void JASTrack::assignExtBuffer(JASOuterParam* buffer) { mExtBuffer = buffer; }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void JASTrack::setPanSwitchExt(u8, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void JASTrack::setPanSwitchParent(u8, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void JASTrack::setPanSwitchJcs(u8, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JASTrack::getBank() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JASTrack::getProgramNumber() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASTrack::getVolume() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASTrack::getPitch() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASTrack::getPan() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASTrack::getFxmix() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASTrack::getDolby() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009F6D8
 * @note Size: 0xCC
 */
void JASTrack::initTimed()
{
	// initialise all params
	for (u8 i = 0; i < TIMED_Count; i++) {
		mTimedParam.mMoveParams[i].mMoveTime = 0.0f;
		mTimedParam.mMoveParams[i].set(1.0f);
	}

	// not all params should be initialised to 1.0f
	// i.e. only volume, Osc params, and IIR_Unk0 are 1.0f - change the rest
	mTimedParam.mMoveParams[TIMED_Pitch].set(0.0f);
	mTimedParam.mMoveParams[TIMED_Pan].set(0.5f);
	mTimedParam.mMoveParams[TIMED_Unk16].set(0.5f);
	mTimedParam.mMoveParams[TIMED_Unk17].set(0.0f);
	mTimedParam.mMoveParams[TIMED_Fxmix].set(0.0f);
	mTimedParam.mMoveParams[TIMED_Dolby].set(0.0f);
	mTimedParam.mMoveParams[TIMED_IIR_Unk1].set(0.0f);
	mTimedParam.mMoveParams[TIMED_IIR_Unk2].set(0.0f);
	mTimedParam.mMoveParams[TIMED_IIR_Unk3].set(0.0f);
	mTimedParam.mMoveParams[TIMED_Unk5].set(0.0f);
}

/**
 * @note Address: 0x8009F7A4
 * @note Size: 0x10
 */
void JASTrack::connectBus(int mixConfigIdx, int value) { mChannelUpdater.mMixConfigs[mixConfigIdx] = value; }

/**
 * @note Address: 0x8009F7B4
 * @note Size: 0x1A4
 */
int JASTrack::noteOn(u8 channelIndex, s32 p2, s32 p3, s32 p4, u32 p5)
{
	if (mIsMuted && (mPauseStatus & 0x40)) {
		return -1;
	}
	if ((mNoteMask & 1 << channelIndex)) {
		return -1;
	}
	noteOff(channelIndex, 0);
	u8 physicalNumber   = JASBankMgr::getPhysicalNumber(mRegisterParam.getBankNumber());
	u8 programNumber    = mRegisterParam.getProgramNumber();
	JASChannel* channel = !mNoteOnCallback
	                        ? JASBankMgr::noteOn(physicalNumber, programNumber, p2, p3, mRegisterParam._1A, channelUpdateCallback, this)
	                        : mNoteOnCallback(this, physicalNumber, programNumber, p2, p3, mRegisterParam._1A);
	if (channel == nullptr) {
		return -1;
	}
	channel->mUpdateTimer = p4;
	append(channel);
	mChannels[channelIndex] = channel;
	channel->_C8            = p5;
	channel->setPanPower(mRegisterParam._10, mRegisterParam._12, mRegisterParam._14);
	overwriteOsc(channel);
	if (_350) {
		channel->directReleaseOsc(_350);
	}
	return 0;
}

/**
 * @note Address: 0x8009F958
 * @note Size: 0xA4
 */
void JASTrack::overwriteOsc(JASChannel* channel)
{
	for (int i = 0; i < 2; i++) {
		u32 flag = mOscRoute[i];
		if (flag != 0xF) {
			u8 index = flag & 3;
			if (flag & 8) {
				channel->copyOsc(index, &mOscData[i]);
			} else if (flag & 4) {
				s16* release = (s16*)mOscData[i].mRelease;
				channel->copyOsc(index, &mOscData[i]);
				mOscData[i].mRelease = release;
			}
			channel->overwriteOsc(index, &mOscData[i]);
		}
	}
}

/**
 * @note Address: 0x8009F9FC
 * @note Size: 0x68
 */
bool JASTrack::noteOff(u8 channelIndex, u16 p2)
{
	if (mChannels[channelIndex] == nullptr) {
		return false;
	}
	if (p2 == 0) {
		mChannels[channelIndex]->release(0);
	} else {
		mChannels[channelIndex]->release(p2);
	}
	mChannels[channelIndex] = nullptr;
	return true;
}

/**
 * @note Address: 0x8009FA64
 * @note Size: 0x64
 */
int JASTrack::gateOn(u8 chanIdx, s32 p2, s32 p3, s32 updateTimer)
{
	JASChannel* channel = mChannels[chanIdx];
	if (channel == nullptr) {
		return -1;
	}
	JASBankMgr::gateOn(channel, p2, p3);
	channel->mUpdateTimer = updateTimer;
	return 0;
}

/**
 * @note Address: 0x8009FAC8
 * @note Size: 0x2C
 */
bool JASTrack::checkNoteStop(s32 chanIdx)
{
	if (mChannels[chanIdx] == nullptr) {
		return true;
	}
	return (u8)(mChannels[chanIdx]->mStatus == JASChannel::STATUS_INACTIVE);
}

/**
 * @note Address: 0x8009FAF4
 * @note Size: 0xE0
 */
void JASTrack::oscSetupFull(u8 route, u32 attackOffset, u32 releaseOffset)
{
	u8 oscIdx           = (route & 0x10) >> 4;
	int target          = route & 0xF;
	bool doSetupEnv     = (route & 0x80) >> 7;
	bool doSetupAttack  = route & 0x40;
	bool doSetupRelease = route & 0x20;
	if (doSetupEnv) {
		mOscData[oscIdx]         = JASPlayer::sEnvelopeDef;
		mOscData[oscIdx].mTarget = target;
		if (target != JASOscillator::TARGET_Pitch) {
			mOscData[oscIdx].mVertex = mOscData[oscIdx].mVertex;
		} else {
			mOscData[oscIdx].mVertex = 1.0f;
		}
	}

	if (doSetupAttack) {
		if (attackOffset == 0) {
			mOscData[oscIdx].mAttack = nullptr;
		}
		mOscData[oscIdx].mAttack = (s16*)(mSeqCtrl.mRawFilePtr + attackOffset);
	}

	if (doSetupRelease) {
		if (releaseOffset == 0) {
			mOscData[oscIdx].mRelease = JASPlayer::sRelTable;
		}
		mOscData[oscIdx].mRelease = (s16*)(mSeqCtrl.mRawFilePtr + releaseOffset);
	}
	/*
	rlwinm.  r0, r4, 0x19, 0x1f, 0x1f
	rlwinm   r8, r4, 0x1c, 0x1f, 0x1f
	clrlwi   r12, r4, 0x1c
	rlwinm   r9, r4, 0x1a, 0x1f, 0x1f
	rlwinm   r10, r4, 0x1b, 0x1f, 0x1f
	beq      lbl_8009FB64
	mulli    r11, r8, 0x18
	lis      r4, sEnvelopeDef__9JASPlayer@ha
	cmpwi    r12, 1
	addi     r7, r4, sEnvelopeDef__9JASPlayer@l
	lwz      r0, 0(r7)
	add      r11, r3, r11
	lfs      f0, 4(r7)
	stw      r0, 0x2a8(r11)
	lwz      r4, 8(r7)
	stfs     f0, 0x2ac(r11)
	lwz      r0, 0xc(r7)
	stw      r4, 0x2b0(r11)
	lfs      f1, 0x10(r7)
	stw      r0, 0x2b4(r11)
	lfs      f0, 0x14(r7)
	stfs     f1, 0x2b8(r11)
	stfs     f0, 0x2bc(r11)
	stw      r12, 0x2a8(r11)
	beq      lbl_8009FB5C
	b        lbl_8009FB64

lbl_8009FB5C:
	lfs      f0, lbl_80516D7C@sda21(r2)
	stfs     f0, 0x2bc(r11)

lbl_8009FB64:
	cmplwi   r9, 0
	beq      lbl_8009FB98
	cmplwi   r5, 0
	bne      lbl_8009FB84
	mulli    r0, r8, 0x18
	li       r7, 0
	add      r4, r3, r0
	stw      r7, 0x2b0(r4)

lbl_8009FB84:
	mulli    r0, r8, 0x18
	lwz      r4, 0xc(r3)
	add      r5, r4, r5
	add      r4, r3, r0
	stw      r5, 0x2b0(r4)

lbl_8009FB98:
	cmplwi   r10, 0
	beqlr
	cmplwi   r6, 0
	bne      lbl_8009FBBC
	mulli    r0, r8, 0x18
	lis      r4, sRelTable__9JASPlayer@ha
	addi     r5, r4, sRelTable__9JASPlayer@l
	add      r4, r3, r0
	stw      r5, 0x2b4(r4)

lbl_8009FBBC:
	mulli    r0, r8, 0x18
	lwz      r4, 0xc(r3)
	add      r4, r4, r6
	add      r3, r3, r0
	stw      r4, 0x2b4(r3)
	blr
	*/
}

/**
 * @note Address: 0x8009FBD4
 * @note Size: 0x70
 */
void JASTrack::oscSetupSimpleEnv(u8 setupType, u32 offset)
{
	switch (setupType) {
	case 0:
		mOscData[0]         = JASPlayer::sEnvelopeDef;
		mOscData[0].mAttack = reinterpret_cast<s16*>(mSeqCtrl.mRawFilePtr + offset);
		break;
	case 1:
		mOscData[0].mRelease = reinterpret_cast<const s16*>(mSeqCtrl.mRawFilePtr + offset);
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void JASTrack::updateOscParam(int, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009FC44
 * @note Size: 0xDC
 */
void JASTrack::oscSetupSimple(u8 p1)
{
	switch (p1) {
	case 0:
		mOscData[1] = JASPlayer::sVibratoDef;
		break;
	case 1:
		mOscData[0] = JASPlayer::sTremoroDef;
		break;
	case 2:
		mOscData[1] = JASPlayer::sTremoroDef;
		break;
	default:
		break;
	}
}

/**
 * @note Address: 0x8009FD20
 * @note Size: 0xE8
 */
void JASTrack::updateTimedParam()
{
	for (int i = 0; i < TIMED_Count; i++) {
		// move and update parameter
		if (mTimedParam.mMoveParams[i].mMoveTime > 0.0f) {
			mTimedParam.mMoveParams[i].mCurrentValue += mTimedParam.mMoveParams[i].mMoveAmount;
			mTimedParam.mMoveParams[i].mMoveTime -= 1.0f;
			if (i <= TIMED_Unk5 || i >= TIMED_Osc1_Vertex) {
				mUpdateFlags |= (1 << i);
				continue;
			}
			f32 value = mTimedParam.mMoveParams[i].mCurrentValue;
			switch (i) {
			case TIMED_Osc0_Width:
				mOscData[0].mWidth = value;
				break;
			case TIMED_Osc0_Rate:
				mOscData[0].mRate = value;
				break;
			case TIMED_Osc0_Vertex:
				mOscData[0].mVertex = value;
				break;
			case TIMED_Osc1_Width:
				mOscData[1].mWidth = value;
				break;
			case TIMED_Osc1_Rate:
				mOscData[1].mRate = value;
				break;
			case TIMED_Osc1_Vertex:
				mOscData[1].mVertex = value;
				break;
			}
		}
	}
	mUpdateFlags |= OUTERPARAM_Pitch;
}

/**
 * @note Address: 0x8009FE08
 * @note Size: 0x3E8
 */
void JASTrack::updateTrackAll()
{
	f32 panWeight = mRegisterParam._16[0] / (SHORT_FLOAT_MAX - 1.0f);
	f32 delayF    = 128.0f * mTimedParam.mInnerParam._110.mCurrentValue;
	s8 delay0     = 0;
	s8 delay1;
	OSf32tos8(&delayF, &delay1);
	if (delay1 < 0) {
		delay0 = -delay1;
		delay1 = 0;
	}

	mChannelUpdater.mDelayMax        = 16;
	mChannelUpdater.mDelaySamples[0] = delay0;
	mChannelUpdater.mDelaySamples[1] = delay1;

	f32 vol, pitch, pan, fxmix, dolby;

	vol = mTimedParam.mInnerParam.mVolume.mCurrentValue;
	if (mVolumeMode == 0) {
		vol *= vol;
	}

	if (mIsMuted) {
		vol = 0.0f;
	}

	f32 cent = JASPlayer::pitchToCent(mTimedParam.mInnerParam.mPitch.mCurrentValue, mRegisterParam._0E);
	pitch    = cent * mVibrate.getValue();

	pan   = mTimedParam.mInnerParam.mPan.mCurrentValue;
	fxmix = mTimedParam.mInnerParam.mFxmix.mCurrentValue;
	dolby = mTimedParam.mInnerParam.mDolby.mCurrentValue;

	if (mExtBuffer) {
		if (mExtBuffer->checkOuterSwitch(OUTERPARAM_Volume)) {
			vol *= mExtBuffer->mVolume;
		}

		if (mExtBuffer->checkOuterSwitch(OUTERPARAM_Pitch)) {
			pitch *= mExtBuffer->mPitch;
		}

		if (mExtBuffer->checkOuterSwitch(OUTERPARAM_Fxmix)) {
			fxmix = panCalc(fxmix, mExtBuffer->mFxmix, panWeight, mFxmixCalcType);
		}

		if (mExtBuffer->checkOuterSwitch(OUTERPARAM_Dolby)) {
			dolby = panCalc(dolby, mExtBuffer->mDolby, panWeight, mDolbyCalcType);
		}

		if (mExtBuffer->checkOuterSwitch(OUTERPARAM_Pan)) {
			pan = panCalc(pan, mExtBuffer->mPan, panWeight, mPanCalcType);
		}
	}

	if (!mParentTrack || _357 & 1) {
		mChannelUpdater.mVolume = vol;
		mChannelUpdater.mPitch  = pitch;
		mChannelUpdater.mPan    = pan;
		mChannelUpdater.mFxMix  = fxmix;
		mChannelUpdater.mDolby  = dolby;
		return;
	}

	panWeight               = f32(mRegisterParam._16[1]) / (SHORT_FLOAT_MAX - 1.0f);
	mChannelUpdater.mVolume = mParentTrack->mChannelUpdater.mVolume * vol;
	mChannelUpdater.mPitch  = mParentTrack->mChannelUpdater.mPitch * pitch;
	mChannelUpdater.mPan    = panCalc(pan, mParentTrack->mChannelUpdater.mPan, panWeight, mParentPanCalcType);
	mChannelUpdater.mFxMix  = panCalc(fxmix, mParentTrack->mChannelUpdater.mFxMix, panWeight, mParentFxmixCalcType);
	mChannelUpdater.mDolby  = panCalc(dolby, mParentTrack->mChannelUpdater.mDolby, panWeight, mParentDolbyCalcType);

	if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_FIR8Filter)) {
		for (u8 i = 0; i < 8; i++) {
			mChannelUpdater.mFIR8FilterParams[i] = mExtBuffer->getIntFirFilter(i);
		}
		mChannelUpdater.mFilterMode = 8;
	}

	for (int i = 0; i < 4; i++) {
		mChannelUpdater.mIIRFilterParams[i] = (SHORT_FLOAT_MAX - 1.0f) * mTimedParam.mInnerParam.mIIRs[i].mCurrentValue;
	}

	mChannelUpdater.mFilterMode |= 0x20;
	mChannelUpdater._34 = (SHORT_FLOAT_MAX - 1.0f) * mTimedParam.mInnerParam._50.mCurrentValue;
}

/**
 * @note Address: 0x800A01F0
 * @note Size: 0x4E0
 */
void JASTrack::updateTrack(u32 flag)
{
	f32 panWeight = f32(mRegisterParam._16[0]) / (SHORT_FLOAT_MAX - 1.0f);
	if (flag & OUTERPARAM_Unk18) {
		s8 val0 = 0;
		s8 val1;
		f32 delayF = 128.0f * mTimedParam.mInnerParam._110.mCurrentValue;
		OSf32tos8(&delayF, &val1);
		if (val1 < 0) {
			val0 = -val1;
			val1 = 0;
		}
		mChannelUpdater.mDelaySamples[0] = val0;
		mChannelUpdater.mDelaySamples[1] = val1;
	}

	if (flag & OUTERPARAM_Tempo && !mParentTrack) {
		updateTempo();
	}

	f32 vol;
	f32 pitch = 1.0f;
	f32 pan;
	f32 fxmix;
	f32 dolby;
	u32 isVol = flag & OUTERPARAM_Volume;
	if (isVol) {
		vol = mTimedParam.mInnerParam.mVolume.mCurrentValue;
		if (mVolumeMode == 0) {
			vol *= vol;
		}
		if (mIsMuted) {
			vol = 0.0f;
		}
		if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_Volume)) {
			vol *= mExtBuffer->mVolume;
		}
		if (mIsPaused && mPauseStatus & 0x1) {
			vol *= mTimedParam.mInnerParam._100.mCurrentValue;
		}
	}

	u32 isPitch = flag & OUTERPARAM_Pitch;
	if (isPitch) {
		pitch = JASPlayer::pitchToCent(mTimedParam.mInnerParam.mPitch.mCurrentValue, f32(mRegisterParam._0E));
		pitch *= mVibrate.getValue();
		if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_Pitch)) {
			pitch *= mExtBuffer->mPitch;
		}
	}

	u32 isPan = flag & OUTERPARAM_Pan;
	if (isPan) {
		pan = mTimedParam.mInnerParam.mPan.mCurrentValue;
		if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_Pan)) {
			pan = panCalc(pan, mExtBuffer->mPan, panWeight, mPanCalcType);
		}
	}

	u32 isFxmix = flag & OUTERPARAM_Fxmix;
	if (isFxmix) {
		fxmix = mTimedParam.mInnerParam.mFxmix.mCurrentValue;
		if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_Fxmix)) {
			fxmix = panCalc(fxmix, mExtBuffer->mFxmix, panWeight, mFxmixCalcType);
		}
	}

	u32 isDolby = flag & OUTERPARAM_Dolby;
	if (isDolby) {
		dolby = mTimedParam.mInnerParam.mDolby.mCurrentValue;
		if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_Dolby)) {
			dolby = panCalc(dolby, mExtBuffer->mDolby, panWeight, mDolbyCalcType);
		}
	}

	if (flag & OUTERPARAM_IIRFilter) {
		for (int i = 0; i < 4; i++) {
			mChannelUpdater.mIIRFilterParams[i] = (SHORT_FLOAT_MAX - 1.0f) * mTimedParam.mInnerParam.mIIRs[i].mCurrentValue;
		}

		mChannelUpdater.mFilterMode |= 0x20;
	}

	if (mExtBuffer && flag & OUTERPARAM_FIR8Filter && mExtBuffer->checkOuterSwitch(OUTERPARAM_FIR8Filter)) {
		for (u8 i = 0; i < 8; i++) {
			mChannelUpdater.mFIR8FilterParams[i] = mExtBuffer->getIntFirFilter(i);
		}
		mChannelUpdater.mFilterMode = (mChannelUpdater.mFilterMode & 0x20) + 8;
	}

	if (flag & OUTERPARAM_Unk6) {
		mChannelUpdater._34 = (SHORT_FLOAT_MAX - 1.0f) * mTimedParam.mInnerParam._50.mCurrentValue;
	}

	if (!mParentTrack || _357 & 0x1) {
		if (isVol) {
			mChannelUpdater.mVolume = vol;
		}
		if (isPitch) {
			mChannelUpdater.mPitch = pitch;
		}
		if (isPan) {
			mChannelUpdater.mPan = pan;
		}
		if (isFxmix) {
			mChannelUpdater.mFxMix = fxmix;
		}
		if (isDolby) {
			mChannelUpdater.mDolby = dolby;
		}
		return;
	}

	panWeight = f32(mRegisterParam._16[1]) / (SHORT_FLOAT_MAX - 1.0f);
	if (isVol) {
		mChannelUpdater.mVolume = mParentTrack->mChannelUpdater.mVolume * vol;
	}
	if (isPitch) {
		mChannelUpdater.mPitch = mParentTrack->mChannelUpdater.mPitch * pitch;
	}
	if (isPan) {
		mChannelUpdater.mPan = panCalc(pan, mParentTrack->mChannelUpdater.mPan, panWeight, mParentPanCalcType);
	}
	if (isFxmix) {
		mChannelUpdater.mFxMix = panCalc(fxmix, mParentTrack->mChannelUpdater.mFxMix, panWeight, mParentFxmixCalcType);
	}
	if (isDolby) {
		mChannelUpdater.mDolby = panCalc(dolby, mParentTrack->mChannelUpdater.mDolby, panWeight, mParentDolbyCalcType);
	}
}

/**
 * @note Address: 0x800A06D0
 * @note Size: 0x3B4
 */
void JASTrack::updateTempo()
{
	if (!mParentTrack) {
		mCurrentTempo = (f32)mTimeBase;
		mCurrentTempo *= mTempo;
		mCurrentTempo /= JASDriver::getDacRate();
		mCurrentTempo *= 1.33333333f;
		if (mExtBuffer && mExtBuffer->checkOuterSwitch(OUTERPARAM_Tempo)) {
			mCurrentTempo *= mExtBuffer->getTempo();
		}
	} else {
		mCurrentTempo = mParentTrack->mCurrentTempo;
		mTimeBase     = mParentTrack->mTimeBase;
	}

	for (int i = 0; i < 16; i++) {
		JASTrack* track = mChildList[i];
		if (track && track->_35B) {
			track->updateTempo();
		}
	}
}

/**
 * @note Address: 0x800A0A8C
 * @note Size: 0x294
 */
void JASTrack::updateSeq(u32 flags, bool recursive)
{
	flags |= mUpdateFlags;
	if (mExtBuffer) {
		flags |= mExtBuffer->getOuterUpdate();
		mExtBuffer->setOuterUpdate(0);
	}

	mVibrate.incCounter();
	mUpdateFlags = 0;

	if (flags) {
		updateTrack(flags);
	}

	for (int i = 0; i < 16; i++) {
		if (mChildList[i] && mChildList[i]->_35B) {
			if (recursive) {
				mChildList[i]->updateSeq(flags, recursive);
			} else {
				mChildList[i]->mUpdateFlags |= flags;
			}
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r18, 8(r1)
	mr       r18, r3
	mr       r31, r5
	lwz      r3, 0x33c(r3)
	lwz      r0, 0x34c(r18)
	cmplwi   r3, 0
	or       r21, r4, r0
	beq      lbl_800A0AD0
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r18)
	or       r21, r21, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0AD0:
	addi     r3, r18, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r21, 0
	stw      r0, 0x34c(r18)
	beq      lbl_800A0AF4
	mr       r3, r18
	mr       r4, r21
	bl       updateTrack__8JASTrackFUl

lbl_800A0AF4:
	li       r20, 0
	mr       r22, r18

lbl_800A0AFC:
	lwz      r18, 0x2fc(r22)
	cmplwi   r18, 0
	beq      lbl_800A0CFC
	lbz      r0, 0x35b(r18)
	cmplwi   r0, 0
	beq      lbl_800A0CFC
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A0CF0
	lwz      r3, 0x33c(r18)
	lwz      r0, 0x34c(r18)
	cmplwi   r3, 0
	or       r29, r21, r0
	beq      lbl_800A0B48
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r18)
	or       r29, r29, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0B48:
	addi     r3, r18, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r29, 0
	stw      r0, 0x34c(r18)
	beq      lbl_800A0B6C
	mr       r3, r18
	mr       r4, r29
	bl       updateTrack__8JASTrackFUl

lbl_800A0B6C:
	li       r30, 0
	mr       r23, r18

lbl_800A0B74:
	lwz      r24, 0x2fc(r23)
	cmplwi   r24, 0
	beq      lbl_800A0CDC
	lbz      r0, 0x35b(r24)
	cmplwi   r0, 0
	beq      lbl_800A0CDC
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A0CD0
	lwz      r3, 0x33c(r24)
	lwz      r0, 0x34c(r24)
	cmplwi   r3, 0
	or       r27, r29, r0
	beq      lbl_800A0BC0
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r24)
	or       r27, r27, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0BC0:
	addi     r3, r24, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r27, 0
	stw      r0, 0x34c(r24)
	beq      lbl_800A0BE4
	mr       r3, r24
	mr       r4, r27
	bl       updateTrack__8JASTrackFUl

lbl_800A0BE4:
	li       r28, 0

lbl_800A0BE8:
	lwz      r25, 0x2fc(r24)
	cmplwi   r25, 0
	beq      lbl_800A0CBC
	lbz      r0, 0x35b(r25)
	cmplwi   r0, 0
	beq      lbl_800A0CBC
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A0CB0
	lwz      r3, 0x33c(r25)
	lwz      r0, 0x34c(r25)
	cmplwi   r3, 0
	or       r26, r27, r0
	beq      lbl_800A0C34
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r25)
	or       r26, r26, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0C34:
	addi     r3, r25, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r26, 0
	stw      r0, 0x34c(r25)
	beq      lbl_800A0C58
	mr       r3, r25
	mr       r4, r26
	bl       updateTrack__8JASTrackFUl

lbl_800A0C58:
	clrlwi   r19, r31, 0x18
	li       r18, 0

lbl_800A0C60:
	lwz      r3, 0x2fc(r25)
	cmplwi   r3, 0
	beq      lbl_800A0C9C
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_800A0C9C
	cmplwi   r19, 0
	beq      lbl_800A0C90
	mr       r4, r26
	mr       r5, r31
	bl       updateSeq__8JASTrackFUlb
	b        lbl_800A0C9C

lbl_800A0C90:
	lwz      r0, 0x34c(r3)
	or       r0, r0, r26
	stw      r0, 0x34c(r3)

lbl_800A0C9C:
	addi     r18, r18, 1
	addi     r25, r25, 4
	cmpwi    r18, 0x10
	blt      lbl_800A0C60
	b        lbl_800A0CBC

lbl_800A0CB0:
	lwz      r0, 0x34c(r25)
	or       r0, r0, r27
	stw      r0, 0x34c(r25)

lbl_800A0CBC:
	addi     r28, r28, 1
	addi     r24, r24, 4
	cmpwi    r28, 0x10
	blt      lbl_800A0BE8
	b        lbl_800A0CDC

lbl_800A0CD0:
	lwz      r0, 0x34c(r24)
	or       r0, r0, r29
	stw      r0, 0x34c(r24)

lbl_800A0CDC:
	addi     r30, r30, 1
	addi     r23, r23, 4
	cmpwi    r30, 0x10
	blt      lbl_800A0B74
	b        lbl_800A0CFC

lbl_800A0CF0:
	lwz      r0, 0x34c(r18)
	or       r0, r0, r21
	stw      r0, 0x34c(r18)

lbl_800A0CFC:
	addi     r20, r20, 1
	addi     r22, r22, 4
	cmpwi    r20, 0x10
	blt      lbl_800A0AFC
	lmw      r18, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x800A0D20
 * @note Size: 0xD8
 */
s32 JASTrack::seqTimeToDspTime(s32 p1, u8 p2)
{
	f32 dspTime = (f32)p1;
	dspTime *= (f32)p2;
	dspTime /= 100.0f;

	if (mTimeRelate) {
		dspTime /= mCurrentTempo;

	} else {
		dspTime *= 120.0f / (f32)mTimeBase;
		dspTime *= (f32)JASDriver::getSubFrames() / 10.0f;
	}
	return dspTime;
}

/**
 * @note Address: 0x800A0DF8
 * @note Size: 0x84
 */
void JASTrack::setParam(int paramIndex, f32 value, int moveTime)
{
	MoveParam_* moveParam   = &mTimedParam.mMoveParams[paramIndex];
	moveParam->mTargetValue = value;
	if (moveTime <= 0) {
		moveParam->mCurrentValue = moveParam->mTargetValue;
		moveParam->mMoveAmount   = 0.0f;
		moveParam->mMoveTime     = 1.0f;
	} else {
		moveParam->mMoveAmount = (moveParam->mTargetValue - moveParam->mCurrentValue) / moveTime;
		moveParam->mMoveTime   = moveTime;
	}
}

/**
 * @note Address: 0x800A0E7C
 * @note Size: 0x64
 */
bool JASTrack::setSeqData(u8* file, s32 size)
{
	init();
	_357 = 3;
	mSeqCtrl.start(file, 0);
	updateTrackAll();
	_35B = 2;
	return true;
}

/**
 * @note Address: 0x800A0EE0
 * @note Size: 0x78
 */
bool JASTrack::startSeq()
{
	switch (_35B) {
	case 0:
		return false;
		break;
	case 1:
		return false;
		break;
	case 3:
		return false;
		break;
	case 2:
		_35B = 1;
		break;
	}
	return JASDriver::registerSubFrameCallback(rootCallback, this);
}

/**
 * @note Address: 0x800A0F58
 * @note Size: 0xFC
 */
bool JASTrack::stopSeq()
{
	switch (_35B) {
	case 0:
		break;
	case 2:
		_35B = 0;
		// none of this makes sense. there's some weird list thing going on here
		if (_366 && this) {
			JSULink<JASChannel>* link = getFirst();
			while (link) {
				JSULink<JASChannel>* next = link->getObject()->getNext();
				link->getObject()->release(0);
				link->getObject()->free();
				remove(link->getObject()->getObject());
				link = next;
			}
			this->~JASTrack();
			mHead = nullptr;
			if (sFreeListEnd) {
				sFreeListEnd->mHead = reinterpret_cast<JSUPtrLink*>(this);
			} else {
				sFreeList = this;
			}
			sFreeListEnd = this;
		}
		break;
	default:
		_35B = 3;
		break;
	}

	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x35b(r3)
	cmpwi    r0, 1
	beq      lbl_800A102C
	bge      lbl_800A0F90
	cmpwi    r0, 0
	bge      lbl_800A1034
	b        lbl_800A102C

lbl_800A0F90:
	cmpwi    r0, 3
	bge      lbl_800A102C
	li       r0, 0
	stb      r0, 0x35b(r29)
	lbz      r0, 0x366(r29)
	cmplwi   r0, 0
	beq      lbl_800A1034
	cmplwi   r29, 0
	beq      lbl_800A1034
	lwz      r30, 0(r29)
	b        lbl_800A0FE8

lbl_800A0FBC:
	lwz      r3, 0(r30)
	li       r4, 0
	lwz      r31, 0xc(r3)
	bl       release__10JASChannelFUs
	lwz      r3, 0(r30)
	bl       free__10JASChannelFv
	lwz      r4, 0(r30)
	mr       r3, r29
	lwz      r4, 0(r4)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r30, r31

lbl_800A0FE8:
	cmplwi   r30, 0
	bne      lbl_800A0FBC
	cmplwi   r29, 0
	beq      lbl_800A1004
	mr       r3, r29
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800A1004:
	li       r0, 0
	stw      r0, 0(r29)
	lwz      r3, sFreeListEnd__8JASTrack@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800A1020
	stw      r29, 0(r3)
	b        lbl_800A1024

lbl_800A1020:
	stw      r29, sFreeList__8JASTrack@sda21(r13)

lbl_800A1024:
	stw      r29, sFreeListEnd__8JASTrack@sda21(r13)
	b        lbl_800A1034

lbl_800A102C:
	li       r0, 3
	stb      r0, 0x35b(r29)

lbl_800A1034:
	lwz      r0, 0x24(r1)
	li       r3, 1
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A1054
 * @note Size: 0x3C
 */
void JASTrack::stopSeqMain()
{
	updateSeq(0, true);
	close();
}

/**
 * @note Address: 0x800A1090
 * @note Size: 0x1D4
 */
void JASTrack::close()
{
	if (!_35B) {
		return;
	}

	if (!mParentTrack) {
		for (u8 i = 0; i < 8; i++) {
			if (mChannels[i]) {
				mChannels[i]->release(10);
				mChannels[i] = nullptr;
			}
		}
	} else {
		for (u8 i = 0; i < 8; i++) {
			if (mChannels[i]) {
				mChannels[i]->release(0);
				mChannels[i] = nullptr;
			}
		}
	}

	_35B = 0;

	for (int i = 0; i < 16; i++) {
		if (mChildList[i]) {
			mChildList[i]->close();
			mChildList[i] = nullptr;
		}
	}

	mIsMuted = false;

	// this is the same crap as stopSeq, whatever *that* is
	JSULink<JASChannel>* link = getFirst();
	while (link) {
		JSULink<JASChannel>* next = link->getObject()->getNext();
		link->getObject()->release(0);
		link->getObject()->free();
		remove(link->getObject()->getObject());
		link = next;
	}

	if (_366 && this) {
		JSULink<JASChannel>* link = getFirst();
		while (link) {
			JSULink<JASChannel>* next = link->getObject()->getNext();
			link->getObject()->release(0);
			link->getObject()->free();
			remove(link->getObject()->getObject());
			link = next;
		}
		this->~JASTrack();
		mHead = nullptr;
		if (sFreeListEnd) {
			sFreeListEnd->mHead = reinterpret_cast<JSUPtrLink*>(this);
		} else {
			sFreeList = this;
		}
		sFreeListEnd = this;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_800A1244
	lwz      r0, 0x2f8(r31)
	cmplwi   r0, 0
	bne      lbl_800A1108
	li       r28, 0
	li       r30, 0
	b        lbl_800A10F8

lbl_800A10D4:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	addi     r29, r3, 0xc0
	lwzx     r3, r31, r29
	cmplwi   r3, 0
	beq      lbl_800A10F4
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r30, r31, r29

lbl_800A10F4:
	addi     r28, r28, 1

lbl_800A10F8:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 8
	blt      lbl_800A10D4
	b        lbl_800A1144

lbl_800A1108:
	li       r28, 0
	li       r30, 0
	b        lbl_800A1138

lbl_800A1114:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	addi     r29, r3, 0xc0
	lwzx     r3, r31, r29
	cmplwi   r3, 0
	beq      lbl_800A1134
	li       r4, 0
	bl       release__10JASChannelFUs
	stwx     r30, r31, r29

lbl_800A1134:
	addi     r28, r28, 1

lbl_800A1138:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 8
	blt      lbl_800A1114

lbl_800A1144:
	li       r30, 0
	mr       r29, r31
	stb      r30, 0x35b(r31)
	li       r28, 0

lbl_800A1154:
	lwz      r3, 0x2fc(r29)
	cmplwi   r3, 0
	beq      lbl_800A1168
	bl       close__8JASTrackFv
	stw      r30, 0x2fc(r29)

lbl_800A1168:
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 0x10
	blt      lbl_800A1154
	li       r0, 0
	stb      r0, 0x363(r31)
	lwz      r29, 0(r31)
	b        lbl_800A11B4

lbl_800A1188:
	lwz      r3, 0(r29)
	li       r4, 0
	lwz      r30, 0xc(r3)
	bl       release__10JASChannelFUs
	lwz      r3, 0(r29)
	bl       free__10JASChannelFv
	lwz      r4, 0(r29)
	mr       r3, r31
	lwz      r4, 0(r4)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r29, r30

lbl_800A11B4:
	cmplwi   r29, 0
	bne      lbl_800A1188
	lbz      r0, 0x366(r31)
	cmplwi   r0, 0
	beq      lbl_800A1244
	cmplwi   r31, 0
	beq      lbl_800A1244
	lwz      r29, 0(r31)
	b        lbl_800A1204

lbl_800A11D8:
	lwz      r3, 0(r29)
	li       r4, 0
	lwz      r30, 0xc(r3)
	bl       release__10JASChannelFUs
	lwz      r3, 0(r29)
	bl       free__10JASChannelFv
	lwz      r4, 0(r29)
	mr       r3, r31
	lwz      r4, 0(r4)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r29, r30

lbl_800A1204:
	cmplwi   r29, 0
	bne      lbl_800A11D8
	cmplwi   r31, 0
	beq      lbl_800A1220
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800A1220:
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r3, sFreeListEnd__8JASTrack@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800A123C
	stw      r31, 0(r3)
	b        lbl_800A1240

lbl_800A123C:
	stw      r31, sFreeList__8JASTrack@sda21(r13)

lbl_800A1240:
	stw      r31, sFreeListEnd__8JASTrack@sda21(r13)

lbl_800A1244:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800A1264
 * @note Size: 0x80
 */
void JASTrack::setNoteMask(u8 noteMask)
{
	mNoteMask = noteMask;

	for (u8 i = 0; i < 8; i++) {
		if (noteMask & 1 << i) {
			noteOff(i, 10);
		}
	}
}

/**
 * @note Address: 0x800A12E4
 * @note Size: 0x234
 */
void JASTrack::muteTrack(bool doMute)
{
	mIsMuted = doMute;
	mUpdateFlags |= OUTERPARAM_Volume;

	if (mIsMuted && mPauseStatus & 0x20) {
		for (u8 i = 0; i < 8; i++) {
			noteOff(i, 10);
		}
	}

	for (int i = 0; i < 16; i++) {
		JASTrack* track = mChildList[i];
		if (track) {
			track->muteTrack(doMute);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void JASTrack::muteChildTracks(u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A1518
 * @note Size: 0x44
 */
bool JASTrack::start(void* file, u32 offset)
{
	mSeqCtrl.start(file, offset);
	_35B = 1;
	updateTrackAll();
	return false;
}

/**
 * @note Address: 0x800A155C
 * @note Size: 0x1DC
 */
JASTrack* JASTrack::openChild(u8 p1, u8 p2)
{
	if (mChildList[p1]) {
		mChildList[p1]->close();
		mChildList[p1] = nullptr;
	}

	// what is UP with these sFreeList things????
	JASTrack* newTrack = sFreeList;
	if (newTrack == nullptr) {
		newTrack = nullptr;
	} else {
	}

	newTrack->init();
	newTrack->_366         = 1;
	newTrack->mParentTrack = this;
	newTrack->_357         = p2;
	newTrack->_348         = (((_348 << 4) | (p1 & 0xFF)) & ~0xF0000000) | ((_348 & 0xF0000000) + 0x10000000);
	mChildList[p1]         = newTrack;
	newTrack->inherit();
	return newTrack;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm   r0, r4, 2, 0x16, 0x1d
	stmw     r27, 0xc(r1)
	mr       r27, r3
	add      r30, r27, r0
	mr       r28, r4
	mr       r29, r5
	lwz      r3, 0x2fc(r30)
	cmplwi   r3, 0
	beq      lbl_800A1598
	bl       close__8JASTrackFv
	li       r0, 0
	stw      r0, 0x2fc(r30)

lbl_800A1598:
	lwz      r31, sFreeList__8JASTrack@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_800A15AC
	li       r31, 0
	b        lbl_800A15C4

lbl_800A15AC:
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	stw      r0, sFreeList__8JASTrack@sda21(r13)
	bne      lbl_800A15C4
	li       r0, 0
	stw      r0, sFreeListEnd__8JASTrack@sda21(r13)

lbl_800A15C4:
	cmplwi   r31, 0
	beq      lbl_800A15D8
	mr       r3, r31
	bl       __ct__8JASTrackFv
	mr       r31, r3

lbl_800A15D8:
	cmplwi   r31, 0
	bne      lbl_800A15E8
	li       r3, 0
	b        lbl_800A1724

lbl_800A15E8:
	mr       r3, r31
	bl       init__8JASTrackFv
	li       r3, 1
	clrlwi   r0, r28, 0x18
	stb      r3, 0x366(r31)
	stw      r27, 0x2f8(r31)
	stb      r29, 0x357(r31)
	lwz      r4, 0x348(r27)
	slwi     r3, r4, 4
	rlwinm   r4, r4, 0, 0, 3
	or       r0, r3, r0
	addis    r3, r4, 0x1000
	clrlwi   r0, r0, 4
	or       r0, r3, r0
	stw      r0, 0x348(r31)
	stw      r31, 0x2fc(r30)
	lwz      r3, 0x2f8(r31)
	cmplwi   r3, 0
	beq      lbl_800A1720
	lhz      r3, 0x352(r3)
	li       r0, 0
	sth      r3, 0x352(r31)
	stb      r0, 0x365(r31)
	lwz      r3, 0x2f8(r31)
	lfs      f0, 0x344(r3)
	stfs     f0, 0x344(r31)
	lwz      r3, 0x2f8(r31)
	lhz      r0, 0x354(r3)
	sth      r0, 0x354(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x364(r3)
	stb      r0, 0x364(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x362(r3)
	stb      r0, 0x362(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x358(r3)
	stb      r0, 0x358(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x359(r3)
	stb      r0, 0x359(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x363(r3)
	stb      r0, 0x363(r31)
	lbz      r0, 0x357(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_800A1720
	lwz      r4, 0x2f8(r31)
	addi     r3, r31, 0x268
	addi     r4, r4, 0x268
	bl       inherit__16JASRegisterParamFRC16JASRegisterParam
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35c(r3)
	stb      r0, 0x35c(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35f(r3)
	stb      r0, 0x35f(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x13e(r3)
	stb      r0, 0x13e(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35d(r3)
	stb      r0, 0x35d(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x360(r3)
	stb      r0, 0x360(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x13f(r3)
	stb      r0, 0x13f(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35e(r3)
	stb      r0, 0x35e(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x361(r3)
	stb      r0, 0x361(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x140(r3)
	stb      r0, 0x140(r31)

lbl_800A1720:
	mr       r3, r31

lbl_800A1724:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
void JASTrack::loadTbl(u32, u32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A1738
 * @note Size: 0x40
 */
u32 JASTrack::exchangeRegisterValue(u8 val)
{
	if (val < 64) {
		return readReg32(val);
	}

	u8 calc = val - 64;
	return mTrackPort.mValue[calc];
}

/**
 * @note Address: 0x800A1778
 * @note Size: 0x94
 */
u32 JASTrack::readReg32(u8 reg)
{
	u32 result;
	switch (reg) {
	case JASREG_Unk40:
	case JASREG_Unk41:
	case JASREG_Unk42:
	case JASREG_Unk43:
		result = mRegisterParam._20[reg - 0x28];
		break;

	case JASREG_Unk35:
		// screaming crying throwing up
		result = readReg16(JASREG_Unk4) << 16;
		result |= readReg16(JASREG_Unk5);
		break;

	default:
		result = readReg16(reg);
		break;
	}

	return result;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 0x28
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bge      lbl_800A17A8
	cmpwi    r0, 0x23
	beq      lbl_800A17C0
	b        lbl_800A17E4

lbl_800A17A8:
	cmpwi    r0, 0x2c
	bge      lbl_800A17E4
	slwi     r0, r0, 2
	add      r3, r30, r0
	lwz      r31, 0x1e8(r3)
	b        lbl_800A17F0

lbl_800A17C0:
	li       r4, 4
	bl       readReg16__8JASTrackFUc
	slwi     r31, r3, 0x10
	li       r4, 5
	mr       r3, r30
	bl       readReg16__8JASTrackFUc
	clrlwi   r0, r3, 0x10
	or       r31, r31, r0
	b        lbl_800A17F0

lbl_800A17E4:
	mr       r3, r30
	bl       readReg16__8JASTrackFUc
	clrlwi   r31, r3, 0x10

lbl_800A17F0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800A180C
 * @note Size: 0x218
 */
u16 JASTrack::readReg16(u8 reg)
{
	u16 result;
	switch (reg) {
	case JASREG_BankNumber:
		result = mRegisterParam.getBankNumber();
		break;
	case JASREG_ProgramNumber:
		result = mRegisterParam.getProgramNumber();
		break;
	case JASREG_Unk34:
		result = readReg16(JASREG_Unk0) << 8;
		result |= readReg16(JASREG_Unk1);
		break;
	case JASREG_Unk44:
		result = 0;
		for (int i = 15; i >= 0; i--) {
			result <<= 1;
			if (mChildList[i] && mChildList[i]->_35B) {
				result |= 1;
			}
		}
		break;
	case JASREG_Unk45:
		result = 0;
		for (int i = 7; i >= 0; i--) {
			result <<= 1;
			u8 val;
			if (!mChannels[i]) {
				val = 1;
			} else if (mChannels[i]->mStatus == 0) {
				val = 1;
			} else {
				val = 0;
			}
			result |= val;
		}
		break;
	case JASREG_SeqLoopTimer:
		result = (mSeqCtrl.mLoopIndex == 0) ? 0 : mSeqCtrl.mLoopTimers[mSeqCtrl.mLoopIndex - 1];
		break;

	default:
		result = mRegisterParam._00[reg];
		break;
	}

	return result;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r5, r4, 0x18
	stw      r0, 0x14(r1)
	addi     r0, r5, -32
	cmplwi   r0, 0x10
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bgt      lbl_800A19FC
	lis      r5, lbl_804A4350@ha
	slwi     r0, r0, 2
	addi     r5, r5, lbl_804A4350@l
	lwzx     r0, r5, r0
	mtctr    r0
	bctr
	.global  lbl_800A184C

lbl_800A184C:
	addi     r3, r30, 0x268
	bl       getBankNumber__16JASRegisterParamCFv
	clrlwi   r31, r3, 0x18
	b        lbl_800A1A08
	.global  lbl_800A185C

lbl_800A185C:
	addi     r3, r30, 0x268
	bl       getProgramNumber__16JASRegisterParamCFv
	clrlwi   r31, r3, 0x18
	b        lbl_800A1A08
	.global  lbl_800A186C

lbl_800A186C:
	li       r4, 0
	bl       readReg16__8JASTrackFUc
	rlwinm   r31, r3, 8, 0x10, 0x17
	mr       r3, r30
	li       r4, 1
	bl       readReg16__8JASTrackFUc
	or       r31, r31, r3
	b        lbl_800A1A08
	.global  lbl_800A188C

lbl_800A188C:
	li       r0, 4
	addi     r3, r30, 0x3c
	li       r31, 0
	li       r5, 0xf
	mtctr    r0

lbl_800A18A0:
	lwz      r4, 0x2fc(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A18C4
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A18C4
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A18C4:
	lwz      r4, 0x2f8(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A18E8
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A18E8
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A18E8:
	lwz      r4, 0x2f4(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A190C
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A190C
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A190C:
	lwz      r4, 0x2f0(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A1930
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A1930
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A1930:
	addi     r3, r3, -16
	addi     r5, r5, -3
	bdnz     lbl_800A18A0
	b        lbl_800A1A08
	.global  lbl_800A1940

lbl_800A1940:
	li       r0, 4
	addi     r4, r30, 0x1c
	li       r31, 0
	li       r5, 7
	mtctr    r0

lbl_800A1954:
	lwz      r3, 0xc0(r4)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r3, 0
	bne      lbl_800A196C
	li       r0, 1
	b        lbl_800A1984

lbl_800A196C:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_800A1980
	li       r0, 1
	b        lbl_800A1984

lbl_800A1980:
	li       r0, 0

lbl_800A1984:
	lwz      r3, 0xbc(r4)
	clrlwi   r0, r0, 0x18
	or       r31, r31, r0
	cmplwi   r3, 0
	rlwinm   r31, r31, 1, 0x10, 0x1e
	bne      lbl_800A19A4
	li       r0, 1
	b        lbl_800A19BC

lbl_800A19A4:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_800A19B8
	li       r0, 1
	b        lbl_800A19BC

lbl_800A19B8:
	li       r0, 0

lbl_800A19BC:
	clrlwi   r0, r0, 0x18
	addi     r5, r5, -1
	or       r31, r31, r0
	addi     r4, r4, -8
	bdnz     lbl_800A1954
	b        lbl_800A1A08
	.global  lbl_800A19D4

lbl_800A19D4:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_800A19E8
	li       r0, 0
	b        lbl_800A19F4

lbl_800A19E8:
	slwi     r0, r0, 1
	add      r3, r30, r0
	lhz      r0, 0x3a(r3)

lbl_800A19F4:
	mr       r31, r0
	b        lbl_800A1A08
	.global  lbl_800A19FC

lbl_800A19FC:
	rlwinm   r0, r4, 1, 0x17, 0x1e
	add      r3, r30, r0
	lhz      r31, 0x268(r3)

lbl_800A1A08:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800A1A24
 * @note Size: 0xD0
 */
#pragma dont_inline on
void JASTrack::writeRegDirect(u8 reg, u16 value)
{
	u16 newVal;
	switch (reg) {
	case JASREG_Unk0:
	case JASREG_Unk1:
	case JASREG_Unk2:
		u8 val3 = value & 0xFF;
		value   = val3;
		newVal  = JASPlayer::extend8to16(val3);
		break;
		return;

	case JASREG_BankNumber:
	case JASREG_ProgramNumber:
		return;

	case JASREG_Unk34:
		u8 val31              = value >> 8;
		u16 val30             = value & 0xFFFF;
		s16 extend            = JASPlayer::extend8to16(val31);
		mRegisterParam._00[0] = val31;
		mRegisterParam._00[3] = extend;
		reg                   = 1;
		newVal                = value;
		value                 = val30 & 0xFF;
		break;

	default:
		newVal = value;
		break;
	}

	mRegisterParam._00[reg] = value;
	mRegisterParam._00[3]   = newVal;
}
#pragma dont_inline reset

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASRegisterParam::setFlag(u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JSULoByte(u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A1AF4
 * @note Size: 0x5B0
 */
void JASTrack::writeRegParam(u8 p1)
{
	u32 val28;
	u32 val27;
	u32 val26;
	u32 val25;
	u32 val24;
	s16 val23;

	u8 val = p1 & 0xFF;
	switch (p1 & 0xF) {
	case 11:
		val27 = 0;
		val26 = 11;
		break;
	case 10: {
		u8 currByte = *mSeqCtrl.mCurrentFilePtr++;
		val26       = 10;
		val27       = currByte & 0xC;
		val25       = (currByte >> 4) + 4;
	} break;
	case 9: {
		u8 currByte = *mSeqCtrl.mCurrentFilePtr++;
		val27       = currByte & 0xC;
		val26       = currByte & 0xF0;
		if (val27 == 8) {
			val27 = 16;
		}
	} break;
	default:
		val27 = val & 0xC;
		val26 = val & 3;
		break;
	}

	u8 nextByte = *mSeqCtrl.mCurrentFilePtr++;

	if (val26 == 10) {
		u8 nextNextByte = *mSeqCtrl.mCurrentFilePtr++;
		val24           = readReg32(nextNextByte);
	}

	switch (val27) {
	case 0:
		val23 = readReg16(*mSeqCtrl.mCurrentFilePtr++);
		break;
	case 4:
		val23 = *mSeqCtrl.mCurrentFilePtr++;
		break;
	case 12:
		val23 = mSeqCtrl.read16();
		break;
	case 8:
		u32 byte = *mSeqCtrl.mCurrentFilePtr++;
		if (byte & 0x80) {
			val23 = byte << 8;
		} else {
			val23 = (byte << 8) | (byte << 1);
		}
		break;
	case 10:
		val23 = -1;
		break;
	}

	s16 regVal = readReg16(nextByte);

	switch (val26) {
	case 0:
		break;
	case 0x1:
		if (val27 == 4) {
			val23 = JASPlayer::extend8to16(val23);
		}
		val23 += regVal;
		break;
	case 0x2:
		regVal = regVal * (s16)val23;
		writeRegDirect(4, regVal >> 16);
		writeRegDirect(5, regVal & 0xFFFF);
		return;
	case 0x3:
		mRegisterParam._00[3] = regVal - val23;
		return;
	case 0xB:
		val23 = regVal - val23;
		break;
	case 0x10:
		if (val27 == 4) {
			val23 = JASPlayer::extend8to16(val23);
		}
		if (val23 < 0) {
			val23 = regVal >> -val23;
		} else {
			val23 = regVal << val23;
		}
		break;
	case 0x20:
		if (val27 == 4) {
			val23 = JASPlayer::extend8to16(val23);
		}
		if (val23 < 0) {
			val23 = regVal >> -val23;
		} else {
			val23 = regVal << val23;
		}
		break;
	case 0x30:
		val23 &= regVal;
		break;
	case 0x40:
		val23 |= regVal;
		break;
	case 0x50:
		val23 ^= regVal;
		break;
	case 0x60:
		val23 = -regVal;
		break;
	case 0x90: {
		val28 = JASPlayer::getRandomS32();
		val23 = val28 % (u16)val23;
	} break;
	case 0xA:
		// this is probably an inline/some stripped function above
		u32 interVal;
		u32 new23 = val23;
		switch (val25) {
		case 4:
			interVal = mSeqCtrl.mRawFilePtr[val24 + new23];
			break;
		case 5:
			interVal = mSeqCtrl.get16(val24 + (new23 << 1));
			break;
		case 6:
			interVal = mSeqCtrl.get24(val24 + val23 + (new23 << 1));
			break;
		case 7:
			interVal = mSeqCtrl.get32(val24 + (new23 << 2));
			break;
		case 8:
			interVal = mSeqCtrl.get32(val24 + new23);
			break;
		}
		val23 = (u16)interVal;
		break;
	}

	u16 val29;
	switch (nextByte) {
	case 0:
	case 1:
	case 2:
		u8 val3 = val23 & 0xFF;
		val23   = val3;
		val29   = JASPlayer::extend8to16(val3);
		break;
	case 0x21:
		u8 bankNo = mRegisterParam.getBankNumber();
		nextByte  = 6;
		val23     = (bankNo << 8) | val23 & 0xFF;
		break;
	case 0x20:
		u8 progNo = mRegisterParam.getProgramNumber();
		nextByte  = 6;
		val23     = (progNo & 0xFFFF) | (val23 << 8);
		break;
	case 0x2E:
		nextByte = 13;
		val23    = (mRegisterParam._1A & 0xFF00) | (val23 & 0xFF);
		break;
	case 0x2F:
		nextByte = 13;
		val23    = (val23 << 8) | (mRegisterParam._1A & 0xFF);
		break;
	case 0x22:
		int temp = val23;
		writeRegDirect(0, temp >> 8);
		nextByte = 1;
		val23    = temp & 0xFF;
		val29    = temp & 0xFF;
		break;
	case 0x28:
	case 0x29:
	case 0x2A:
	case 0x2B:
		mRegisterParam._20[nextByte - 0x28] = val28;
		break;
	default:
		val29 = val23;
		break;
	}

	mRegisterParam._00[nextByte] = val23;
	mRegisterParam._00[3]        = val29;

	switch (nextByte) {
	case 6:
		mOscRoute[0] = 0xF;
		mOscRoute[1] = 0xF;
		break;
	case 7:
		mUpdateFlags |= OUTERPARAM_Pitch;
		break;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	clrlwi   r0, r4, 0x1c
	cmpwi    r0, 0xa
	stmw     r22, 8(r1)
	mr       r31, r3
	clrlwi   r3, r4, 0x18
	beq      lbl_800A1B3C
	bge      lbl_800A1B28
	cmpwi    r0, 9
	bge      lbl_800A1B60
	b        lbl_800A1B88

lbl_800A1B28:
	cmpwi    r0, 0xc
	bge      lbl_800A1B88
	li       r27, 0
	li       r26, 0xb
	b        lbl_800A1B90

lbl_800A1B3C:
	lwz      r3, 0x10(r31)
	li       r26, 0xa
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r0, 0(r3)
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	rlwinm   r27, r0, 0, 0x1c, 0x1d
	addi     r25, r3, 4
	b        lbl_800A1B90

lbl_800A1B60:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r0, 0(r3)
	rlwinm   r27, r0, 0, 0x1c, 0x1d
	rlwinm   r26, r0, 0, 0x18, 0x1b
	cmplwi   r27, 8
	bne      lbl_800A1B90
	li       r27, 0x10
	b        lbl_800A1B90

lbl_800A1B88:
	rlwinm   r27, r3, 0, 0x1c, 0x1d
	clrlwi   r26, r3, 0x1e

lbl_800A1B90:
	lwz      r3, 0x10(r31)
	cmplwi   r26, 0xa
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r30, 0(r3)
	bne      lbl_800A1C1C
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r4, 0(r3)
	cmpwi    r4, 0x28
	bge      lbl_800A1BCC
	cmpwi    r4, 0x23
	beq      lbl_800A1BE4
	b        lbl_800A1C0C

lbl_800A1BCC:
	cmpwi    r4, 0x2c
	bge      lbl_800A1C0C
	slwi     r0, r4, 2
	add      r3, r31, r0
	lwz      r22, 0x1e8(r3)
	b        lbl_800A1C18

lbl_800A1BE4:
	mr       r3, r31
	li       r4, 4
	bl       readReg16__8JASTrackFUc
	slwi     r22, r3, 0x10
	li       r4, 5
	mr       r3, r31
	bl       readReg16__8JASTrackFUc
	clrlwi   r0, r3, 0x10
	or       r22, r22, r0
	b        lbl_800A1C18

lbl_800A1C0C:
	mr       r3, r31
	bl       readReg16__8JASTrackFUc
	clrlwi   r22, r3, 0x10

lbl_800A1C18:
	mr       r24, r22

lbl_800A1C1C:
	cmplwi   r27, 0x10
	bgt      lbl_800A1CBC
	lis      r3, lbl_804A4394@ha
	slwi     r0, r27, 2
	addi     r3, r3, lbl_804A4394@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800A1C3C

lbl_800A1C3C:
	lwz      r4, 0x10(r31)
	mr       r3, r31
	addi     r0, r4, 1
	stw      r0, 0x10(r31)
	lbz      r4, 0(r4)
	bl       readReg16__8JASTrackFUc
	extsh    r23, r3
	b        lbl_800A1CBC
	.global  lbl_800A1C5C

lbl_800A1C5C:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r23, 0(r3)
	b        lbl_800A1CBC
	.global  lbl_800A1C70

lbl_800A1C70:
	addi     r3, r31, 0xc
	bl       read16__10JASSeqCtrlFv
	extsh    r23, r3
	b        lbl_800A1CBC
	.global  lbl_800A1C80

lbl_800A1C80:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r4, 0(r3)
	rlwinm.  r0, r4, 0, 0x18, 0x18
	beq      lbl_800A1CA4
	slwi     r0, r4, 8
	extsh    r23, r0
	b        lbl_800A1CBC

lbl_800A1CA4:
	slwi     r3, r4, 8
	slwi     r0, r4, 1
	or       r0, r3, r0
	extsh    r23, r0
	b        lbl_800A1CBC
	.global  lbl_800A1CB8

lbl_800A1CB8:
	li       r23, -1
	.global  lbl_800A1CBC

lbl_800A1CBC:
	mr       r3, r31
	mr       r4, r30
	bl       readReg16__8JASTrackFUc
	cmpwi    r26, 0x20
	extsh    r22, r3
	beq      lbl_800A1E08
	bge      lbl_800A1D24
	cmpwi    r26, 0xa
	beq      lbl_800A1E8C
	bge      lbl_800A1D0C
	cmpwi    r26, 2
	beq      lbl_800A1D7C
	bge      lbl_800A1D00
	cmpwi    r26, 0
	beq      lbl_800A1F30
	bge      lbl_800A1D60
	b        lbl_800A1F30

lbl_800A1D00:
	cmpwi    r26, 4
	bge      lbl_800A1F30
	b        lbl_800A1DA8

lbl_800A1D0C:
	cmpwi    r26, 0x10
	beq      lbl_800A1DC0
	bge      lbl_800A1F30
	cmpwi    r26, 0xc
	bge      lbl_800A1F30
	b        lbl_800A1DB4

lbl_800A1D24:
	cmpwi    r26, 0x50
	beq      lbl_800A1E58
	bge      lbl_800A1D48
	cmpwi    r26, 0x40
	beq      lbl_800A1E50
	bge      lbl_800A1F30
	cmpwi    r26, 0x30
	beq      lbl_800A1E48
	b        lbl_800A1F30

lbl_800A1D48:
	cmpwi    r26, 0x90
	beq      lbl_800A1E6C
	bge      lbl_800A1F30
	cmpwi    r26, 0x60
	beq      lbl_800A1E60
	b        lbl_800A1F30

lbl_800A1D60:
	cmplwi   r27, 4
	bne      lbl_800A1D74
	clrlwi   r3, r23, 0x18
	bl       extend8to16__9JASPlayerFUc
	mr       r23, r3

lbl_800A1D74:
	add      r23, r23, r22
	b        lbl_800A1F30

lbl_800A1D7C:
	extsh    r0, r23
	mr       r3, r31
	mullw    r22, r22, r0
	li       r4, 4
	srwi     r5, r22, 0x10
	bl       writeRegDirect__8JASTrackFUcUs
	clrlwi   r5, r22, 0x10
	mr       r3, r31
	li       r4, 5
	bl       writeRegDirect__8JASTrackFUcUs
	b        lbl_800A2090

lbl_800A1DA8:
	subf     r0, r23, r22
	sth      r0, 0x26e(r31)
	b        lbl_800A2090

lbl_800A1DB4:
	subf     r0, r23, r22
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1DC0:
	cmplwi   r27, 4
	bne      lbl_800A1DD4
	clrlwi   r3, r23, 0x18
	bl       extend8to16__9JASPlayerFUc
	mr       r23, r3

lbl_800A1DD4:
	extsh.   r0, r23
	bge      lbl_800A1DF4
	extsh    r0, r23
	clrlwi   r3, r22, 0x10
	neg      r0, r0
	sraw     r0, r3, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1DF4:
	clrlwi   r3, r22, 0x10
	extsh    r0, r23
	slw      r0, r3, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E08:
	cmplwi   r27, 4
	bne      lbl_800A1E1C
	clrlwi   r3, r23, 0x18
	bl       extend8to16__9JASPlayerFUc
	mr       r23, r3

lbl_800A1E1C:
	extsh.   r0, r23
	bge      lbl_800A1E38
	extsh    r0, r23
	neg      r0, r0
	sraw     r0, r22, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E38:
	extsh    r0, r23
	slw      r0, r22, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E48:
	and      r23, r23, r22
	b        lbl_800A1F30

lbl_800A1E50:
	or       r23, r23, r22
	b        lbl_800A1F30

lbl_800A1E58:
	xor      r23, r23, r22
	b        lbl_800A1F30

lbl_800A1E60:
	neg      r0, r22
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E6C:
	bl       getRandomS32__9JASPlayerFv
	clrlwi   r4, r23, 0x10
	mr       r28, r3
	divwu    r0, r28, r4
	mullw    r0, r0, r4
	subf     r0, r0, r28
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E8C:
	cmpwi    r25, 6
	extsh    r4, r23
	beq      lbl_800A1EE4
	bge      lbl_800A1EAC
	cmpwi    r25, 4
	beq      lbl_800A1EBC
	bge      lbl_800A1ECC
	b        lbl_800A1F28

lbl_800A1EAC:
	cmpwi    r25, 8
	beq      lbl_800A1F18
	bge      lbl_800A1F28
	b        lbl_800A1F00

lbl_800A1EBC:
	lwz      r3, 0xc(r31)
	add      r0, r24, r4
	lbzx     r28, r3, r0
	b        lbl_800A1F28

lbl_800A1ECC:
	slwi     r0, r4, 1
	addi     r3, r31, 0xc
	add      r4, r24, r0
	bl       get16__10JASSeqCtrlCFUl
	clrlwi   r28, r3, 0x10
	b        lbl_800A1F28

lbl_800A1EE4:
	slwi     r0, r4, 1
	addi     r3, r31, 0xc
	add      r4, r4, r0
	add      r4, r24, r4
	bl       get24__10JASSeqCtrlCFUl
	mr       r28, r3
	b        lbl_800A1F28

lbl_800A1F00:
	slwi     r0, r4, 2
	addi     r3, r31, 0xc
	add      r4, r24, r0
	bl       get32__10JASSeqCtrlCFUl
	mr       r28, r3
	b        lbl_800A1F28

lbl_800A1F18:
	addi     r3, r31, 0xc
	add      r4, r24, r4
	bl       get32__10JASSeqCtrlCFUl
	mr       r28, r3

lbl_800A1F28:
	clrlwi   r0, r28, 0x10
	extsh    r23, r0

lbl_800A1F30:
	cmpwi    r30, 0x22
	beq      lbl_800A2008
	bge      lbl_800A1F5C
	cmpwi    r30, 0x20
	beq      lbl_800A1FB8
	bge      lbl_800A1F9C
	cmpwi    r30, 3
	bge      lbl_800A2044
	cmpwi    r30, 0
	bge      lbl_800A1F88
	b        lbl_800A2044

lbl_800A1F5C:
	cmpwi    r30, 0x2e
	beq      lbl_800A1FD8
	bge      lbl_800A1F7C
	cmpwi    r30, 0x2c
	bge      lbl_800A2044
	cmpwi    r30, 0x28
	bge      lbl_800A2034
	b        lbl_800A2044

lbl_800A1F7C:
	cmpwi    r30, 0x30
	bge      lbl_800A2044
	b        lbl_800A1FF0

lbl_800A1F88:
	clrlwi   r3, r23, 0x18
	mr       r23, r3
	bl       extend8to16__9JASPlayerFUc
	clrlwi   r29, r3, 0x10
	b        lbl_800A2048

lbl_800A1F9C:
	addi     r3, r31, 0x268
	bl       getBankNumber__16JASRegisterParamCFv
	clrlwi   r0, r23, 0x18
	li       r30, 6
	rlwimi   r0, r3, 8, 0x10, 0x17
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A1FB8:
	addi     r3, r31, 0x268
	bl       getProgramNumber__16JASRegisterParamCFv
	extsh    r0, r23
	li       r30, 6
	slwi     r0, r0, 8
	rlwimi   r0, r3, 0, 0x18, 0x1f
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A1FD8:
	lhz      r3, 0x282(r31)
	clrlwi   r0, r23, 0x18
	li       r30, 0xd
	rlwimi   r0, r3, 0, 0x10, 0x17
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A1FF0:
	lhz      r0, 0x282(r31)
	extsh    r3, r23
	rlwimi   r0, r3, 8, 0, 0x17
	li       r30, 0xd
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A2008:
	extsh    r22, r23
	mr       r3, r31
	srawi    r0, r22, 8
	li       r4, 0
	clrlwi   r5, r0, 0x10
	bl       writeRegDirect__8JASTrackFUcUs
	clrlwi   r0, r22, 0x18
	li       r30, 1
	mr       r23, r0
	mr       r29, r0
	b        lbl_800A2048

lbl_800A2034:
	slwi     r0, r30, 2
	add      r3, r31, r0
	stw      r28, 0x1e8(r3)
	b        lbl_800A2090

lbl_800A2044:
	clrlwi   r29, r23, 0x10

lbl_800A2048:
	rlwinm   r0, r30, 1, 0x17, 0x1e
	clrlwi   r4, r30, 0x18
	add      r3, r31, r0
	sth      r23, 0x268(r3)
	cmpwi    r4, 7
	sth      r29, 0x26e(r31)
	beq      lbl_800A2084
	bge      lbl_800A2090
	cmpwi    r4, 6
	bge      lbl_800A2074
	b        lbl_800A2090

lbl_800A2074:
	li       r0, 0xf
	stw      r0, 0x2d8(r31)
	stw      r0, 0x2dc(r31)
	b        lbl_800A2090

lbl_800A2084:
	lwz      r0, 0x34c(r31)
	ori      r0, r0, 2
	stw      r0, 0x34c(r31)

lbl_800A2090:
	lmw      r22, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800A20A4
 * @note Size: 0x24
 */
u16 JASTrack::readSelfPort(int portNo) { return mTrackPort.readImport(portNo); }

/**
 * @note Address: 0x800A20C8
 * @note Size: 0x24
 */
void JASTrack::writeSelfPort(int portNo, u16 value) { mTrackPort.writeExport(portNo, value); }

/**
 * @note Address: 0x800A20EC
 * @note Size: 0x68
 */
bool JASTrack::writePortAppDirect(u32 portNo, u16 value)
{
	mTrackPort.writeImport(portNo, value);
	if (portNo == 0 || portNo == 1) {
		JASIntrMgr* intrMgr = &mIntrMgr;
		u32 v1              = 4;
		if (portNo == 0) {
			v1 = 3;
		}
		intrMgr->request(v1);
	}
	return true;
}

/**
 * @note Address: 0x800A2154
 * @note Size: 0x38
 */
bool JASTrack::readPortAppDirect(u32 portNo, u16* outValue)
{
	*outValue = mTrackPort.readExport(portNo);
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
JASTrack* JASTrack::routeTrack(u32 route)
{
	u32 idx = route;
	for (u32 i = 0; i < (route >> 28); i++) {
		JASTrack* outTrack = mChildList[idx & 0xF];
		if (!outTrack) {
			return nullptr;
		}

		idx >>= 4;
	}

	return this;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void JASTrack::routeTrack(u32) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A218C
 * @note Size: 0xB4
 */
bool JASTrack::writePortApp(u32 route, u16 value)
{
	JASTrack* track = routeTrack(route);
	if (!track) {
		return false;
	}

	u32 portNo = (route >> 16) & 0xFF;
	track->writePortAppDirect(portNo, value);

	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r4
	stw      r0, 0x14(r1)
	srwi     r0, r4, 0x1c
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_800A21D8

lbl_800A21B4:
	rlwinm   r6, r7, 2, 0x1a, 0x1d
	addi     r0, r6, 0x2fc
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	bne      lbl_800A21D0
	li       r31, 0
	b        lbl_800A21DC

lbl_800A21D0:
	srwi     r7, r7, 4
	bdnz     lbl_800A21B4

lbl_800A21D8:
	mr       r31, r3

lbl_800A21DC:
	cmplwi   r31, 0
	bne      lbl_800A21EC
	li       r3, 0
	b        lbl_800A2228

lbl_800A21EC:
	rlwinm   r30, r4, 0x10, 0x18, 0x1f
	addi     r3, r31, 0x54
	mr       r4, r30
	bl       writeImport__12JASTrackPortFiUs
	cmplwi   r30, 0
	beq      lbl_800A220C
	cmplwi   r30, 1
	bne      lbl_800A2224

lbl_800A220C:
	cmplwi   r30, 0
	addi     r3, r31, 0x94
	li       r4, 4
	bne      lbl_800A2220
	li       r4, 3

lbl_800A2220:
	bl       request__10JASIntrMgrFUl

lbl_800A2224:
	li       r3, 1

lbl_800A2228:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800A2240
 * @note Size: 0x84
 */
bool JASTrack::readPortApp(u32 route, u16* outValue)
{
	JASTrack* track = routeTrack(route);
	if (!track) {
		return false;
	}

	*outValue = track->mTrackPort.readExport((route >> 16) & 0xFF);
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r4
	stw      r0, 0x14(r1)
	srwi     r0, r4, 0x1c
	stw      r31, 0xc(r1)
	mr       r31, r5
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_800A228C

lbl_800A2268:
	rlwinm   r5, r6, 2, 0x1a, 0x1d
	addi     r0, r5, 0x2fc
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	bne      lbl_800A2284
	li       r3, 0
	b        lbl_800A228C

lbl_800A2284:
	srwi     r6, r6, 4
	bdnz     lbl_800A2268

lbl_800A228C:
	cmplwi   r3, 0
	bne      lbl_800A229C
	li       r3, 0
	b        lbl_800A22B0

lbl_800A229C:
	addi     r3, r3, 0x54
	rlwinm   r4, r4, 0x10, 0x18, 0x1f
	bl       readExport__12JASTrackPortFi
	sth      r3, 0(r31)
	li       r3, 1

lbl_800A22B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JASTrack::checkExportApp(u32) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JASTrack::checkImportApp(u32) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A22C4
 * @note Size: 0x168
 */
void JASTrack::pause(bool doPause, bool pauseChildren)
{
	mIsPaused = doPause;
	if (doPause) {

		if (mPauseStatus & 1) {
			mUpdateFlags |= OUTERPARAM_Volume;
		}

		if (mPauseStatus & 4) {
			for (u8 i = 0; i < 8; i++) {
				noteOff(i, 10);
			}
		}

		if (mPauseStatus & 8) {
			for (int i = 0; i < 8; i++) {
				if (mChannels[i])
					mChannels[i]->setPauseFlag(true);
			}
		}

	} else {
		mUpdateFlags |= OUTERPARAM_Volume;
		for (int i = 0; i < 8; i++) {
			if (mChannels[i])
				mChannels[i]->setPauseFlag(false);
		}
	}

	mIntrMgr.request(doPause ? 0 : 1);

	if (pauseChildren) {
		for (int i = 0; i < 16; i++) {
			JASTrack* track = mChildList[i];
			if (track && track->_35B) {
				track->pause(doPause, true);
			}
		}
	}
}

/**
 * @note Address: 0x800A242C
 * @note Size: 0x170
 */
int JASTrack::getTranspose() const
{
	if (mParentTrack) {
		return mTranspose + mParentTrack->getTranspose();
	}
	return mTranspose;
}

/**
 * @note Address: 0x800A259C
 * @note Size: 0x3C
 */
void JASTrack::setTempo(u16 tempo)
{
	mTempo = tempo;
	if (mParentTrack == nullptr) {
		updateTempo();
	} else {
		_365 = 1;
	}
}

/**
 * @note Address: 0x800A25D8
 * @note Size: 0x30
 */
void JASTrack::setTimebase(u16 timebase)
{
	mTimeBase = timebase;
	if (mParentTrack == nullptr) {
		updateTempo();
	}
}

/**
 * @note Address: 0x800A2608
 * @note Size: 0x50
 */
f32 JASTrack::panCalc(f32 valA, f32 valB, f32 weight, u8 calcType)
{
	switch (calcType) {
	case 0:
		return valA;
	case 1:
		return valB;
	case 2:
		return (valA * (1.0f - weight) + (valB * weight));
	}
	return 0.0f;
}

/**
 * @note Address: 0x800A2658
 * @note Size: 0xF4
 */
s32 JASTrack::rootCallback(void* obj)
{
	JASTrack* track = static_cast<JASTrack*>(obj);
	if (track == nullptr) {
		return -1;
	}
	if (track->_35B == 0) {
		return -1;
	}
	if (track->_35B == 3) {
		track->stopSeqMain();
		return -1;
	}
	track->_340 += track->mCurrentTempo;
	DCInvalidateRange(&c32, sizeof(c32));
	if (track->_340 < c32) {
		track->updateSeq(0, true);
	} else {
		while (track->_340 >= c32) {
			DCInvalidateRange(&c32, sizeof(c32));
			track->_340 -= c32;
			if (track->mainProc() == -1) {
				track->stopSeqMain();
				return -1;
			}
		}
	}
	return 0;
}

/**
 * @note Address: 0x800A274C
 * @note Size: 0x8
 */
void JASTrack::registerSeqCallback(JASTrack::SeqCallback cb) { sCallBackFunc = cb; }

/**
 * @note Address: 0x800A2754
 * @note Size: 0xD4
 */
void JASTrack::newMemPool(int id)
{
	JASTrack* track   = (JASTrack*)new (JASDram, 0) u8[sizeof(JASTrack)];
	track->mExtBuffer = new (JASDram, 0) JASOuterParam;
	sFreeList         = track;

	JASTrack** list = reinterpret_cast<JASTrack**>(track);
	for (int i = 1; i < id; i++) {
		list[0]             = (JASTrack*)new (JASDram, 0) u8[sizeof(JASTrack)];
		list[0]->mExtBuffer = new (JASDram, 0) JASOuterParam;
		list                = (JASTrack**)list[0];

		sFreeListEnd = (JASTrack*)list;
	}

	list[0] = nullptr;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x368
	lwz      r4, JASDram@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, JASDram@sda21(r13)
	mr       r31, r3
	li       r3, 0x2c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800A27A4
	bl       __ct__13JASOuterParamFv
	mr       r0, r3

lbl_800A27A4:
	stw      r0, 0x33c(r31)
	li       r30, 1
	stw      r31, sFreeList__8JASTrack@sda21(r13)
	b        lbl_800A27FC

lbl_800A27B4:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x368
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0(r31)
	li       r3, 0x2c
	li       r5, 0
	lwz      r4, JASDram@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800A27E8
	bl       __ct__13JASOuterParamFv
	mr       r0, r3

lbl_800A27E8:
	lwz      r3, 0(r31)
	addi     r30, r30, 1
	stw      r0, 0x33c(r3)
	lwz      r31, 0(r31)
	stw      r31, sFreeListEnd__8JASTrack@sda21(r13)

lbl_800A27FC:
	cmpw     r30, r29
	blt      lbl_800A27B4
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
int JASTrack::getFreeMemCount()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A2828
 * @note Size: 0x30
 */
JASVibrate::JASVibrate() { init(); }

/**
 * @note Address: 0x800A2858
 * @note Size: 0x18
 */
void JASVibrate::init()
{
	mPitch = 0.055555556f;
	mDepth = 0.0f;
	_00    = 0.0f;
}

/**
 * @note Address: 0x800A2870
 * @note Size: 0x34
 */
void JASVibrate::incCounter()
{
	_00 += mPitch;
	if (_00 >= 4.0) { // intentional double
		_00 -= 4.0f;
	}
}

/**
 * @note Address: 0x800A28A4
 * @note Size: 0xA4
 */
f32 JASVibrate::getValue() const
{
	if (mDepth == 0.0f) {
		return 1.0f;
	}

	f32 result = _00 * HALF_PI;
	result     = sinf(result);
	result *= mDepth;
	result = JASPlayer::pitchToCent(result, 12.0f);
	return result;
}

/**
 * @note Address: 0x800A2948
 * @note Size: 0xB0
 */
void JASTrack::channelUpdateCallback(u32 p1, JASChannel* chan, JASDsp::TChannel* dspChan, void* p4)
{
	switch (p1) {
	case 0:
		static_cast<JASTrack*>(p4)->mChannelUpdater.updateChannel(chan, dspChan);
		break;
	case 1:
		static_cast<JASTrack*>(p4)->mChannelUpdater.initialUpdateChannel(chan, dspChan);
		break;
	case 3:
		chan->release(0);
		break;
	case 2:
		JASTrack* track = static_cast<JASTrack*>(p4);
		for (int i = 0; i < 8; i++) {
			if (chan == track->mChannels[i]) {
				track->mChannels[i] = nullptr;
				break;
			}
		}
		track->remove(chan);
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int JASTrack::getChannelCount() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
int JASTrack::getReleaseChannelCount() const
{
	// UNUSED FUNCTION
}
