#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

/**
 * @note Address: 0x80099888
 * @note Size: 0x44
 */
JASBasicInst::JASBasicInst()
    : _04(1.0f)
    , _08(1.0f)
    , mEffects(nullptr)
    , mEffectCount(0)
    , mOscData(nullptr)
    , mOscCount(0)
    , mKeymapCount(0)
    , mKeymap(nullptr)
{
}

/**
 * @note Address: 0x800998CC
 * @note Size: 0x48
 * __dt__7JASInstFv
 */
// JASInst::~JASInst() { }

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
	param->_00       = 0;
	param->_24       = 0;
	param->mOscData  = mOscData;
	param->mOscCount = mOscCount;
	param->_10       = _04;
	param->_14       = _08;
	for (int i = 0; i < mEffectCount; i++) {
		JASInstEffect* effect = mEffects[i];
		if (effect != nullptr) {
			// This pattern exists in JASDrumSet as well...
			float y = effect->getY(p1, p2);
			switch (effect->mTarget) {
			case 0:
				param->_10 *= y;
				break;
			case 1:
				param->_14 *= y;
				break;
			case 2:
				param->_18 += y - 0.5; // double is intentional
				break;
			case 3:
				param->_1C += y;
				break;
			case 4:
				param->_20 += y;
				break;
			}
		}
	}
	const TKeymap* keymap = nullptr;
	for (int i = 0; i < mKeymapCount; i++) {
		if (p1 <= mKeymap[i]._00) {
			keymap = &mKeymap[i];
			break;
		}
	}
	if (keymap == nullptr) {
		return false;
	}
	for (int i = 0; i < keymap->mVeloRegionCount; i++) {
		TVeloRegion* veloRegion = keymap->getVeloRegion(i);
		if (p2 <= veloRegion->_00) {
			param->_10 *= veloRegion->_08;
			param->_14 *= veloRegion->_0C;
			param->_04 = veloRegion->_04;
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
	_00              = -1;
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
