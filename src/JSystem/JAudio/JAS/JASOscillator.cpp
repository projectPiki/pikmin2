#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JMath.h"

const f32 JASOscillator::relTableSampleCell[17] = { 1.0f,
	                                                0.9704890251159668f,
	                                                0.7812740206718445f,
	                                                0.5462809801101685f,
	                                                0.39979198575019836f,
	                                                0.28931498527526855f,
	                                                0.21210399270057678f,
	                                                0.15747599303722382f,
	                                                0.1126129999756813f,
	                                                0.08178959786891937f,
	                                                0.057985201478004456f,
	                                                0.04364150017499924f,
	                                                0.03082370012998581f,
	                                                0.023712899535894394f,
	                                                0.015259300358593464f,
	                                                0.00915555004030466f,
	                                                0.0f };
const f32 JASOscillator::relTableSqRoot[17]
    = { 1.0f,      0.8789060115814209f,  0.765625f, 0.6601560115814209f, 0.5625f,   0.4726560115814209f,
	    0.390625f, 0.3164060115814209f,  0.25f,     0.1914059966802597f, 0.140625f, 0.09765619784593582f,
	    0.0625f,   0.03515620157122612f, 0.015625f, 0.00390625f,         0.0f };
const f32 JASOscillator::relTableSquare[17] = {
	1.0f,
	0.9682459831237793f,
	0.9354140162467957f,
	0.9013879895210266f,
	0.8660249710083008f,
	0.8291559815406799f,
	0.790569007396698f,
	0.75f,
	0.7071070075035095f,
	0.66143798828125f,
	0.6123719811439514f,
	0.55901700258255f,
	0.5f,
	0.433012992143631f,
	0.35355299711227417f,
	0.25f,
	0.0f,
};

const s16 JASOscillator::oscTableForceStop[6] = { 0, 15, 0, 15, 0, 0 };

/**
 * @note Address: 0x800A2B78
 * @note Size: 0x34
 */
void JASOscillator::init()
{
	mData    = nullptr;
	_1C      = 0;
	_1D      = 0;
	_18      = 0;
	_04      = 0.0f;
	_08      = 0.0f;
	_0C      = 0.0f;
	_10      = 0.0f;
	mRelease = 0;
	_14      = 0.0f;
}

/**
 * @note Address: 0x800A2BAC
 * @note Size: 0x88
 */
void JASOscillator::initStart(const Data* data)
{
	if (!data) {
		_1C = 0;
	} else {
		_1C      = 1;
		mData    = data;
		mRelease = 0;
		if (!mData->mAttack) {
			_08 = 0.0f;
		} else {
			_18 = 0;
			_04 = 0.0f;
			_0C = 0.0f;
			_04 -= mData->mRate;
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
	const s16* v1;
	switch (_1C) {
	case 0:
	case 2:
		return;
	case 1:
		break;
	}
	if (_1C == 3) {
		v1 = mData->mRelease;
	} else if (_1C == 4) {
		v1 = oscTableForceStop;
	} else {
		v1 = mData->mAttack;
	}
	if (v1 == nullptr && _1C != 5) {
		_08 = 1.0f;
	} else {
		if (_1C == 4) {
			_04 -= 1.0f;
		} else {
			_04 -= mData->mRate;
		}
		calc(v1);
	}
}

/**
 * @note Address: 0x800A2CFC
 * @note Size: 0x2C
 */
f32 JASOscillator::getValue() const
{
	if (_1C == 0) {
		return 1.0f;
	}
	return _08 * mData->mWidth + mData->mVertex;
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
	f32 temp_f31;

	if ((u8)_1C == 4) {
		return false;
	}
	mData = mData;
	if ((u32)mData->mAttack != (u32)mData->mRelease) {
		_18 = 0;
		_04 = 0.0f;
		_0C = _08;
	}
	if (((u32)mData->mRelease == 0) && ((u16)mRelease == 0)) {
		mRelease = 0x10;
	}
	if ((u16)mRelease != 0) {
		_1C      = 5;
		_1D      = (u8)((mRelease >> 0xE) & 3);
		temp_f31 = (f32)(mRelease & 0x3FFF);
		temp_f31 *= ((JASDriver::getDacRate() / 80.0f) / 600.0f);
		_04 = temp_f31;
		if (_04 < 1.0f) {
			_04 = 1.0f;
		}
		_14 = (f32)_04;
		_0C = (f32)0.0f;
		if ((u8)_1D == 0) {
			_10 = (f32)((_0C - _08) / _04);
		} else {
			_10 = (f32)(_0C - _08);
		}
	} else {
		_1C = 3;
	}
	return true;
}

/**
 * @note Address: 0x800A2E90
 * @note Size: 0x374
 */
f32 JASOscillator::calc(const s16* p1)
{
	f32 val31 = 0.0f;
	while (_04 <= 0.0f) {
		int idx = _18 * 3;
		_08     = _0C;
		if (_1C == 5) {
			_1C = 0;
			break;
		}

		int val  = p1[idx];
		int val2 = p1[idx + 1];
		int val3 = p1[idx + 2];
		if (val == 13) {
			_18 = val3;
			continue;
		}

		if (val == 15) {
			_1C = 0;
			break;
		}

		if (val == 14) {
			_1C = 2;
			return _08 * mData->mWidth + mData->mVertex;
		}

		_1D = val;

		if ((s16)val2 == 0) {
			_0C = val3 / SHORT_FLOAT_MAX;
			_18++;
			continue;
		}

		_04 = (f32)val2 * ((JASDriver::getDacRate() / 80.0f) / 600.0f);
		_14 = _04;
		_0C = val3 / SHORT_FLOAT_MAX;

		if (_1D == 0) {
			_10 = (_0C - _08) / _04;
		} else {
			_10 = _0C - _08;
		}

		_18++;
	}

	if (mData->mWidth == 0.0f) {
		return mData->mVertex;
	}

	f32 factor;       // f2
	if (_14 == 0.0) { // yes this is a double. someone forgot an f
		factor = _0C;
		_08    = _0C;
	} else {
		if (_1D == 0 || (val31 = _10) == 0.0f) {
			factor = _0C - (_10 * _04);
			_08    = factor;
		} else if (_1D == 3 || _1D == 1 || _1D == 2) {
			const f32* table = nullptr; // r27
			switch (_1D) {
			case 3:
				table = relTableSampleCell;
				break;
			case 1:
				table = relTableSquare;
				break;
			case 2:
				table = relTableSqRoot;
				break;
			}

			f32 val30;

			if (val31 < 0.0f) {
				val30 = 16.0f * (1.0f - (_04 / _14));
			} else {
				val30 = 16.0f * (_04 / _14);
			}

			u32 idx  = val30;
			f32 val4 = val30 - (f32)idx;
			if (idx >= 16) {
				idx  = 15;
				val4 = 1.0f;
			}

			f32 valAbs = JMAAbs(val31 * (val4 * (table[idx + 1] - table[idx]) + table[idx]));

			if (_10 < 0.0f) {
				factor = _0C + valAbs;
			} else {
				factor = _0C - (_10 - valAbs);
			}

			_08 = factor;
		} else {
			factor = _0C - val31 * _04;
			_08    = factor;
		}
	}

	return factor * mData->mWidth + mData->mVertex;
}
