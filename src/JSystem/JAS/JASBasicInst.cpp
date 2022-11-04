#include "JSystem/JAS/JASBank.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASInst.h"
#include "JSystem/JAS/JASOscillator.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JASBasicInst
    __vt__12JASBasicInst:
        .4byte 0
        .4byte 0
        .4byte __dt__12JASBasicInstFv
        .4byte getParam__12JASBasicInstCFiiP12JASInstParam
        .4byte getType__12JASBasicInstCFv
        .4byte getKeymapIndex__12JASBasicInstCFi
    .global __vt__7JASInst
    __vt__7JASInst:
        .4byte 0
        .4byte 0
        .4byte __dt__7JASInstFv
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CA8
    lbl_80516CA8:
        .float 1.0
        .4byte 0x00000000
    .global lbl_80516CB0
    lbl_80516CB0:
        .4byte 0x3FE00000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80099888
 * Size:	000044
 */
JASBasicInst::JASBasicInst()
    : _04(1.0f)
    , _08(1.0f)
    , m_effects(nullptr)
    , m_effectCount(0)
    , m_oscData(nullptr)
    , m_oscCount(0)
    , m_keymapCount(0)
    , m_keymap(nullptr)
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
	delete[] m_keymap;
	delete[] m_effects;
	delete[] m_oscData;
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
	param->_00        = 0;
	param->_24        = 0;
	param->m_oscData  = m_oscData;
	param->m_oscCount = m_oscCount;
	param->_10        = _04;
	param->_14        = _08;
	for (int i = 0; i < m_effectCount; i++) {
		JASInstEffect* effect = m_effects[i];
		if (effect != nullptr) {
			// This pattern exists in JASDrumSet as well...
			float y = effect->getY(p1, p2);
			switch (effect->m_target) {
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
	for (int i = 0; i < m_keymapCount; i++) {
		if (p1 <= m_keymap[i]._00) {
			keymap = &m_keymap[i];
			break;
		}
	}
	if (keymap == nullptr) {
		return false;
	}
	for (int i = 0; i < keymap->m_veloRegionCount; i++) {
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
	delete[] m_keymap;
	m_keymap      = new (JASBank::getCurrentHeap(), 0) TKeymap[count];
	m_keymapCount = count;
}

/*
 * --INFO--
 * Address:	80099C14
 * Size:	000018
 */
JASBasicInst::TKeymap::TKeymap(void)
{
	_00               = -1;
	m_veloRegionCount = 0;
	m_veloRegions     = nullptr;
}

/*
 * --INFO--
 * Address:	80099C2C
 * Size:	000078
 */
void JASBasicInst::setEffectCount(u32 count)
{
	delete[] m_effects;
	m_effectCount = count;
	if (count == 0) {
		m_effects = nullptr;
	} else {
		m_effects = new (JASBank::getCurrentHeap(), 0) JASInstEffect*[count];
		JASCalc::bzero(m_effects, sizeof(JASInstEffect*) * count);
	}
}

/*
 * --INFO--
 * Address:	80099CA4
 * Size:	000010
 * setEffect__12JASBasicInstFiP13JASInstEffect
 */
void JASBasicInst::setEffect(int index, JASInstEffect* effect) { m_effects[index] = effect; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
JASInstEffect* JASBasicInst::getEffect(int index)
{
	// UNUSED FUNCTION
	return (index >= m_effectCount) ? nullptr : m_effects[index];
}

/*
 * --INFO--
 * Address:	80099CB4
 * Size:	000078
 */
void JASBasicInst::setOscCount(u32 count)
{
	delete[] m_oscData;
	m_oscCount = count;
	if (count == 0) {
		m_oscData = nullptr;
	} else {
		m_oscData = new (JASBank::getCurrentHeap(), 0) JASOscillator::Data*[count];
		JASCalc::bzero(m_oscData, sizeof(JASOscillator::Data*) * count);
	}
}

/*
 * --INFO--
 * Address:	80099D2C
 * Size:	000010
 * setOsc__12JASBasicInstFiPQ213JASOscillator4Data
 */
void JASBasicInst::setOsc(int index, JASOscillator::Data* osc) { m_oscData[index] = osc; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
JASOscillator::Data* JASBasicInst::getOsc(int index)
{
	// UNUSED FUNCTION
	return (index >= m_oscCount) ? nullptr : m_oscData[index];
}

/*
 * --INFO--
 * Address:	80099D3C
 * Size:	000024
 * getKeyRegion__12JASBasicInstFi
 */
JASBasicInst::TKeymap* JASBasicInst::getKeyRegion(int index) { return (index >= m_keymapCount) ? nullptr : m_keymap + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 * getKeyRegion__12JASBasicInstCFi
 */
JASBasicInst::TKeymap* JASBasicInst::getKeyRegion(int index) const
{
	// UNUSED FUNCTION
	return (index >= m_keymapCount) ? nullptr : m_keymap + index;
}

/*
 * --INFO--
 * Address:	80099D60
 * Size:	000054
 * __dt__Q212JASBasicInst7TKeymapFv
 */
JASBasicInst::TKeymap::~TKeymap() { delete[] m_veloRegions; }

/*
 * --INFO--
 * Address:	80099DB4
 * Size:	000058
 */
void JASBasicInst::TKeymap::setVeloRegionCount(u32 count)
{
	delete[] m_veloRegions;
	m_veloRegions     = new (JASBank::getCurrentHeap(), 0) TVeloRegion[count];
	m_veloRegionCount = count;
}

/*
 * --INFO--
 * Address:	80099E0C
 * Size:	000024
 * getVeloRegion__Q212JASBasicInst7TKeymapFi
 */
JASBasicInst::TVeloRegion* JASBasicInst::TKeymap::getVeloRegion(int index)
{
	return (index >= m_veloRegionCount) ? nullptr : m_veloRegions + index;
}

/*
 * --INFO--
 * Address:	80099E30
 * Size:	000024
 * getVeloRegion__Q212JASBasicInst7TKeymapCFi
 */
JASBasicInst::TVeloRegion* JASBasicInst::TKeymap::getVeloRegion(int index) const
{
	return (index >= m_veloRegionCount) ? nullptr : m_veloRegions + index;
}

/*
 * --INFO--
 * Address:	80099E54
 * Size:	00000C
 */
// u32 JASBasicInst::getType() const { }
