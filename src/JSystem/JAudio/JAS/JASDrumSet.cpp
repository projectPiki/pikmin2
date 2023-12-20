#include "JSystem/JAudio/JAS/JASDrumSet.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

/**
 * @note Address: 0x8009B0B8
 * @note Size: 0x1FC
 */
bool JASDrumSet::getParam(int percIndex, int p2, JASInstParam* instParam) const
{
	if (percIndex >= 0x80U) {
		return false;
	}
	const TPerc* perc = getPerc(percIndex);
	instParam->_00    = 0;
	instParam->_24    = 1;
	instParam->_10    = perc->_00;
	instParam->_14    = perc->_04;
	instParam->_18    = perc->_08;
	instParam->_26    = perc->mRelease;

	static JASOscillator::Data osc;
	osc._00                          = 0;
	osc._04                          = 1.0f;
	osc._08                          = nullptr;
	osc._0C                          = nullptr;
	osc._10                          = 1.0f;
	osc._14                          = 0.0f;
	static JASOscillator::Data* oscp = &osc;
	instParam->mOscData              = &oscp;
	instParam->mOscCount             = 1;
	for (u32 i = 0; i < perc->mEffectCount; i++) {
		JASInstEffect* effect = perc->mEffects[i];
		if (effect) {
			f32 y = effect->getY(percIndex, p2);
			switch (effect->mTarget) {
			case 0:
				instParam->_10 *= y;
				break;
			case 1:
				instParam->_14 *= y;
				break;
			case 2:
				instParam->_18 += y - 0.5; // double, not float
				break;
			case 3:
				instParam->_1C += y;
				break;
			case 4:
				instParam->_20 += y;
				break;
			}
		}
	}
	for (u32 i = 0; i < perc->mVeloRegionCount; i++) {
		const TVeloRegion* veloRegion = perc->getVeloRegion(i);
		if (p2 <= veloRegion->_00) {
			instParam->_10 *= veloRegion->_08;
			instParam->_14 *= veloRegion->_0C;
			instParam->_04 = veloRegion->_04;
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8009B2B4
 * @note Size: 0x14
 * getPerc__10JASDrumSetFi
 */
JASDrumSet::TPerc* JASDrumSet::getPerc(int index) { return mPercs + index; }

/**
 * @note Address: 0x8009B2C8
 * @note Size: 0x34
 * __ct__Q210JASDrumSet5TPercFv
 */
JASDrumSet::TPerc::TPerc()
    : _00(1.0f)
    , _04(1.0f)
    , _08(0.5f)
    , mRelease(1000)
    , mEffects(nullptr)
    , mEffectCount(0)
    , mVeloRegionCount(0)
    , mVeloRegions(nullptr)
{
}

/**
 * @note Address: 0x8009B2FC
 * @note Size: 0x5C
 * __dt__Q210JASDrumSet5TPercFv
 */
JASDrumSet::TPerc::~TPerc()
{
	delete[] mEffects;
	delete[] mVeloRegions;
}

/**
 * @note Address: 0x8009B358
 * @note Size: 0x78
 */
void JASDrumSet::TPerc::setEffectCount(u32 count)
{
	delete[] mEffects;
	mEffectCount = count;
	if (count == 0) {
		mEffects = nullptr;
	} else {
		mEffects = new (JASBank::getCurrentHeap(), 0) JASInstEffect*[count];
		JASCalc::bzero(mEffects, sizeof(JASInstEffect*) * count);
	}
}

/**
 * @note Address: 0x8009B3D0
 * @note Size: 0x58
 */
void JASDrumSet::TPerc::setVeloRegionCount(u32 count)
{
	delete[] mVeloRegions;
	mVeloRegions     = new (JASBank::getCurrentHeap(), 0) TVeloRegion[count];
	mVeloRegionCount = count;
}

/**
 * @note Address: 0x8009B428
 * @note Size: 0x10
 * getVeloRegion__Q210JASDrumSet5TPercFi
 */
JASInst::TVeloRegion* JASDrumSet::TPerc::getVeloRegion(int index) { return mVeloRegions + index; }

/**
 * @note Address: 0x8009B438
 * @note Size: 0x10
 * setEffect__Q210JASDrumSet5TPercFiP13JASInstEffect
 */
void JASDrumSet::TPerc::setEffect(int index, JASInstEffect* effect) { mEffects[index] = effect; }

/**
 * @note Address: 0x8009B448
 * @note Size: 0x8
 */
void JASDrumSet::TPerc::setRelease(u32 release) { mRelease = release; }
