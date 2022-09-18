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
// JASInst::~JASInst()
// {
// }

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
bool JASBasicInst::getParam(int, int, JASInstParam*) const
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stmw     r24, 0x10(r1)
	mr       r24, r3
	lwz      r28, 0xc(r3)
	mr       r31, r6
	lwz      r3, 0x14(r3)
	mr       r25, r4
	lfs      f1, 4(r24)
	mr       r30, r5
	lfs      f0, 8(r24)
	li       r27, 0
	lwz      r29, 0x10(r24)
	stb      r0, 0(r6)
	stb      r0, 0x24(r6)
	lwz      r0, 0x18(r24)
	stw      r3, 8(r6)
	stw      r0, 0xc(r6)
	stfs     f1, 0x10(r6)
	stfs     f0, 0x14(r6)
	b        lbl_80099AB4

lbl_800999FC:
	lwz      r26, 0(r28)
	cmplwi   r26, 0
	beq      lbl_80099AAC
	mr       r3, r26
	mr       r4, r25
	lwz      r12, 0(r26)
	mr       r5, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 4(r26)
	cmpwi    r0, 2
	beq      lbl_80099A74
	bge      lbl_80099A44
	cmpwi    r0, 0
	beq      lbl_80099A54
	bge      lbl_80099A64
	b        lbl_80099AAC

lbl_80099A44:
	cmpwi    r0, 4
	beq      lbl_80099AA0
	bge      lbl_80099AAC
	b        lbl_80099A90

lbl_80099A54:
	lfs      f0, 0x10(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r31)
	b        lbl_80099AAC

lbl_80099A64:
	lfs      f0, 0x14(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x14(r31)
	b        lbl_80099AAC

lbl_80099A74:
	lfd      f0, lbl_80516CB0@sda21(r2)
	lfs      f2, 0x18(r31)
	fsub     f0, f1, f0
	fadd     f0, f2, f0
	frsp     f0, f0
	stfs     f0, 0x18(r31)
	b        lbl_80099AAC

lbl_80099A90:
	lfs      f0, 0x1c(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1c(r31)
	b        lbl_80099AAC

lbl_80099AA0:
	lfs      f0, 0x20(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x20(r31)

lbl_80099AAC:
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_80099AB4:
	cmplw    r27, r29
	blt      lbl_800999FC
	lwz      r4, 0x20(r24)
	li       r26, 0
	lwz      r0, 0x1c(r24)
	li       r5, 0
	mr       r3, r4
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_80099B00

lbl_80099ADC:
	lwz      r0, 0(r3)
	cmpw     r25, r0
	bgt      lbl_80099AF4
	mulli    r0, r5, 0xc
	add      r26, r4, r0
	b        lbl_80099B00

lbl_80099AF4:
	addi     r3, r3, 0xc
	addi     r5, r5, 1
	bdnz     lbl_80099ADC

lbl_80099B00:
	cmplwi   r26, 0
	bne      lbl_80099B10
	li       r3, 0
	b        lbl_80099B74

lbl_80099B10:
	li       r27, 0
	b        lbl_80099B64

lbl_80099B18:
	mr       r3, r26
	mr       r4, r27
	bl       getVeloRegion__Q212JASBasicInst7TKeymapCFi
	lwz      r0, 0(r3)
	cmpw     r30, r0
	bgt      lbl_80099B60
	lfs      f1, 0x10(r31)
	lfs      f0, 8(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x10(r31)
	lfs      f1, 0x14(r31)
	lfs      f0, 0xc(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x14(r31)
	lwz      r0, 4(r3)
	li       r3, 1
	stw      r0, 4(r31)
	b        lbl_80099B74

lbl_80099B60:
	addi     r27, r27, 1

lbl_80099B64:
	lwz      r0, 4(r26)
	cmplw    r27, r0
	blt      lbl_80099B18
	li       r3, 0

lbl_80099B74:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	_00 = -1;
	_04 = 0;
	_08 = nullptr;
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
JASBasicInst::TKeymap::~TKeymap() { delete[] _08; }

/*
 * --INFO--
 * Address:	80099DB4
 * Size:	000058
 */
void JASBasicInst::TKeymap::setVeloRegionCount(u32 count)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 8(r3)
	bl       __dla__FPv
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 4
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 8(r30)
	stw      r31, 4(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099E0C
 * Size:	000024
 * getVeloRegion__Q212JASBasicInst7TKeymapFi
 */
void JASBasicInst::TKeymap::getVeloRegion(int index)
{
	// return (index >= _04) ? nullptr : _08 + index;
	/*
	lwz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80099E20
	li       r3, 0
	blr

lbl_80099E20:
	lwz      r3, 8(r3)
	slwi     r0, r4, 4
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099E30
 * Size:	000024
 * getVeloRegion__Q212JASBasicInst7TKeymapCFi
 */
void JASBasicInst::TKeymap::getVeloRegion(int) const
{
	// return (index >= _04) ? nullptr : _08 + index;
	/*
	lwz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80099E44
	li       r3, 0
	blr

lbl_80099E44:
	lwz      r3, 8(r3)
	slwi     r0, r4, 4
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099E54
 * Size:	00000C
 */
// u32 JASBasicInst::getType() const
// {
// }
