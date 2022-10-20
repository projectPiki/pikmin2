#include "CNode.h"
#include "Dolphin/string.h"
#include "Game/Creature.h"
#include "Game/gameGenerator.h"
#include "Game/gameGeneratorCache.h"
#include "Game/GameSystem.h"
#include "Game/TimeMgr.h"
#include "JSystem/JUT/JUTException.h"
#include "nans.h"
#include "Parameters.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameGenerator_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F668
    lbl_8047F668:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x67656E65
        .4byte 0x7261746F
        .4byte 0x72000000
    .global lbl_8047F680
    lbl_8047F680:
        .4byte 0x67656E20
        .4byte 0x62617365
        .4byte 0x00000000
    .global lbl_8047F68C
    lbl_8047F68C:
        .4byte 0x67616D65
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8047F6A0
    lbl_8047F6A0:
        .4byte 0x47656E65
        .4byte 0x72616F74
        .4byte 0x723A3A73
        .4byte 0x61766543
        .4byte 0x72656174
        .4byte 0x75726520
        .4byte 0x63726561
        .4byte 0x74757265
        .4byte 0x20697320
        .4byte 0x300A0000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x00000000
        .4byte 0x09232076
        .4byte 0x65727369
        .4byte 0x6F6E0D0A
        .4byte 0x00000000
        .4byte 0x09232072
        .4byte 0x65736572
        .4byte 0x7665640D
        .4byte 0x0A000000
        .4byte 0x09232095
        .4byte 0x9C8A8893
        .4byte 0xFA90940D
        .4byte 0x0A000000
        .4byte 0x0923203C
        .4byte 0x25733E0D
        .4byte 0x0A000000
        .4byte 0x09232070
        .4byte 0x6F730D0A
        .4byte 0x00000000
        .4byte 0x0923206F
        .4byte 0x66667365
        .4byte 0x740D0A00
    .global lbl_8047F728
    lbl_8047F728:
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x724D6772
        .4byte 0x00000000
        .4byte 0x23206765
        .4byte 0x6E657261
        .4byte 0x746F724D
        .4byte 0x6772203C
        .4byte 0x25733E0D
        .4byte 0x0A000000
        .4byte 0x09232073
        .4byte 0x74617274
        .4byte 0x506F730D
        .4byte 0x0A000000
        .4byte 0x09232073
        .4byte 0x74617274
        .4byte 0x4469720D
        .4byte 0x0A000000
        .4byte 0x09232025
        .4byte 0x64206765
        .4byte 0x6E657261
        .4byte 0x746F7273
        .4byte 0x0D0A0000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B55F0
    lbl_804B55F0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game12GeneratorMgr
    __vt__Q24Game12GeneratorMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game12GeneratorMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte doAnimation__Q24Game12GeneratorMgrFv
        .4byte doEntry__Q24Game12GeneratorMgrFv
        .4byte doSetView__Q24Game12GeneratorMgrFi
        .4byte doViewCalc__Q24Game12GeneratorMgrFv
    .global __vt__Q24Game9Generator
    __vt__Q24Game9Generator:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9GeneratorFv
        .4byte getChildCount__5CNodeFv
        .4byte doAnimation__Q24Game9GeneratorFv
        .4byte doEntry__Q24Game9GeneratorFv
        .4byte doSetView__Q24Game9GeneratorFi
        .4byte doViewCalc__Q24Game9GeneratorFv
    .global __vt__Q24Game9GenObject
    __vt__Q24Game9GenObject:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenBaseFR6Stream
        .4byte ramSaveParameters__Q24Game7GenBaseFR6Stream
        .4byte ramLoadParameters__Q24Game7GenBaseFR6Stream
        .4byte doEvent__Q24Game7GenBaseFUl
        .4byte doRead__Q24Game7GenBaseFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenBaseFv
        .4byte updateUseList__Q24Game9GenObjectFPQ24Game9Generatori
        .4byte generate__Q24Game9GenObjectFPQ24Game9Generator
        .4byte 0
        .4byte "generatorMakeMatrix__Q24Game9GenObjectFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc
    .global __vt__Q24Game7GenBase
    __vt__Q24Game7GenBase:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenBaseFR6Stream
        .4byte ramSaveParameters__Q24Game7GenBaseFR6Stream
        .4byte ramLoadParameters__Q24Game7GenBaseFR6Stream
        .4byte doEvent__Q24Game7GenBaseFUl
        .4byte doRead__Q24Game7GenBaseFR6Stream
        .4byte update__Q24Game7GenBaseFPQ24Game9Generator
        .4byte render__Q24Game7GenBaseFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game7GenBaseFv
        .4byte getShape__Q24Game7GenBaseFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global GeneratorCurrentVersion
    GeneratorCurrentVersion:
        .ascii "v0.3"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A18
    lbl_80515A18:
        .skip 0x4
    .global lbl_80515A1C
    lbl_80515A1C:
        .skip 0x4
    .global factory__Q24Game16GenObjectFactory
    factory__Q24Game16GenObjectFactory:
        .skip 0x4
    .global ramMode__Q24Game9Generator
    ramMode__Q24Game9Generator:
        .skip 0x4
    .global generatorMgr__4Game
    generatorMgr__4Game:
        .skip 0x4
    .global onceGeneratorMgr__4Game
    onceGeneratorMgr__4Game:
        .skip 0x4
    .global limitGeneratorMgr__4Game
    limitGeneratorMgr__4Game:
        .skip 0x4
    .global plantsGeneratorMgr__4Game
    plantsGeneratorMgr__4Game:
        .skip 0x4
    .global dayGeneratorMgr__4Game
    dayGeneratorMgr__4Game:
        .skip 0x4
    .global cursorCallback__Q24Game12GeneratorMgr
    cursorCallback__Q24Game12GeneratorMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519258
    lbl_80519258:
        .4byte 0x00000000
    .global lbl_8051925C
    lbl_8051925C:
        .4byte 0x756E7365
        .4byte 0x74000000
        .4byte 0x00000000
    .global lbl_80519268
    lbl_80519268:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519270
    lbl_80519270:
        .4byte 0x67656E4D
        .4byte 0x67720000
*/

u32 GeneratorCurrentVersion = 'v0.3';

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("generator"); }

namespace Game {

/*
 * --INFO--
 * Address:	801AA6E4
 * Size:	000050
 */
GenBase::GenBase(u32 typeID, char* labelData, char* objTypeName)
    : Parameters(nullptr, "gen base")
{
	m_typeID      = typeID;
	m_labelData   = labelData;
	m_objTypeName = objTypeName;
	m_rawID       = '____';
	_20           = 0;
}

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GenBase::writeVersion(Stream& output)
{
	// INLINED FUNCTION
	u32 versionRaw = getLatestVersion();
	ID32 versionID32(versionRaw);
	versionID32.write(output);
}

/*
 * --INFO--
 * Address:	801AA734
 * Size:	00000C
 */
u32 GenBase::getLatestVersion() { return 'udef'; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void GenBase::write(Stream& output)
{
	// INLINED FUNCTION
	ID32 type(m_typeID);
	output.textWriteTab(output.m_tabCount);
	type.write(output);
	if (Generator::ramMode == 0) {
		writeVersion(output);
	}
	doWrite(output);
	if (Generator::ramMode != 0) {
		ramSaveParameters(output);
	} else {
		Parameters::write(output);
	}
}

/*
 * --INFO--
 * Address:	801AA740
 * Size:	000004
 */
void GenBase::doWrite(Stream&) { }

/*
 * --INFO--
 * Address:	801AA744
 * Size:	000020
 */
void GenBase::ramSaveParameters(Stream& output) { Parameters::write(output); }

/*
 * --INFO--
 * Address:	801AA764
 * Size:	000020
 */
void GenBase::ramLoadParameters(Stream& input) { Parameters::read(input); }

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GenBase::readVersion(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void GenBase::read(Stream& input)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA784
 * Size:	000004
 */
void GenBase::doRead(Stream&) { }

/*
 * getLatestVersion__Q24Game9GenObjectFv
 * --INFO--
 * Address:	801AA788
 * Size:	000050
 */
u32 GenObject::getLatestVersion()
{
	int count = GenObjectFactory::factory->m_count;
	for (int i = 0; count > 0; i++, count--) {
		if (m_typeID == GenObjectFactory::factory->m_factories[i].m_typeID) {
			return GenObjectFactory::factory->m_factories[i].m_version;
		}
	}
	return m_typeID;
	// i++;
	// } while (--count != 0);
	// return m_typeID;
	/*
	lwz      r7, factory__Q24Game16GenObjectFactory@sda21(r13)
	li       r4, 0
	mr       r5, r4
	lwz      r3, 0x10(r3)
	lwz      r0, 0(r7)
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_801AA7A8:
	lwz      r6, 8(r7)
	lwzx     r0, r6, r5
	cmplw    r3, r0
	bne      lbl_801AA7C8
	slwi     r0, r4, 4
	add      r3, r6, r0
	lwz      r3, 0xc(r3)
	blr

lbl_801AA7C8:
	addi     r5, r5, 0x10
	addi     r4, r4, 1
	bdnz     lbl_801AA7A8
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void GenObjectFactory::createInstance()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA7D8
 * Size:	00000C
 */
void Generator::initialiseSystem() { GenObjectFactory::factory = nullptr; }

/*
 * __ct__Q24Game9GeneratorFv
 * --INFO--
 * Address:	801AA7E4
 * Size:	0000DC
 */
Generator::Generator()
    : CNode()
    , _40()
    , m_version()
    , m_position(0.0f, 0.0f, 0.0f)
{
	_18           = nullptr;
	_1C           = '____';
	m_reservedNum = 0;
	_40.setID('    ');
	m_version.setID(GeneratorCurrentVersion);
	strcpy(m_genObjName, "unset");
	_64                    = 0;
	_60                    = 0;
	m_creature             = nullptr;
	_7C                    = 0;
	m_child                = nullptr;
	m_parent               = nullptr;
	m_prev                 = nullptr;
	m_next                 = nullptr;
	_AC                    = 1;
	m_dayLimitMaybe        = -1;
	_74                    = 0;
	_78                    = 0;
	m_daysTillRessurection = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
Generator::Generator(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA8C0
 * Size:	000068
 */
Generator::~Generator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801AA90C
	lis      r4, __vt__Q24Game9Generator@ha
	li       r0, 0
	addi     r5, r4, __vt__Q24Game9Generator@l
	li       r4, 0
	stw      r5, 0(r30)
	stw      r0, 0x64(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801AA90C
	mr       r3, r30
	bl       __dl__FPv

lbl_801AA90C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * updateUseList__Q24Game9GeneratorFv
 * --INFO--
 * Address:	801AA928
 * Size:	000058
 */
void Generator::updateUseList()
{
	if (!isExpired() && (_18 != nullptr)) {
		_18->updateUseList(this, 1);
	}
}

/*
 * --INFO--
 * Address:	801AA980
 * Size:	000004
 */
void GenObject::updateUseList(Generator*, int) { }

/*
 * --INFO--
 * Address:	801AA984
 * Size:	000034
 */
bool Generator::isExpired()
{
	if (m_dayLimitMaybe == -1) {
		return false;
	}
	return (uint)m_dayLimitMaybe < gameSystem->m_timeMgr->m_dayCount;
}

/*
 * --INFO--
 * Address:	801AA9B8
 * Size:	0000B8
 */
bool Generator::loadCreature(Stream& input)
{
	if (_18) {
		m_creature = _18->generate(this);
		// TODO: This might be part of an inlined dump function?
		if (m_creature) {
			m_creature->getTypeName();
		}
	}
	if (m_creature) {
		m_creature->m_generator = this;
		m_creature->load(input, (m_reservedNum & 8U) != 0);
	}
	return (m_creature != nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801AAA14
	lwz      r12, 0xc(r3)
	mr       r4, r30
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r30)
	lwz      r3, 0x6c(r30)
	cmplwi   r3, 0
	beq      lbl_801AAA14
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_801AAA14:
	lwz      r3, 0x6c(r30)
	cmplwi   r3, 0
	beq      lbl_801AAA4C
	stw      r30, 0xc4(r3)
	li       r5, 0
	lhz      r0, 0x5c(r30)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_801AAA3C
	ori      r0, r5, 1
	clrlwi   r5, r0, 0x18

lbl_801AAA3C:
	lwz      r3, 0x6c(r30)
	mr       r4, r31
	bl       load__Q24Game8CreatureFR6StreamUc
	b        lbl_801AAA54

lbl_801AAA4C:
	li       r3, 0
	b        lbl_801AAA58

lbl_801AAA54:
	li       r3, 1

lbl_801AAA58:
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
 * Address:	801AAA70
 * Size:	000008
 */
Creature* GenObject::generate(Generator*) { return nullptr; }

/*
 * --INFO--
 * Address:	801AAA78
 * Size:	00007C
 */
bool Generator::need_saveCreature(void)
{
	// FIRST TRY! ^_^
	bool shouldSave;
	if (m_creature == nullptr) {
		shouldSave = true;
	} else {
		if ((!m_creature->isAlive() && m_creature->isPellet())) {
			shouldSave = false;
		} else {
			shouldSave = true;
		}
	}
	return shouldSave;
}

/*
 * saveCreature__Q24Game9GeneratorFR6Stream
 * --INFO--
 * Address:	801AAAF4
 * Size:	0000C8
 */
void Generator::saveCreature(Stream& output)
{
	if (m_creature) {
		u16 flags = m_reservedNum;
		// u8 saveFlag = (flags & 8);
		bool conversion = false;
		if (flags & 8) {
			conversion = true;
		}
		// bool conversion = saveFlag == 0 ? false : true;
		// bool conversion = saveFlag != 0;
		// ??? I guess there was some debug usage of these that was removed?
		m_creature->getTypeName();
		m_creature->getCreatureName();
		m_creature->getCreatureID();
		m_creature->save(output, conversion);
		return;
	}
	// sic
	JUT_PANICLINE(448, "Generaotr::saveCreature creature is 0\n");
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x6c(r3)
	cmplwi   r3, 0
	beq      lbl_801AAB84
	lhz      r0, 0x5c(r29)
	li       r31, 0
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_801AAB38
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x18

lbl_801AAB38:
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	mr       r4, r30
	mr       r5, r31
	bl       save__Q24Game8CreatureFR6StreamUc
	b        lbl_801AABA0

lbl_801AAB84:
	lis      r3, lbl_8047F68C@ha
	lis      r5, lbl_8047F6A0@ha
	addi     r3, r3, lbl_8047F68C@l
	li       r4, 0x1c0
	addi     r5, r5, lbl_8047F6A0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801AABA0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * generate__Q24Game9GeneratorFv
 *
 * --INFO--
 * Address:	801AABBC
 * Size:	000138
 */
void Generator::generate(void)
{
	// TODO: inlined isExpired does not match for this function
	if (isExpired()) {
		_7C        = 0;
		m_creature = nullptr;
	} else {
		if (ramMode == 0) {
			_7C = 0;
			_74 = 0;
			_78 = gameSystem->m_timeMgr->m_dayCount;
		} else if ((m_reservedNum & 4) == 0) {
			_7C = 0;
			return;
		}
		m_creature = nullptr;
		if (_18) {
			if (ramMode != 0 && (m_reservedNum & 4) != 0 && gameSystem->m_timeMgr->m_dayCount >= _78 + m_daysTillRessurection) {
				_78 = gameSystem->m_timeMgr->m_dayCount;
				_74 = 0;
			}
			m_creature = _18->generate(this);
			if (m_creature) {
				m_creature->m_generator = this;
			}
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x84(r3)
	cmpwi    r4, -1
	bne      lbl_801AABE4
	li       r0, 0
	b        lbl_801AAC04

lbl_801AABE4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplw    r4, r0
	bge      lbl_801AAC00
	li       r0, 1
	b        lbl_801AAC04

lbl_801AAC00:
	li       r0, 0

lbl_801AAC04:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801AAC1C
	li       r0, 0
	stw      r0, 0x7c(r31)
	stw      r0, 0x6c(r31)
	b        lbl_801AACE0

lbl_801AAC1C:
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AAC48
	li       r0, 0
	stw      r0, 0x7c(r31)
	stw      r0, 0x74(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	stw      r0, 0x78(r31)
	b        lbl_801AAC60

lbl_801AAC48:
	lhz      r0, 0x5c(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801AAC60
	li       r0, 0
	stw      r0, 0x7c(r31)
	b        lbl_801AACE0

lbl_801AAC60:
	li       r5, 0
	stw      r5, 0x6c(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	beq      lbl_801AACE0
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AACB4
	lhz      r0, 0x5c(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_801AACB4
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x78(r31)
	lwz      r4, 0x40(r4)
	lwz      r0, 0x70(r31)
	lwz      r4, 0x218(r4)
	add      r0, r3, r0
	cmpw     r4, r0
	blt      lbl_801AACB4
	stw      r4, 0x78(r31)
	stw      r5, 0x74(r31)

lbl_801AACB4:
	lwz      r3, 0x18(r31)
	mr       r4, r31
	lwz      r12, 0xc(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r31)
	lwz      r3, 0x6c(r31)
	cmplwi   r3, 0
	beq      lbl_801AACE0
	stw      r31, 0xc4(r3)

lbl_801AACE0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AACF4
 * Size:	000024
 */
void Generator::informDeath(Game::Creature* creature)
{
	if (creature == m_creature) {
		m_creature = nullptr;
	}
	_74++;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Generator::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Generator::render(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * read__Q24Game9GeneratorFR6Stream
 *
 * --INFO--
 * Address:	801AAD18
 * Size:	0003A4
 */
void Generator::read(Stream& input)
{
	m_version.read(input);
	if (m_version.getID() >= 'v0.0') {
		m_reservedNum = input.readShort();
	} else {
		m_reservedNum = input.readInt();
	}
	if (m_version.getID() >= 'v0.3') {
		m_daysTillRessurection = input.readShort();
	} else {
		if (m_version.getID() >= 'v0.1') {
			m_daysTillRessurection = input.readInt();
		} else {
			m_daysTillRessurection = 0;
		}
	}
	if (ramMode == 0) {
		int i = 0;
		do {
			m_genObjName[i] = input.readByte();
		} while (++i < 0x20);
	} else {
		if (m_version.getID() >= 'v0.2') {
			if (input.readByte() != '\0') {
				int i = 0;
				do {
					m_genObjName[i] = input.readByte();
				} while (++i < 0x20);
			} else {
				m_genObjName[0] = '\0';
			}
		} else {
			m_genObjName[0] = '\0';
		}
		_74             = input.readShort();
		_78             = input.readShort();
		m_dayLimitMaybe = input.readShort();
	}
	if (ramMode != 0) {
		m_position.x = input.readShort();
		m_position.y = input.readShort();
		m_position.z = input.readShort();
	} else {
		// TODO: Is this Vector3::read()?
		// m_position.read(input);
		m_position.x = input.readFloat();
		m_position.y = input.readFloat();
		m_position.z = input.readFloat();
	}
	if (ramMode != 0) {
		m_offset.x = 0.0f;
		m_offset.y = 0.0f;
		m_offset.z = 0.0f;
	} else {
		// TODO: Is this Vector3::read()?
		// m_offset.read(input);
		m_offset.x = input.readFloat();
		m_offset.y = input.readFloat();
		m_offset.z = input.readFloat();
	}
	_18 = nullptr;
	ID32 temp;
	temp.read(input);
	// int i                 = 0;
	s32 count             = GenObjectFactory::factory->m_count;
	GenObject* makeResult = nullptr;
	// if (0 < count) {
	// 	do {
	// 		if (temp.getID() == GenObjectFactory::factory->m_factories[i].m_typeID) {
	// 			makeResult = GenObjectFactory::factory->m_factories[i].m_makeFunction();
	// 			break;
	// 		}
	// 	} while (--count != 0);
	// }
	if (0 < count) {
		for (int i = 0; i < count; i++) {
			if (temp.getID() == GenObjectFactory::factory->m_factories[i].m_typeID) {
				makeResult = GenObjectFactory::factory->m_factories[i].m_makeFunction();
				break;
			}
		}
	}
	_18 = makeResult;
	if (_18) {
		if (Generator::ramMode == 0) {
			ID32 temp2;
			temp2.read(input);
			_18->m_rawID = temp2.getID();
		} else {
			_18->m_rawID = _18->getLatestVersion();
		}
		_18->doRead(input);
		if (Generator::ramMode != 0) {
			_18->ramLoadParameters(input);
		} else {
			((Parameters*)_18)->read(input);
		}
		_1C = temp.getID();
	} else {
		temp.print();
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	addi     r3, r30, 0x4c
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	bl       read__4ID32FR6Stream
	lis      r3, 0x76302E30@ha
	lwz      r4, 0x54(r30)
	addi     r0, r3, 0x76302E30@l
	cmplw    r4, r0
	blt      lbl_801AAD68
	mr       r3, r31
	bl       readShort__6StreamFv
	sth      r3, 0x5c(r30)
	b        lbl_801AAD74

lbl_801AAD68:
	mr       r3, r31
	bl       readInt__6StreamFv
	sth      r3, 0x5c(r30)

lbl_801AAD74:
	lis      r3, 0x76302E33@ha
	lwz      r4, 0x54(r30)
	addi     r0, r3, 0x76302E33@l
	cmplw    r4, r0
	blt      lbl_801AAD9C
	mr       r3, r31
	bl       readShort__6StreamFv
	extsh    r0, r3
	stw      r0, 0x70(r30)
	b        lbl_801AADC0

lbl_801AAD9C:
	addi     r0, r3, 0x2e31
	cmplw    r4, r0
	blt      lbl_801AADB8
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x70(r30)
	b        lbl_801AADC0

lbl_801AADB8:
	li       r0, 0
	stw      r0, 0x70(r30)

lbl_801AADC0:
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AADF0
	li       r29, 0

lbl_801AADD0:
	mr       r3, r31
	bl       readByte__6StreamFv
	addi     r0, r29, 0x20
	addi     r29, r29, 1
	cmpwi    r29, 0x20
	stbx     r3, r30, r0
	blt      lbl_801AADD0
	b        lbl_801AAE7C

lbl_801AADF0:
	lis      r3, 0x76302E32@ha
	lwz      r4, 0x54(r30)
	addi     r0, r3, 0x76302E32@l
	cmplw    r4, r0
	blt      lbl_801AAE44
	mr       r3, r31
	bl       readByte__6StreamFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AAE38
	li       r29, 0

lbl_801AAE18:
	mr       r3, r31
	bl       readByte__6StreamFv
	addi     r0, r29, 0x20
	addi     r29, r29, 1
	cmpwi    r29, 0x20
	stbx     r3, r30, r0
	blt      lbl_801AAE18
	b        lbl_801AAE4C

lbl_801AAE38:
	li       r0, 0
	stb      r0, 0x20(r30)
	b        lbl_801AAE4C

lbl_801AAE44:
	li       r0, 0
	stb      r0, 0x20(r30)

lbl_801AAE4C:
	mr       r3, r31
	bl       readShort__6StreamFv
	extsh    r0, r3
	mr       r3, r31
	stw      r0, 0x74(r30)
	bl       readShort__6StreamFv
	extsh    r0, r3
	mr       r3, r31
	stw      r0, 0x78(r30)
	bl       readShort__6StreamFv
	extsh    r0, r3
	stw      r0, 0x84(r30)

lbl_801AAE7C:
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AAF10
	mr       r3, r31
	bl       readShort__6StreamFv
	extsh    r3, r3
	lis      r0, 0x4330
	xoris    r4, r3, 0x8000
	stw      r0, 0x20(r1)
	lfd      f1, lbl_80519268@sda21(r2)
	mr       r3, r31
	stw      r4, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x94(r30)
	bl       readShort__6StreamFv
	extsh    r3, r3
	lis      r0, 0x4330
	xoris    r4, r3, 0x8000
	stw      r0, 0x28(r1)
	lfd      f1, lbl_80519268@sda21(r2)
	mr       r3, r31
	stw      r4, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x98(r30)
	bl       readShort__6StreamFv
	extsh    r3, r3
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 0x30(r1)
	lfd      f1, lbl_80519268@sda21(r2)
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x9c(r30)
	b        lbl_801AAF34

lbl_801AAF10:
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x94(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x98(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x9c(r30)

lbl_801AAF34:
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AAF54
	lfs      f0, lbl_80519258@sda21(r2)
	stfs     f0, 0xa0(r30)
	stfs     f0, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	b        lbl_801AAF78

lbl_801AAF54:
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0xa0(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0xa4(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0xa8(r30)

lbl_801AAF78:
	li       r0, 0
	addi     r3, r1, 0x14
	stw      r0, 0x18(r30)
	bl       __ct__4ID32Fv
	mr       r4, r31
	addi     r3, r1, 0x14
	bl       read__4ID32FR6Stream
	lwz      r6, factory__Q24Game16GenObjectFactory@sda21(r13)
	li       r3, 0
	mr       r4, r3
	lwz      r28, 0x1c(r1)
	lwz      r0, 0(r6)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801AAFE8

lbl_801AAFB4:
	lwz      r5, 8(r6)
	lwzx     r0, r5, r4
	cmplw    r28, r0
	bne      lbl_801AAFDC
	slwi     r0, r3, 4
	add      r3, r5, r0
	lwz      r12, 4(r3)
	mtctr    r12
	bctrl
	b        lbl_801AAFEC

lbl_801AAFDC:
	addi     r4, r4, 0x10
	addi     r3, r3, 1
	bdnz     lbl_801AAFB4

lbl_801AAFE8:
	li       r3, 0

lbl_801AAFEC:
	stw      r3, 0x18(r30)
	lwz      r29, 0x18(r30)
	cmplwi   r29, 0
	beq      lbl_801AB094
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AB028
	addi     r3, r1, 8
	bl       __ct__4ID32Fv
	mr       r4, r31
	addi     r3, r1, 8
	bl       read__4ID32FR6Stream
	lwz      r0, 0x10(r1)
	stw      r0, 0x14(r29)
	b        lbl_801AB040

lbl_801AB028:
	mr       r3, r29
	lwz      r12, 0xc(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r29)

lbl_801AB040:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0xc(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AB080
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0xc(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_801AB08C

lbl_801AB080:
	mr       r3, r29
	mr       r4, r31
	bl       read__10ParametersFR6Stream

lbl_801AB08C:
	stw      r28, 0x1c(r30)
	b        lbl_801AB09C

lbl_801AB094:
	addi     r3, r1, 0x14
	bl       print__4ID32Fv

lbl_801AB09C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * write__Q24Game9GeneratorFR6Stream
 *
 * --INFO--
 * Address:	801AB0BC
 * Size:	00039C
 */
void Generator::write(Stream& output)
{
	output.textWriteTab(output.m_tabCount);
	ID32(GeneratorCurrentVersion).write(output);
	output.textWriteText("\t# version\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeShort(m_reservedNum);
	output.textWriteText("\t# reserved\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeShort(m_daysTillRessurection);
	output.textWriteText("\t# ïúäàì˙êî∞\r\n");

	if (ramMode == 0) {
		// generator files as stored on disc
		output.textWriteTab(output.m_tabCount);
		int i = 0;
		do {
			output.writeByte(m_genObjName[i]);
		} while (++i < sizeof(m_genObjName));
		output.textWriteText("\t# <%s>\r\n", m_genObjName);
	} else {
		// gencache?
		output.writeByte('\0');
		output.writeShort(_74);
		output.writeShort(_78);
		output.writeShort(m_dayLimitMaybe);
	}
	if (ramMode != 0) {
		output.writeShort((u16)m_position.x + m_offset.x);
		output.writeShort((u16)m_position.y + m_offset.y);
		output.writeShort((u16)m_position.z + m_offset.z);
	} else {
		output.textWriteTab(output.m_tabCount);
		// TODO: m_position.write()?
		output.writeFloat(m_position.x);
		output.writeFloat(m_position.y);
		output.writeFloat(m_position.z);
		output.textWriteText("\t# pos\r\n");

		output.textWriteTab(output.m_tabCount);
		// TODO: m_offset.write()?
		output.writeFloat(m_offset.x);
		output.writeFloat(m_offset.y);
		output.writeFloat(m_offset.z);
		output.textWriteText("\t# offset\r\n");
	}
	if (_18) {
		_18->write(output);
	} else {
		output.writeInt(0);
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r5, lbl_8047F668@ha
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r4
	stw      r30, 0x88(r1)
	mr       r30, r3
	mr       r3, r31
	stw      r29, 0x84(r1)
	addi     r29, r5, lbl_8047F668@l
	stw      r28, 0x80(r1)
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	lwz      r4, GeneratorCurrentVersion@sda21(r13)
	addi     r3, r1, 0x20
	bl       __ct__4ID32FUl
	mr       r4, r31
	addi     r3, r1, 0x20
	bl       write__4ID32FR6Stream
	mr       r3, r31
	addi     r4, r29, 0x6c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 0x5c(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x7c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r0, 0x70(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x8c
	crclr    6
	bl       textWriteText__6StreamFPce
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AB1C4
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	li       r28, 0

lbl_801AB190:
	addi     r0, r28, 0x20
	mr       r3, r31
	lbzx     r4, r30, r0
	bl       writeByte__6StreamFUc
	addi     r28, r28, 1
	cmpwi    r28, 0x20
	blt      lbl_801AB190
	mr       r3, r31
	addi     r4, r29, 0x9c
	addi     r5, r30, 0x20
	crclr    6
	bl       textWriteText__6StreamFPce
	b        lbl_801AB200

lbl_801AB1C4:
	mr       r3, r31
	li       r4, 0
	bl       writeByte__6StreamFUc
	lwz      r0, 0x74(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	lwz      r0, 0x78(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	lwz      r0, 0x84(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs

lbl_801AB200:
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AB2F4
	lfs      f0, 0x94(r30)
	lis      r0, 0x4330
	stw      r0, 0x38(r1)
	mr       r3, r31
	fctiwz   f1, f0
	lfd      f2, lbl_80519268@sda21(r2)
	lfs      f0, 0xa0(r30)
	stfd     f1, 0x30(r1)
	lwz      r0, 0x34(r1)
	extsh    r0, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x3c(r1)
	lfd      f1, 0x38(r1)
	fsubs    f1, f1, f2
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r4, 0x44(r1)
	bl       writeShort__6StreamFs
	lfs      f0, 0x98(r30)
	lis      r0, 0x4330
	stw      r0, 0x50(r1)
	mr       r3, r31
	fctiwz   f1, f0
	lfd      f2, lbl_80519268@sda21(r2)
	lfs      f0, 0xa4(r30)
	stfd     f1, 0x48(r1)
	lwz      r0, 0x4c(r1)
	extsh    r0, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x54(r1)
	lfd      f1, 0x50(r1)
	fsubs    f1, f1, f2
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r4, 0x5c(r1)
	bl       writeShort__6StreamFs
	lfs      f0, 0x9c(r30)
	lis      r0, 0x4330
	stw      r0, 0x68(r1)
	mr       r3, r31
	fctiwz   f1, f0
	lfd      f2, lbl_80519268@sda21(r2)
	lfs      f0, 0xa8(r30)
	stfd     f1, 0x60(r1)
	lwz      r0, 0x64(r1)
	extsh    r0, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x6c(r1)
	lfd      f1, 0x68(r1)
	fsubs    f1, f1, f2
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r4, 0x74(r1)
	bl       writeShort__6StreamFs
	b        lbl_801AB374

lbl_801AB2F4:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x94(r30)
	mr       r3, r31
	bl       writeFloat__6StreamFf
	lfs      f1, 0x98(r30)
	mr       r3, r31
	bl       writeFloat__6StreamFf
	lfs      f1, 0x9c(r30)
	mr       r3, r31
	bl       writeFloat__6StreamFf
	mr       r3, r31
	addi     r4, r29, 0xa8
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lfs      f1, 0xa0(r30)
	mr       r3, r31
	bl       writeFloat__6StreamFf
	lfs      f1, 0xa4(r30)
	mr       r3, r31
	bl       writeFloat__6StreamFf
	lfs      f1, 0xa8(r30)
	mr       r3, r31
	bl       writeFloat__6StreamFf
	mr       r3, r31
	addi     r4, r29, 0xb4
	crclr    6
	bl       textWriteText__6StreamFPce

lbl_801AB374:
	lwz      r29, 0x18(r30)
	cmplwi   r29, 0
	beq      lbl_801AB42C
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0x14
	bl       __ct__4ID32FUl
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r4, r31
	addi     r3, r1, 0x14
	bl       write__4ID32FR6Stream
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AB3DC
	mr       r3, r29
	lwz      r12, 0xc(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 8
	bl       __ct__4ID32FUl
	mr       r4, r31
	addi     r3, r1, 8
	bl       write__4ID32FR6Stream

lbl_801AB3DC:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0xc(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AB41C
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0xc(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801AB438

lbl_801AB41C:
	mr       r3, r29
	mr       r4, r31
	bl       write__10ParametersFR6Stream
	b        lbl_801AB438

lbl_801AB42C:
	mr       r3, r31
	li       r4, 0
	bl       writeInt__6StreamFi

lbl_801AB438:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * __ct__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AB458
 * Size:	000120
 */
GeneratorMgr::GeneratorMgr()
    : CNode("genMgr")
    , _34()
    , m_versionID()
    , _50()
{
	m_parentMgr      = nullptr;
	m_childMgr       = nullptr;
	m_nextMgr        = nullptr;
	_6D              = 0;
	m_startPos       = 0.0f;
	_60              = 0.0f;
	_64              = 0.0f;
	m_startDir       = 0.0f;
	m_generatorCount = 0;
	m_generator      = nullptr;
	_34.setID('v0.1');
	m_versionID.setID('v0.0');
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory == nullptr) {
		factory = new GenObjectFactoryFactory();
	}
	GenObjectFactory::factory = factory;
	_6C                       = 0;
	// TODO: Is there an erased parent type?
	m_name = "GeneratorMgr";
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__5CNode@l
	addi     r4, r2, lbl_80519270@sda21
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __vt__Q24Game12GeneratorMgr@ha
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q24Game12GeneratorMgr@l
	addi     r3, r30, 0x34
	stw      r5, 0x10(r30)
	stw      r5, 0xc(r30)
	stw      r5, 8(r30)
	stw      r5, 4(r30)
	stw      r4, 0x14(r30)
	stw      r0, 0(r30)
	bl       __ct__4ID32Fv
	addi     r3, r30, 0x40
	bl       __ct__4ID32Fv
	addi     r3, r30, 0x50
	bl       __ct__4ID32Fv
	li       r0, 0
	lis      r4, 0x76302E31@ha
	stw      r0, 0x20(r30)
	addi     r3, r30, 0x34
	lfs      f0, lbl_80519258@sda21(r2)
	addi     r4, r4, 0x76302E31@l
	stw      r0, 0x1c(r30)
	stw      r0, 0x18(r30)
	stb      r0, 0x6d(r30)
	stfs     f0, 0x5c(r30)
	stfs     f0, 0x60(r30)
	stfs     f0, 0x64(r30)
	stfs     f0, 0x68(r30)
	stw      r0, 0x4c(r30)
	stw      r0, 0x30(r30)
	bl       setID__4ID32FUl
	lis      r4, 0x76302E30@ha
	addi     r3, r30, 0x40
	addi     r4, r4, 0x76302E30@l
	bl       setID__4ID32FUl
	lwz      r0, factory__Q24Game16GenObjectFactory@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AB548
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801AB544
	li       r3, 0xc0
	bl       __nwa__FUl
	stw      r3, 8(r31)
	li       r3, 0xc
	li       r0, 0
	stw      r3, 4(r31)
	stw      r0, 0(r31)

lbl_801AB544:
	stw      r31, factory__Q24Game16GenObjectFactory@sda21(r13)

lbl_801AB548:
	li       r0, 0
	lis      r3, lbl_8047F728@ha
	stb      r0, 0x6c(r30)
	addi     r0, r3, lbl_8047F728@l
	mr       r3, r30
	stw      r0, 0x14(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AB578
 * Size:	00003C
 */
void GeneratorMgr::addMgr(Game::GeneratorMgr* newMgr)
{
	if (m_childMgr == nullptr) {
		m_childMgr          = newMgr;
		newMgr->m_parentMgr = this;
		return;
	}
	GeneratorMgr* speculativeChild = m_childMgr;
	// GeneratorMgr* certainChild;
	// while (speculativeChild ) {
	// 	certainChild = speculativeChild;
	// 	speculativeChild = certainChild->m_nextMgr;
	// }
	// certainChild->m_nextMgr = newMgr;
	while (speculativeChild->m_nextMgr) {
		speculativeChild = speculativeChild->m_nextMgr;
	}
	speculativeChild->m_nextMgr = newMgr;
	newMgr->m_parentMgr         = this;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
bool GeneratorMgr::isRootMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AB5B4
 * Size:	000148
 */
void GeneratorMgr::generate(void)
{
	for (Generator* gen = m_generator; gen != nullptr; gen = gen->_64) {
		gen->generate();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x30(r3)
	b        lbl_801AB6E0

lbl_801AB5CC:
	lwz      r4, 0x84(r31)
	cmpwi    r4, -1
	bne      lbl_801AB5E0
	li       r0, 0
	b        lbl_801AB600

lbl_801AB5E0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplw    r4, r0
	bge      lbl_801AB5FC
	li       r0, 1
	b        lbl_801AB600

lbl_801AB5FC:
	li       r0, 0

lbl_801AB600:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801AB618
	li       r0, 0
	stw      r0, 0x7c(r31)
	stw      r0, 0x6c(r31)
	b        lbl_801AB6DC

lbl_801AB618:
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801AB644
	li       r0, 0
	stw      r0, 0x7c(r31)
	stw      r0, 0x74(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	stw      r0, 0x78(r31)
	b        lbl_801AB65C

lbl_801AB644:
	lhz      r0, 0x5c(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801AB65C
	li       r0, 0
	stw      r0, 0x7c(r31)
	b        lbl_801AB6DC

lbl_801AB65C:
	li       r5, 0
	stw      r5, 0x6c(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	beq      lbl_801AB6DC
	lbz      r0, ramMode__Q24Game9Generator@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801AB6B0
	lhz      r0, 0x5c(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_801AB6B0
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x78(r31)
	lwz      r4, 0x40(r4)
	lwz      r0, 0x70(r31)
	lwz      r4, 0x218(r4)
	add      r0, r3, r0
	cmpw     r4, r0
	blt      lbl_801AB6B0
	stw      r4, 0x78(r31)
	stw      r5, 0x74(r31)

lbl_801AB6B0:
	lwz      r3, 0x18(r31)
	mr       r4, r31
	lwz      r12, 0xc(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x6c(r31)
	lwz      r3, 0x6c(r31)
	cmplwi   r3, 0
	beq      lbl_801AB6DC
	stw      r31, 0xc4(r3)

lbl_801AB6DC:
	lwz      r31, 0x64(r31)

lbl_801AB6E0:
	cmplwi   r31, 0
	bne      lbl_801AB5CC
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AB6FC
 * Size:	00001C
 */
void GeneratorMgr::setDayLimit(int dayLimit)
{
	for (Generator* generator = m_generator; generator != nullptr; generator = generator->_64) {
		generator->m_dayLimitMaybe = dayLimit;
	}
}

/*
 * --INFO--
 * Address:	801AB718
 * Size:	000098
 */
void GeneratorMgr::updateUseList()
{
	for (Generator* gen = m_generator; gen != nullptr; gen = gen->_64) {
		gen->updateUseList();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x30(r3)
	b        lbl_801AB794

lbl_801AB730:
	lwz      r4, 0x84(r31)
	cmpwi    r4, -1
	bne      lbl_801AB744
	li       r0, 0
	b        lbl_801AB764

lbl_801AB744:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplw    r4, r0
	bge      lbl_801AB760
	li       r0, 1
	b        lbl_801AB764

lbl_801AB760:
	li       r0, 0

lbl_801AB764:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801AB790
	lwz      r3, 0x18(r31)
	cmplwi   r3, 0
	beq      lbl_801AB790
	lwz      r12, 0xc(r3)
	mr       r4, r31
	li       r5, 1
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_801AB790:
	lwz      r31, 0x64(r31)

lbl_801AB794:
	cmplwi   r31, 0
	bne      lbl_801AB730
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void GeneratorMgr::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00055C
 */
void GeneratorMgr::render(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AB7B0
 * Size:	000008
 */
GeneratorMgr* GeneratorMgr::getNext() { return m_nextMgr; }

/*
 * --INFO--
 * Address:	801AB7B8
 * Size:	000008
 */
GeneratorMgr* GeneratorMgr::getChild() { return m_childMgr; }

/*
 * --INFO--
 * Address:	801AB7C0
 * Size:	00043C
 */
void GeneratorMgr::updateCursorPos(Vector3f& position)
{
	m_cursorPosition = position;
	if (getChild()) {
		getChild()->updateCursorPos(position);
	}
	if (getNext()) {
		getNext()->updateCursorPos(position);
	}
}

/*
 * Autogenerated here due to usage in recursive GeneratorMgr::updateCursorPos.
 *
 * --INFO--
 * Address:	801ABBFC
 * Size:	00001C
 */
// void Vector3f::operator=(const Vector3f&)
// {
// 	/*
// 	lfs      f0, 0(r4)
// 	lfs      f1, 4(r4)
// 	stfs     f0, 0(r3)
// 	lfs      f0, 8(r4)
// 	stfs     f1, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }

/*
 * read__Q24Game12GeneratorMgrFR6Streamb
 * --INFO--
 * Address:	801ABC18
 * Size:	0002F0
 */
void GeneratorMgr::read(Stream& input, bool)
{
	if (m_generator) {
		delete m_generator;
		m_generatorCount = 0;
	}

	m_versionID.read(input);
	m_startPos.read(input);
	if (m_versionID == 'v0.1') {
		m_startDir = input.readFloat();
	}
	m_generatorCount = input.readInt();
	m_generator      = nullptr;
	for (int i = 0; i < m_generatorCount; i++) {
		if (m_generator == nullptr) {
			m_generator = new Generator();
			m_generator->read(input);
			m_generator->m_mgr = this;
			generatorCache->addGenerator(m_generator);
		} else {
			Generator* newGenerator = new Generator();
			newGenerator->m_mgr     = this;
			newGenerator->read(input);
			Generator* next = m_generator;
			Generator* priorToNext;
			do {
				priorToNext = next;
				next        = priorToNext->_64;
			} while (priorToNext->_64 != nullptr);
			priorToNext->_64  = newGenerator;
			newGenerator->_60 = priorToNext;
			generatorCache->addGenerator(newGenerator);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	lwz      r3, 0x30(r3)
	cmplwi   r3, 0
	beq      lbl_801ABC68
	beq      lbl_801ABC60
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801ABC60:
	li       r0, 0
	stw      r0, 0x4c(r29)

lbl_801ABC68:
	mr       r4, r30
	addi     r3, r29, 0x40
	bl       read__4ID32FR6Stream
	lis      r4, 0x76302E30@ha
	addi     r3, r29, 0x40
	addi     r4, r4, 0x76302E30@l
	bl       __eq__4ID32FUl
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x5c(r29)
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x60(r29)
	mr       r3, r30
	bl       readFloat__6StreamFv
	lis      r4, 0x76302E31@ha
	stfs     f1, 0x64(r29)
	addi     r3, r29, 0x40
	addi     r4, r4, 0x76302E31@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801ABCCC
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x68(r29)

lbl_801ABCCC:
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 0x4c(r29)
	li       r0, 0
	li       r31, 0
	stw      r0, 0x30(r29)
	b        lbl_801ABEDC

lbl_801ABCE8:
	lwz      r0, 0x30(r29)
	cmplwi   r0, 0
	bne      lbl_801ABDDC
	li       r3, 0xb4
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801ABDB4
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game9Generator@ha
	addi     r3, r28, 0x40
	addi     r0, r4, __vt__Q24Game9Generator@l
	stw      r0, 0(r28)
	bl       __ct__4ID32Fv
	addi     r3, r28, 0x4c
	bl       __ct__4ID32Fv
	lfs      f0, lbl_80519258@sda21(r2)
	lis      r3, 0x5F5F5F5F@ha
	lis      r4, 0x20202020@ha
	li       r5, 0
	stfs     f0, 0x94(r28)
	addi     r0, r3, 0x5F5F5F5F@l
	addi     r3, r28, 0x40
	addi     r4, r4, 0x20202020@l
	stfs     f0, 0x98(r28)
	stfs     f0, 0x9c(r28)
	stw      r5, 0x18(r28)
	stw      r0, 0x1c(r28)
	sth      r5, 0x5c(r28)
	bl       setID__4ID32FUl
	lwz      r4, GeneratorCurrentVersion@sda21(r13)
	addi     r3, r28, 0x4c
	bl       setID__4ID32FUl
	addi     r3, r28, 0x20
	addi     r4, r2, lbl_8051925C@sda21
	bl       strcpy
	li       r4, 0
	li       r3, 1
	stw      r4, 0x64(r28)
	li       r0, -1
	stw      r4, 0x60(r28)
	stw      r4, 0x6c(r28)
	stw      r4, 0x7c(r28)
	stw      r4, 0x10(r28)
	stw      r4, 0xc(r28)
	stw      r4, 8(r28)
	stw      r4, 4(r28)
	stb      r3, 0xac(r28)
	stw      r0, 0x84(r28)
	stw      r4, 0x74(r28)
	stw      r4, 0x78(r28)
	stw      r4, 0x70(r28)

lbl_801ABDB4:
	stw      r28, 0x30(r29)
	mr       r4, r30
	lwz      r3, 0x30(r29)
	bl       read__Q24Game9GeneratorFR6Stream
	lwz      r3, 0x30(r29)
	stw      r29, 0x68(r3)
	lwz      r3, generatorCache__4Game@sda21(r13)
	lwz      r4, 0x30(r29)
	bl       addGenerator__Q24Game14GeneratorCacheFPQ24Game9Generator
	b        lbl_801ABED8

lbl_801ABDDC:
	li       r3, 0xb4
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801ABE9C
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game9Generator@ha
	addi     r3, r28, 0x40
	addi     r0, r4, __vt__Q24Game9Generator@l
	stw      r0, 0(r28)
	bl       __ct__4ID32Fv
	addi     r3, r28, 0x4c
	bl       __ct__4ID32Fv
	lfs      f0, lbl_80519258@sda21(r2)
	lis      r3, 0x5F5F5F5F@ha
	lis      r4, 0x20202020@ha
	li       r5, 0
	stfs     f0, 0x94(r28)
	addi     r0, r3, 0x5F5F5F5F@l
	addi     r3, r28, 0x40
	addi     r4, r4, 0x20202020@l
	stfs     f0, 0x98(r28)
	stfs     f0, 0x9c(r28)
	stw      r5, 0x18(r28)
	stw      r0, 0x1c(r28)
	sth      r5, 0x5c(r28)
	bl       setID__4ID32FUl
	lwz      r4, GeneratorCurrentVersion@sda21(r13)
	addi     r3, r28, 0x4c
	bl       setID__4ID32FUl
	addi     r3, r28, 0x20
	addi     r4, r2, lbl_8051925C@sda21
	bl       strcpy
	li       r4, 0
	li       r3, 1
	stw      r4, 0x64(r28)
	li       r0, -1
	stw      r4, 0x60(r28)
	stw      r4, 0x6c(r28)
	stw      r4, 0x7c(r28)
	stw      r4, 0x10(r28)
	stw      r4, 0xc(r28)
	stw      r4, 8(r28)
	stw      r4, 4(r28)
	stb      r3, 0xac(r28)
	stw      r0, 0x84(r28)
	stw      r4, 0x74(r28)
	stw      r4, 0x78(r28)
	stw      r4, 0x70(r28)

lbl_801ABE9C:
	stw      r29, 0x68(r28)
	mr       r3, r28
	mr       r4, r30
	bl       read__Q24Game9GeneratorFR6Stream
	lwz      r3, 0x30(r29)
	b        lbl_801ABEB8

lbl_801ABEB4:
	mr       r3, r0

lbl_801ABEB8:
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	bne      lbl_801ABEB4
	stw      r28, 0x64(r3)
	mr       r4, r28
	stw      r3, 0x60(r28)
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       addGenerator__Q24Game14GeneratorCacheFPQ24Game9Generator

lbl_801ABED8:
	addi     r31, r31, 1

lbl_801ABEDC:
	lwz      r0, 0x4c(r29)
	cmpw     r31, r0
	blt      lbl_801ABCE8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void GeneratorMgr::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ABF08
 * Size:	0000D8
 */
void Generator::doAnimation(void)
{
	// if (_18 != nullptr && _18->_20 != 0) {
	// }
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801ABFB0
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_801ABFB0
	lfs      f1, 0x9c(r31)
	addi     r4, r1, 0x14
	lfs      f0, 0xa8(r31)
	addi     r5, r1, 8
	lfs      f3, 0x98(r31)
	fadds    f4, f1, f0
	lfs      f2, 0xa4(r31)
	lfs      f1, 0x94(r31)
	lfs      f0, 0xa0(r31)
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x10(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 8(r1)
	lwz      r12, 0xc(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r31)
	addi     r3, r1, 0x14
	lwz      r4, 0x20(r4)
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x18(r31)
	lwz      r3, 0x20(r3)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801ABFB0:
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_801ABFCC
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801ABFCC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801ABFE0
 * Size:	000070
 */
void Generator::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801AC020
	lwz      r3, 0x20(r3)
	cmplwi   r3, 0
	beq      lbl_801AC020
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801AC020:
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_801AC03C
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801AC03C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AC050
 * Size:	000070
 */
void Generator::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801AC088
	lwz      r3, 0x20(r3)
	cmplwi   r3, 0
	beq      lbl_801AC088
	bl       setCurrentViewNo__Q28SysShape5ModelFUl

lbl_801AC088:
	lwz      r3, 0x64(r30)
	cmplwi   r3, 0
	beq      lbl_801AC0A8
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_801AC0A8:
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
 * Address:	801AC0C0
 * Size:	000060
 */
void Generator::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801AC0F0
	lwz      r3, 0x20(r3)
	cmplwi   r3, 0
	beq      lbl_801AC0F0
	bl       viewCalc__Q28SysShape5ModelFv

lbl_801AC0F0:
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_801AC10C
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801AC10C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * doAnimation__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AC120
 * Size:	00007C
 */
void GeneratorMgr::doAnimation(void)
{
	if (m_generator) {
		m_generator->doAnimation();
	}
	if (m_childMgr) {
		m_childMgr->doAnimation();
	}
	if (getNext()) {
		getNext()->doAnimation();
	}
}

/*
 * doAnimation__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AC19C
 * Size:	00007C
 */
void GeneratorMgr::doEntry(void)
{
	if (m_generator) {
		m_generator->doEntry();
	}
	if (m_childMgr) {
		m_childMgr->doEntry();
	}
	if (getNext()) {
		getNext()->doEntry();
	}
}

/*
 * doSetView__Q24Game12GeneratorMgrFi
 *
 * --INFO--
 * Address:	801AC218
 * Size:	000090
 */
void GeneratorMgr::doSetView(int index)
{
	if (m_generator) {
		m_generator->doSetView(index);
	}
	if (m_childMgr) {
		m_childMgr->doSetView(index);
	}
	if (getNext()) {
		getNext()->doSetView(index);
	}
}

/*
 * doViewCalc__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AC2A8
 * Size:	00007C
 */
void GeneratorMgr::doViewCalc(void)
{
	if (m_generator) {
		m_generator->doViewCalc();
	}
	if (m_childMgr) {
		m_childMgr->doViewCalc();
	}
	if (getNext()) {
		getNext()->doViewCalc();
	}
}

/*
 * --INFO--
 * Address:	801AC324
 * Size:	000060
 */
GeneratorMgr::~GeneratorMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801AC368
	lis      r5, __vt__Q24Game12GeneratorMgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game12GeneratorMgr@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801AC368
	mr       r3, r30
	bl       __dl__FPv

lbl_801AC368:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AC384
 * Size:	000004
 */
void GenObject::render(Graphics&, Game::Generator*) { }

/*
 * --INFO--
 * Address:	801AC388
 * Size:	000008
 */
J3DModelData* GenBase::getShape() { return nullptr; }

/*
 * --INFO--
 * Address:	801AC390
 * Size:	000004
 */
void GenBase::update(Game::Generator*) { }

/*
 * --INFO--
 * Address:	801AC394
 * Size:	000004
 */
void GenBase::render(Graphics&, Game::Generator*) { }

} // namespace Game

/*
 * --INFO--
 * Address:	801AC398
 * Size:	000028
 */
// void __sinit_gameGenerator_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804B55F0@ha
// 	stw      r0, lbl_80515A18@sda21(r13)
// 	stfsu    f0, lbl_804B55F0@l(r3)
// 	stfs     f0, lbl_80515A1C@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }
