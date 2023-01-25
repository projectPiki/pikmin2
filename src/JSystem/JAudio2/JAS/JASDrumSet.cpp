#include "JSystem/JAS/JASDrumSet.h"
#include "JSystem/JAS/JASBank.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASInst.h"
#include "JSystem/JAS/JASOscillator.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JASDrumSet
    __vt__10JASDrumSet:
        .4byte 0
        .4byte 0
        .4byte __dt__10JASDrumSetFv
        .4byte getParam__10JASDrumSetCFiiP12JASInstParam
        .4byte getType__10JASDrumSetCFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global oscp$640
    oscp$640:
        .skip 0x4
    .global init$641
    init$641:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CD8
    lbl_80516CD8:
        .float 1.0
    .global lbl_80516CDC
    lbl_80516CDC:
        .4byte 0x00000000
    .global lbl_80516CE0
    lbl_80516CE0:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516CE8
    lbl_80516CE8:
        .float 0.5
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8009B0B8
 * Size:	0001FC
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
	// static const float osc[6] = { 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f };
	static JASOscillator::Data osc;
	// osc                              = { 0, 1.0f, nullptr, nullptr, 1.0f, 0.0f };
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

/*
 * --INFO--
 * Address:	8009B2B4
 * Size:	000014
 * getPerc__10JASDrumSetFi
 */
JASDrumSet::TPerc* JASDrumSet::getPerc(int index) { return mPercs + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 * getPerc__10JASDrumSetCFi
 */
// const JASDrumSet::TPerc* JASDrumSet::getPerc(int index) const
// {
// 	// UNUSED FUNCTION
// 	return mPercs + index;
// }

/*
 * --INFO--
 * Address:	8009B2C8
 * Size:	000034
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

/*
 * --INFO--
 * Address:	8009B2FC
 * Size:	00005C
 * __dt__Q210JASDrumSet5TPercFv
 */
JASDrumSet::TPerc::~TPerc()
{
	delete[] mEffects;
	delete[] mVeloRegions;
}

/*
 * --INFO--
 * Address:	8009B358
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8009B3D0
 * Size:	000058
 */
void JASDrumSet::TPerc::setVeloRegionCount(u32 count)
{
	delete[] mVeloRegions;
	mVeloRegions     = new (JASBank::getCurrentHeap(), 0) TVeloRegion[count];
	mVeloRegionCount = count;
}

/*
 * --INFO--
 * Address:	8009B428
 * Size:	000010
 * getVeloRegion__Q210JASDrumSet5TPercFi
 */
JASInst::TVeloRegion* JASDrumSet::TPerc::getVeloRegion(int index) { return mVeloRegions + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 * getVeloRegion__Q210JASDrumSet5TPercCFi
 */
// const JASInst::TVeloRegion* JASDrumSet::TPerc::getVeloRegion(int index) const
// {
// 	// UNUSED FUNCTION
// 	return mVeloRegions + index;
// }

/*
 * --INFO--
 * Address:	8009B438
 * Size:	000010
 * setEffect__Q210JASDrumSet5TPercFiP13JASInstEffect
 */
void JASDrumSet::TPerc::setEffect(int index, JASInstEffect* effect) { mEffects[index] = effect; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 * getEffect__Q210JASDrumSet5TPercFi
 */
// JASInstEffect* JASDrumSet::TPerc::getEffect(int index)
// {
// 	// UNUSED FUNCTION
// 	return mEffects[index];
// }

/*
 * --INFO--
 * Address:	8009B448
 * Size:	000008
 */
void JASDrumSet::TPerc::setRelease(u32 release)
{
	// Generated from sth r4, 0xC(r3)
	mRelease = release;
}

/*
 * --INFO--
 * Address:	8009B450
 * Size:	000084
 * __dt__10JASDrumSetFv
 */
// JASDrumSet::~JASDrumSet() { }

/*
 * --INFO--
 * Address:	8009B4D4
 * Size:	00000C
 */
// u32 JASDrumSet::getType() const { }
