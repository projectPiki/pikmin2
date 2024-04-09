#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"

/**
 * @note Address: 0x80099888
 * @note Size: 0x44
 */
JASBasicInst::JASBasicInst()
    : mVolume(1.0f)
    , mPitch(1.0f)
    , mEffects(nullptr)
    , mEffectCount(0)
    , mOscData(nullptr)
    , mOscCount(0)
    , mKeymapCount(0)
    , mKeymap(nullptr)
{
}

/**
 * @note Address: 0x80099914
 * @note Size: 0x8C
 * __dt__12JASBasicInstFv
 */
JASBasicInst::~JASBasicInst()
{
	delete[] mKeymap;
	delete[] mEffects;
	delete[] mOscData;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void JASBasicInst::searchKeymap(int) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800999A0
 * @note Size: 0x1E8
 */
bool JASBasicInst::getParam(int p1, int p2, JASInstParam* param) const
{
	param->mWaveFormat   = 0;
	param->mIsPercussion = false;
	param->mOscData      = mOscData;
	param->mOscCount     = mOscCount;
	param->mVolume       = mVolume; // pitch and volume were swapped initially
	param->mPitch        = mPitch;  // NB: might be an error in xayrs tools
	for (int i = 0; i < mEffectCount; i++) {
		JASInstEffect* effect = mEffects[i];
		if (effect != nullptr) {
			// This pattern exists in JASDrumSet as well...
			f32 y = effect->getY(p1, p2);
			switch (effect->mTarget) {
			case JASINST_Volume:
				param->mVolume *= y;
				break;
			case JASINST_Pitch:
				param->mPitch *= y;
				break;
			case JASINST_Pan:
				param->mPan += y - 0.5; // double is intentional
				break;
			case JASINST_FxMix:
				param->mFxMix += y;
				break;
			case JASINST_Dolby:
				param->mDolby += y;
				break;
			}
		}
	}
	const TKeymap* keymap = nullptr;
	for (int i = 0; i < mKeymapCount; i++) {
		if (p1 <= mKeymap[i].mBaseKey) {
			keymap = &mKeymap[i];
			break;
		}
	}
	if (keymap == nullptr) {
		return false;
	}
	for (int i = 0; i < keymap->mVeloRegionCount; i++) {
		TVeloRegion* veloRegion = keymap->getVeloRegion(i);
		if (p2 <= veloRegion->mVelocity) {
			param->mVolume *= veloRegion->mVolume;
			param->mPitch *= veloRegion->mPitch;
			param->mWaveID = veloRegion->mWaveID;
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x80099B88
 * @note Size: 0x8
 */
int JASBasicInst::getKeymapIndex(int index) const { return index; }

/**
 * @note Address: 0x80099B90
 * @note Size: 0x84
 */
void JASBasicInst::setKeyRegionCount(u32 count)
{
	delete[] mKeymap;
	mKeymap      = new (JASBank::getCurrentHeap(), 0) TKeymap[count];
	mKeymapCount = count;
}

/**
 * @note Address: 0x80099C14
 * @note Size: 0x18
 */
JASBasicInst::TKeymap::TKeymap()
{
	mBaseKey         = -1;
	mVeloRegionCount = 0;
	mVeloRegions     = nullptr;
}

/**
 * @note Address: 0x80099C2C
 * @note Size: 0x78
 */
void JASBasicInst::setEffectCount(u32 count)
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
 * @note Address: 0x80099CA4
 * @note Size: 0x10
 * setEffect__12JASBasicInstFiP13JASInstEffect
 */
void JASBasicInst::setEffect(int index, JASInstEffect* effect) { mEffects[index] = effect; }

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
JASInstEffect* JASBasicInst::getEffect(int index)
{
	// UNUSED FUNCTION
	return (index >= mEffectCount) ? nullptr : mEffects[index];
}

/**
 * @note Address: 0x80099CB4
 * @note Size: 0x78
 */
void JASBasicInst::setOscCount(u32 count)
{
	delete[] mOscData;
	mOscCount = count;
	if (count == 0) {
		mOscData = nullptr;
	} else {
		mOscData = new (JASBank::getCurrentHeap(), 0) JASOscillator::Data*[count];
		JASCalc::bzero(mOscData, sizeof(JASOscillator::Data*) * count);
	}
}

/**
 * @note Address: 0x80099D2C
 * @note Size: 0x10
 * setOsc__12JASBasicInstFiPQ213JASOscillator4Data
 */
void JASBasicInst::setOsc(int index, JASOscillator::Data* osc) { mOscData[index] = osc; }

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
JASOscillator::Data* JASBasicInst::getOsc(int index)
{
	// UNUSED FUNCTION
	return (index >= mOscCount) ? nullptr : mOscData[index];
}

/**
 * @note Address: 0x80099D3C
 * @note Size: 0x24
 * getKeyRegion__12JASBasicInstFi
 */
JASBasicInst::TKeymap* JASBasicInst::getKeyRegion(int index) { return (index >= mKeymapCount) ? nullptr : mKeymap + index; }

/**
 * @note Address: N/A
 * @note Size: 0x24
 * getKeyRegion__12JASBasicInstCFi
 */
JASBasicInst::TKeymap* JASBasicInst::getKeyRegion(int index) const
{
	// UNUSED FUNCTION
	return (index >= mKeymapCount) ? nullptr : mKeymap + index;
}

/**
 * @note Address: 0x80099D60
 * @note Size: 0x54
 * __dt__Q212JASBasicInst7TKeymapFv
 */
JASBasicInst::TKeymap::~TKeymap() { delete[] mVeloRegions; }

/**
 * @note Address: 0x80099DB4
 * @note Size: 0x58
 */
void JASBasicInst::TKeymap::setVeloRegionCount(u32 count)
{
	delete[] mVeloRegions;
	mVeloRegions     = new (JASBank::getCurrentHeap(), 0) TVeloRegion[count];
	mVeloRegionCount = count;
}

/**
 * @note Address: 0x80099E0C
 * @note Size: 0x24
 * getVeloRegion__Q212JASBasicInst7TKeymapFi
 */
JASBasicInst::TVeloRegion* JASBasicInst::TKeymap::getVeloRegion(int index)
{
	return (index >= mVeloRegionCount) ? nullptr : mVeloRegions + index;
}

/**
 * @note Address: 0x80099E30
 * @note Size: 0x24
 * getVeloRegion__Q212JASBasicInst7TKeymapCFi
 */
JASBasicInst::TVeloRegion* JASBasicInst::TKeymap::getVeloRegion(int index) const
{
	return (index >= mVeloRegionCount) ? nullptr : mVeloRegions + index;
}
