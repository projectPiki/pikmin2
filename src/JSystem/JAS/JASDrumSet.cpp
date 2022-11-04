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

// TODO: This file only has static data issues left.

// __declspec(section ".data") JASOscillator::Data osc;
// __declspec(section ".data") static JASOscillator::Data osc;
static JASOscillator::Data osc;
// JASOscillator::Data osc;

/*
 * --INFO--
 * Address:	8009B0B8
 * Size:	0001FC
 * TODO: I think this is done? last diff is addi v. li sbss
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
	instParam->_26    = perc->m_release;
	// static const float osc[6] = { 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f };
	// static JASOscillator::Data osc;
	// osc                              = { 0, 1.0f, nullptr, nullptr, 1.0f, 0.0f };
	osc._00                          = 0;
	osc._04                          = 1.0f;
	osc._08                          = nullptr;
	osc._0C                          = nullptr;
	osc._10                          = 1.0f;
	osc._14                          = 0.0f;
	static JASOscillator::Data* oscp = &osc;
	instParam->m_oscData             = &oscp;
	instParam->m_oscCount            = 1;
	for (u32 i = 0; i < perc->m_effectCount; i++) {
		JASInstEffect* effect = perc->m_effects[i];
		if (effect) {
			f32 y = effect->getY(percIndex, p2);
			switch (effect->m_target) {
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
	for (u32 i = 0; i < perc->m_veloRegionCount; i++) {
		const TVeloRegion* veloRegion = perc->getVeloRegion(i);
		if (p2 <= veloRegion->_00) {
			instParam->_10 *= veloRegion->_08;
			instParam->_14 *= veloRegion->_0C;
			instParam->_04 = veloRegion->_04;
			return true;
		}
	}
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r28, r4
	cmplwi   r28, 0x80
	mr       r29, r5
	mr       r30, r6
	blt      lbl_8009B0E4
	li       r3, 0
	b        lbl_8009B2A0

lbl_8009B0E4:
	slwi     r4, r28, 5
	li       r5, 0
	addi     r31, r4, 4
	stb      r5, 0(r30)
	add      r31, r3, r31
	li       r4, 1
	stb      r4, 0x24(r30)
	lis      r3, osc$639@ha
	lfs      f0, 0(r31)
	lfs      f1, 4(r31)
	stfs     f0, 0x10(r30)
	lfs      f0, 8(r31)
	stfs     f1, 0x14(r30)
	lhz      r0, 0xc(r31)
	stfs     f0, 0x18(r30)
	lfs      f1, lbl_80516CD8@sda21(r2)
	sth      r0, 0x26(r30)
	lfs      f0, lbl_80516CDC@sda21(r2)
	stwu     r5, osc$639@l(r3)
	lbz      r0, init$641@sda21(r13)
	stfs     f1, 4(r3)
	extsb.   r0, r0
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	stfs     f1, 0x10(r3)
	stfs     f0, 0x14(r3)
	bne      lbl_8009B158
	stw      r3, oscp$640@sda21(r13)
	stb      r4, init$641@sda21(r13)

lbl_8009B158:
	addi     r3, r13, oscp$640@sda21
	li       r0, 1
	stw      r3, 8(r30)
	li       r26, 0
	li       r27, 0
	stw      r0, 0xc(r30)
	b        lbl_8009B230

lbl_8009B174:
	lwz      r3, 0x10(r31)
	lwzx     r25, r3, r27
	cmplwi   r25, 0
	beq      lbl_8009B228
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0(r25)
	mr       r5, r29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 4(r25)
	cmpwi    r0, 2
	beq      lbl_8009B1F0
	bge      lbl_8009B1C0
	cmpwi    r0, 0
	beq      lbl_8009B1D0
	bge      lbl_8009B1E0
	b        lbl_8009B228

lbl_8009B1C0:
	cmpwi    r0, 4
	beq      lbl_8009B21C
	bge      lbl_8009B228
	b        lbl_8009B20C

lbl_8009B1D0:
	lfs      f0, 0x10(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r30)
	b        lbl_8009B228

lbl_8009B1E0:
	lfs      f0, 0x14(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x14(r30)
	b        lbl_8009B228

lbl_8009B1F0:
	lfd      f0, lbl_80516CE0@sda21(r2)
	lfs      f2, 0x18(r30)
	fsub     f0, f1, f0
	fadd     f0, f2, f0
	frsp     f0, f0
	stfs     f0, 0x18(r30)
	b        lbl_8009B228

lbl_8009B20C:
	lfs      f0, 0x1c(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x1c(r30)
	b        lbl_8009B228

lbl_8009B21C:
	lfs      f0, 0x20(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x20(r30)

lbl_8009B228:
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_8009B230:
	lwz      r0, 0x14(r31)
	cmplw    r26, r0
	blt      lbl_8009B174
	lwz      r0, 0x18(r31)
	li       r3, 0
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8009B29C

lbl_8009B250:
	lwz      r0, 0x1c(r31)
	add      r4, r0, r3
	lwz      r0, 0(r4)
	cmpw     r29, r0
	bgt      lbl_8009B294
	lfs      f1, 0x10(r30)
	li       r3, 1
	lfs      f0, 8(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f1, 0x14(r30)
	lfs      f0, 0xc(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x14(r30)
	lwz      r0, 4(r4)
	stw      r0, 4(r30)
	b        lbl_8009B2A0

lbl_8009B294:
	addi     r3, r3, 0x10
	bdnz     lbl_8009B250

lbl_8009B29C:
	li       r3, 0

lbl_8009B2A0:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B2B4
 * Size:	000014
 * getPerc__10JASDrumSetFi
 */
JASDrumSet::TPerc* JASDrumSet::getPerc(int index) { return m_percs + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 * getPerc__10JASDrumSetCFi
 */
// const JASDrumSet::TPerc* JASDrumSet::getPerc(int index) const
// {
// 	// UNUSED FUNCTION
// 	return m_percs + index;
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
    , m_release(1000)
    , m_effects(nullptr)
    , m_effectCount(0)
    , m_veloRegionCount(0)
    , m_veloRegions(nullptr)
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
	delete[] m_effects;
	delete[] m_veloRegions;
}

/*
 * --INFO--
 * Address:	8009B358
 * Size:	000078
 */
void JASDrumSet::TPerc::setEffectCount(u32 count)
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
 * Address:	8009B3D0
 * Size:	000058
 */
void JASDrumSet::TPerc::setVeloRegionCount(u32 count)
{
	delete[] m_veloRegions;
	m_veloRegions     = new (JASBank::getCurrentHeap(), 0) TVeloRegion[count];
	m_veloRegionCount = count;
}

/*
 * --INFO--
 * Address:	8009B428
 * Size:	000010
 * getVeloRegion__Q210JASDrumSet5TPercFi
 */
JASInst::TVeloRegion* JASDrumSet::TPerc::getVeloRegion(int index) { return m_veloRegions + index; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 * getVeloRegion__Q210JASDrumSet5TPercCFi
 */
// const JASInst::TVeloRegion* JASDrumSet::TPerc::getVeloRegion(int index) const
// {
// 	// UNUSED FUNCTION
// 	return m_veloRegions + index;
// }

/*
 * --INFO--
 * Address:	8009B438
 * Size:	000010
 * setEffect__Q210JASDrumSet5TPercFiP13JASInstEffect
 */
void JASDrumSet::TPerc::setEffect(int index, JASInstEffect* effect) { m_effects[index] = effect; }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 * getEffect__Q210JASDrumSet5TPercFi
 */
// JASInstEffect* JASDrumSet::TPerc::getEffect(int index)
// {
// 	// UNUSED FUNCTION
// 	return m_effects[index];
// }

/*
 * --INFO--
 * Address:	8009B448
 * Size:	000008
 */
void JASDrumSet::TPerc::setRelease(u32 release)
{
	// Generated from sth r4, 0xC(r3)
	m_release = release;
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
