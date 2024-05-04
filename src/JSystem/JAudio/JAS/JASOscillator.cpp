#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JMath.h"

// clang-format off
const f32 JASOscillator::relTableSampleCell[17] 
	= { 1.0f,                 0.9704890251159668f,   0.7812740206718445f,   0.5462809801101685f,
	    0.39979198575019836f, 0.28931498527526855f,  0.21210399270057678f,  0.15747599303722382f,
	    0.1126129999756813f,  0.08178959786891937f,  0.057985201478004456f, 0.04364150017499924f,
	    0.03082370012998581f, 0.023712899535894394f, 0.015259300358593464f, 0.00915555004030466f,
	    0.0f };

const f32 JASOscillator::relTableSqRoot[17]
    = { 1.0f,      0.8789060115814209f,  0.765625f, 0.6601560115814209f, 0.5625f,   0.4726560115814209f,
	    0.390625f, 0.3164060115814209f,  0.25f,     0.1914059966802597f, 0.140625f, 0.09765619784593582f,
	    0.0625f,   0.03515620157122612f, 0.015625f, 0.00390625f,         0.0f };

const f32 JASOscillator::relTableSquare[17] 
	= { 1.0f,               0.9682459831237793f, 0.9354140162467957f,  0.9013879895210266f, 0.8660249710083008f,  0.8291559815406799f, 
	    0.790569007396698f, 0.75f,               0.7071070075035095f,  0.66143798828125f,   0.6123719811439514f,  0.55901700258255f, 
	    0.5f,               0.433012992143631f,  0.35355299711227417f, 0.25f,               0.0f };
// clang-format on

const s16 JASOscillator::oscTableForceStop[6] = { 0, 15, 0, 15, 0, 0 };

/**
 * @note Address: 0x800A2B78
 * @note Size: 0x34
 */
void JASOscillator::init()
{
	mData               = nullptr;
	mState              = STATE_Stop;
	mEnvelopeMode       = ENVMODE_Linear;
	mCurrEnvelopeID     = 0;
	mReleaseRate        = 0.0f;
	mPhase              = 0.0f;
	mTargetPhase        = 0.0f;
	mPhaseChangeRate    = 0.0f;
	mRelease            = 0;
	mInitialReleaseRate = 0.0f;
}

/**
 * @note Address: 0x800A2BAC
 * @note Size: 0x88
 */
void JASOscillator::initStart(const Data* data)
{
	if (!data) {
		mState = STATE_Stop;

	} else {
		mState   = STATE_Start;
		mData    = data;
		mRelease = 0;

		if (!mData->mAttack) {
			mPhase = 0.0f;
		} else {
			mCurrEnvelopeID = 0;
			mReleaseRate    = 0.0f;
			mTargetPhase    = 0.0f;
			mReleaseRate -= mData->mRate;
			incCounter();
		}
	}
}

/**
 * @note Address: 0x800A2C34
 * @note Size: 0xC8
 */
void JASOscillator::incCounter()
{
	const s16* envelopes;
	switch (mState) {
	case STATE_Stop:
	case STATE_Hold:
		return;

	case STATE_Start:
		break;
	}

	if (mState == STATE_Release) {
		envelopes = mData->mRelease;

	} else if (mState == STATE_ForceStop) {
		envelopes = oscTableForceStop;

	} else {
		envelopes = mData->mAttack;
	}

	if (envelopes == nullptr && mState != STATE_Unk5) {
		mPhase = 1.0f;
		return;
	}

	if (mState == STATE_ForceStop) {
		mReleaseRate -= 1.0f;

	} else {
		mReleaseRate -= mData->mRate;
	}

	calc(envelopes);
}

/**
 * @note Address: 0x800A2CFC
 * @note Size: 0x2C
 */
f32 JASOscillator::getValue() const
{
	if (mState == STATE_Stop) {
		return 1.0f;
	}

	return mPhase * mData->mWidth + mData->mVertex;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void JASOscillator::forceStop()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A2D28
 * @note Size: 0x168
 */
bool JASOscillator::release()
{
	if (mState == STATE_ForceStop) {
		return false;
	}

	if (mData->mAttack != mData->mRelease) {
		mCurrEnvelopeID = 0;
		mReleaseRate    = 0.0f;
		mTargetPhase    = mPhase;
	}

	if (!mData->mRelease && mRelease == 0) {
		mRelease = 16;
	}

	if (mRelease != 0) {
		mState        = STATE_Unk5;
		mEnvelopeMode = (mRelease >> 0xE) & 3;
		f32 temp_f31  = (f32)(mRelease & 0x3FFF);
		temp_f31 *= ((JASDriver::getDacRate() / 80.0f) / 600.0f);
		mReleaseRate = temp_f31;
		if (mReleaseRate < 1.0f) {
			mReleaseRate = 1.0f;
		}

		mInitialReleaseRate = mReleaseRate;
		mTargetPhase        = 0.0f;

		if (mEnvelopeMode == ENVMODE_Linear) {
			mPhaseChangeRate = (f32)((mTargetPhase - mPhase) / mReleaseRate);

		} else {
			mPhaseChangeRate = (f32)(mTargetPhase - mPhase);
		}
	} else {
		mState = STATE_Release;
	}
	return true;
}

/**
 * @note Address: 0x800A2E90
 * @note Size: 0x374
 */
f32 JASOscillator::calc(const s16* envelopes)
{
	f32 val31 = 0.0f;
	while (mReleaseRate <= 0.0f) {
		int idx = mCurrEnvelopeID * 3;
		mPhase  = mTargetPhase;
		if (mState == STATE_Unk5) {
			mState = STATE_Stop;
			break;
		}

		int envMode  = envelopes[idx];
		int envTime  = envelopes[idx + 1];
		int envValue = envelopes[idx + 2];

		// if it's a loop vector, value is ID to loop back to
		if (envMode == ENVMODE_Loop) {
			mCurrEnvelopeID = envValue;
			continue;
		}

		if (envMode == ENVMODE_Stop) {
			mState = STATE_Stop;
			break;
		}

		if (envMode == ENVMODE_Hold) {
			mState = STATE_Hold;
			return mPhase * mData->mWidth + mData->mVertex;
		}

		mEnvelopeMode = envMode;

		if ((s16)envTime == 0) {
			mTargetPhase = envValue / SHORT_FLOAT_MAX;
			mCurrEnvelopeID++;
			continue;
		}

		mReleaseRate        = (f32)envTime * ((JASDriver::getDacRate() / 80.0f) / 600.0f);
		mInitialReleaseRate = mReleaseRate;
		mTargetPhase        = envValue / SHORT_FLOAT_MAX;

		if (mEnvelopeMode == ENVMODE_Linear) {
			mPhaseChangeRate = (mTargetPhase - mPhase) / mReleaseRate;

		} else {
			mPhaseChangeRate = mTargetPhase - mPhase;
		}

		mCurrEnvelopeID++;
	}

	if (mData->mWidth == 0.0f) {
		return mData->mVertex;
	}

	f32 newPhase;
	if (mInitialReleaseRate == 0.0) { // yes this is a double. someone forgot an f
		newPhase = mTargetPhase;
		mPhase   = mTargetPhase;

	} else {
		if (mEnvelopeMode == ENVMODE_Linear || (val31 = mPhaseChangeRate) == 0.0f) {
			newPhase = mTargetPhase - (mPhaseChangeRate * mReleaseRate);
			mPhase   = newPhase;

		} else if (mEnvelopeMode == ENVMODE_SampleCell || mEnvelopeMode == ENVMODE_Square || mEnvelopeMode == ENVMODE_SqRoot) {
			const f32* table = nullptr;
			switch (mEnvelopeMode) {
			case ENVMODE_SampleCell:
				table = relTableSampleCell;
				break;
			case ENVMODE_Square:
				table = relTableSquare;
				break;
			case ENVMODE_SqRoot:
				table = relTableSqRoot;
				break;
			}

			f32 fIdx;

			if (val31 < 0.0f) {
				fIdx = 16.0f * (1.0f - (mReleaseRate / mInitialReleaseRate));
			} else {
				fIdx = 16.0f * (mReleaseRate / mInitialReleaseRate);
			}

			u32 idx  = fIdx;
			f32 prop = fIdx - (f32)idx;
			if (idx >= 16) {
				idx  = 15;
				prop = 1.0f;
			}

			f32 valAbs = JMAAbs(val31 * (prop * (table[idx + 1] - table[idx]) + table[idx]));

			if (mPhaseChangeRate < 0.0f) {
				newPhase = mTargetPhase + valAbs;
			} else {
				newPhase = mTargetPhase - (mPhaseChangeRate - valAbs);
			}

			mPhase = newPhase;

		} else {
			newPhase = mTargetPhase - val31 * mReleaseRate;
			mPhase   = newPhase;
		}
	}

	return newPhase * mData->mWidth + mData->mVertex;
}
