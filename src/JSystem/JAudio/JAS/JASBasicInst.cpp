#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80099888
 * Size:	000044
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

/*
 * --INFO--
 * Address:	800998CC
 * Size:	000048
 * __dt__7JASInstFv
 */
// JASInst::~JASInst() { }

/*
 * --INFO--
 * Address:	80099914
 * Size:	00008C
 * __dt__12JASBasicInstFv
 */
JASBasicInst::~JASBasicInst()
{
	delete[] mKeymap;
	delete[] mEffects;
	delete[] mOscData;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JASBasicInst::searchKeymap(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800999A0
 * Size:	0001E8
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

/*
 * --INFO--
 * Address:	80099B88
 * Size:	000008
 */
int JASBasicInst::getKeymapIndex(int index) const { return index; }

/*
 * --INFO--
 * Address:	80099B90
 * Size:	000084
 */
void JASBasicInst::setKeyRegionCount(u32 count)
{
	delete[] mKeymap;
	mKeymap      = new (JASBank::getCurrentHeap(), 0) TKeymap[count];
	mKeymapCount = count;
}

/*
 * --INFO--
 * Address:	80099C14
 * Size:	000018
 */
JASBasicInst::TKeymap::TKeymap()
{
	_00              = -1;
	mVeloRegionCount = 0;
	mVeloRegions     = nullptr;
}

/*
 * --INFO--
 * Address:	80099C2C
 * Size:	000078
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

/*
 * --INFO--
 * Address:	80099CA4
 * Size:	000010
 * setEffect__12JASBasicInstFiP13JASInstEffect
 */
void JASBasicInst::setEffect(int index, JASInstEffect* effect) { mEffects[index] = effect; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
JASInstEffect* JASBasicInst::getEffect(int index)
{
	// UNUSED FUNCTION
	return (index >= mEffectCount) ? nullptr : mEffects[index];
}

/*
 * --INFO--
 * Address:	80099CB4
 * Size:	000078
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

/*
 * --INFO--
 * Address:	80099D2C
 * Size:	000010
 * setOsc__12JASBasicInstFiPQ213JASOscillator4Data
 */
void JASBasicInst::setOsc(int index, JASOscillator::Data* osc) { mOscData[index] = osc; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
JASOscillator::Data* JASBasicInst::getOsc(int index)
{
	// UNUSED FUNCTION
	return (index >= mOscCount) ? nullptr : mOscData[index];
}

/*
 * --INFO--
 * Address:	80099D3C
 * Size:	000024
 * getKeyRegion__12JASBasicInstFi
 */
JASBasicInst::TKeymap* JASBasicInst::getKeyRegion(int index) { return (index >= mKeymapCount) ? nullptr : mKeymap + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 * getKeyRegion__12JASBasicInstCFi
 */
JASBasicInst::TKeymap* JASBasicInst::getKeyRegion(int index) const
{
	// UNUSED FUNCTION
	return (index >= mKeymapCount) ? nullptr : mKeymap + index;
}

/*
 * --INFO--
 * Address:	80099D60
 * Size:	000054
 * __dt__Q212JASBasicInst7TKeymapFv
 */
JASBasicInst::TKeymap::~TKeymap() { delete[] mVeloRegions; }

/*
 * --INFO--
 * Address:	80099DB4
 * Size:	000058
 */
void JASBasicInst::TKeymap::setVeloRegionCount(u32 count)
{
	delete[] mVeloRegions;
	mVeloRegions     = new (JASBank::getCurrentHeap(), 0) TVeloRegion[count];
	mVeloRegionCount = count;
}

/*
 * --INFO--
 * Address:	80099E0C
 * Size:	000024
 * getVeloRegion__Q212JASBasicInst7TKeymapFi
 */
JASBasicInst::TVeloRegion* JASBasicInst::TKeymap::getVeloRegion(int index)
{
	return (index >= mVeloRegionCount) ? nullptr : mVeloRegions + index;
}

/*
 * --INFO--
 * Address:	80099E30
 * Size:	000024
 * getVeloRegion__Q212JASBasicInst7TKeymapCFi
 */
JASBasicInst::TVeloRegion* JASBasicInst::TKeymap::getVeloRegion(int index) const
{
	return (index >= mVeloRegionCount) ? nullptr : mVeloRegions + index;
}
