#include "Dolphin/stl.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gameStages.h"
#include "JSystem/JUT/JUTException.h"
#include "stream.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481480
    lbl_80481480:
        .4byte 0x67656E65
        .4byte 0x7261746F
        .4byte 0x72436163
        .4byte 0x68650000
    .global lbl_80481490
    lbl_80481490:
        .4byte 0x67616D65
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x72436163
        .4byte 0x68652E63
        .4byte 0x70700000
        .4byte 0x6E6F2072
        .4byte 0x616D2067
        .4byte 0x656E6572
        .4byte 0x61746F72
        .4byte 0x20256420
        .4byte 0x25640A00
        .4byte 0x6C6F6164
        .4byte 0x435B2573
        .4byte 0x5D286E6F
        .4byte 0x2564293A
        .4byte 0x25730000
        .4byte 0x6C6F6164
        .4byte 0x43286E6F
        .4byte 0x2564290A
        .4byte 0x00000000
        .4byte 0x42656769
        .4byte 0x6E536176
        .4byte 0x653A3A43
        .4byte 0x61636865
        .4byte 0x20282564
        .4byte 0x29206973
        .4byte 0x20616C69
        .4byte 0x76652021
        .4byte 0x0A000000
        .4byte 0x42656769
        .4byte 0x6E536176
        .4byte 0x653A3A43
        .4byte 0x61636865
        .4byte 0x20282564
        .4byte 0x29206973
        .4byte 0x20696E76
        .4byte 0x616C6964
        .4byte 0x20210A00
    .global lbl_8048152C
    lbl_8048152C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80481538
    lbl_80481538:
        .4byte 0x2867656E
        .4byte 0x206E756D
        .4byte 0x62657220
        .4byte 0x6C617267
        .4byte 0x65202564
        .4byte 0x3E3D2564
        .4byte 0x0A000000
        .4byte 0x09232041
        .4byte 0x6C697665
        .4byte 0x0D0A0000
        .4byte 0x6E6F2063
        .4byte 0x61636865
        .4byte 0x203A2025
        .4byte 0x640A0000
        .4byte 0x09232044
        .4byte 0x6561640D
        .4byte 0x0A000000
        .4byte 0x09232068
        .4byte 0x65617053
        .4byte 0x697A650D
        .4byte 0x0A000000
        .4byte 0x09232066
        .4byte 0x7265654F
        .4byte 0x66667365
        .4byte 0x740D0A00
        .4byte 0x09232066
        .4byte 0x72656553
        .4byte 0x697A650D
        .4byte 0x0A000000
        .4byte 0x63616368
        .4byte 0x65202564
        .4byte 0x20697320
        .4byte 0x6E6F7420
        .4byte 0x696E2064
        .4byte 0x65616420
        .4byte 0x6C697374
        .4byte 0x0A000000
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x63616368
        .4byte 0x6520666C
        .4byte 0x61672825
        .4byte 0x78290A00
    .global lbl_804815E4
    lbl_804815E4:
        .4byte 0x436F7572
        .4byte 0x73654361
        .4byte 0x63686520
        .4byte 0x25640000
        .4byte 0x2320636F
        .4byte 0x75727365
        .4byte 0x696E6465
        .4byte 0x780D0A00
        .4byte 0x23206F66
        .4byte 0x66736574
        .4byte 0x0D0A0000
        .4byte 0x23207369
        .4byte 0x7A650D0A
        .4byte 0x00000000
        .4byte 0x23206E75
        .4byte 0x6D47656E
        .4byte 0x65726174
        .4byte 0x6F72730D
        .4byte 0x0A000000
        .4byte 0x23206765
        .4byte 0x6E657261
        .4byte 0x746F7253
        .4byte 0x697A650D
        .4byte 0x0A000000
        .4byte 0x23206E75
        .4byte 0x6D437265
        .4byte 0x61747572
        .4byte 0x65730D0A
        .4byte 0x00000000
        .4byte 0x23206372
        .4byte 0x65617475
        .4byte 0x72655369
        .4byte 0x7A650D0A
        .4byte 0x00000000
        .4byte 0x23206E75
        .4byte 0x6D50696B
        .4byte 0x69686561
        .4byte 0x64730D0A
        .4byte 0x00000000
        .4byte 0x23207069
        .4byte 0x6B696865
        .4byte 0x61645369
        .4byte 0x7A650D0A
        .4byte 0x00000000
        .4byte 0x4974656D
        .4byte 0x50696B69
        .4byte 0x48656164
        .4byte 0x3A3A496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x4974656D
        .4byte 0x496E6974
        .4byte 0x41726700

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game11CourseCache
    __vt__Q24Game11CourseCache:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11CourseCacheFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global generatorCache__4Game
    generatorCache__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519BC0
    lbl_80519BC0:
        .4byte 0x6E6F6E65
        .4byte 0x00000000
    .global lbl_80519BC8
    lbl_80519BC8:
        .4byte 0xBF800000
    .global lbl_80519BCC
    lbl_80519BCC:
        .4byte 0x0D0A0000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801F1908
 * Size:	000088
 */
GeneratorCache::GeneratorCache()
    : _00(-1)
    , _3C(-1)
    , m_generator()
{
	_00.m_child  = nullptr;
	_00.m_parent = nullptr;
	_00.m_prev   = nullptr;
	_00.m_next   = nullptr;
	_3C.m_child  = nullptr;
	_3C.m_parent = nullptr;
	_3C.m_prev   = nullptr;
	_3C.m_next   = nullptr;
	createHeap();
	generatorCache = this;
	_78            = nullptr;
	clearGeneratorList();
}

/*
 * --INFO--
 * Address:	801F1990
 * Size:	000060
 */
CourseCache::~CourseCache()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801F19D4
	lis      r5, __vt__Q24Game11CourseCache@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game11CourseCache@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801F19D4
	mr       r3, r30
	bl       __dl__FPv

lbl_801F19D4:
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
 * Address:	801F19F0
 * Size:	000098
 */
void GeneratorCache::clearCache()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801F1A40

lbl_801F1A14:
	mr       r3, r29
	mr       r4, r29
	mr       r5, r31
	bl       findCache__Q24Game14GeneratorCacheFRQ24Game11CourseCachei
	or.      r30, r3, r3
	beq      lbl_801F1A3C
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r29, 0x3c
	bl       add__5CNodeFP5CNode

lbl_801F1A3C:
	addi     r31, r31, 1

lbl_801F1A40:
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	blt      lbl_801F1A14
	mr       r3, r29
	bl       clearGeneratorList__Q24Game14GeneratorCacheFv
	li       r3, 0
	stw      r3, 0x84(r29)
	lwz      r0, 0x80(r29)
	stw      r0, 0x88(r29)
	stw      r3, 0x78(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
GeneratorCache::~GeneratorCache()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1A88
 * Size:	000018
 */
void GeneratorCache::clearGeneratorList()
{
	m_generator.m_child  = nullptr;
	m_generator.m_parent = nullptr;
	m_generator.m_prev   = nullptr;
	m_generator.m_next   = nullptr;
}

/*
 * --INFO--
 * Address:	801F1AA0
 * Size:	000078
 */
void GeneratorCache::addGenerator(Game::Generator* newGenerator)
{
	int count = 0;
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->m_next) {
		if (gen->_AC == 0) {
			count++;
		}
	}
	// TODO: Remove magic number
	// TODO: Move this to checkOverflow.
	if (count < 0x50) {
		m_generator.add(newGenerator);
	}
}

/*
 * --INFO--
 * Address:	801F1B18
 * Size:	000008
 */
Generator* GeneratorCache::getFirstGenerator() { return (Generator*)m_generator.m_child; }

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GeneratorCache::findRamGenerator(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1B20
 * Size:	000024
 */
int GeneratorCache::getTotalMePikmins()
{
	int count = 0;
	for (CourseCache* cache = (CourseCache*)_00.m_child; cache != nullptr; cache = (CourseCache*)cache->m_next) {
		count += cache->m_pikiheadCount;
	}
	return count;
	/*
	lwz      r4, 0x10(r3)
	li       r3, 0
	b        lbl_801F1B38

lbl_801F1B2C:
	lwz      r0, 0x34(r4)
	lwz      r4, 4(r4)
	add      r3, r3, r0

lbl_801F1B38:
	cmplwi   r4, 0
	bne      lbl_801F1B2C
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F1B44
 * Size:	000074
 */
int GeneratorCache::getColorMePikmins(int pikminType)
{
	int count = 0;
	for (CourseCache* cache = (CourseCache*)_00.m_child; cache != nullptr; cache = (CourseCache*)cache->m_next) {
		count += cache->getColorMePikmins(m_heapBuffer, pikminType);
	}
	return count;
}

/*
 * getColorMePikmins__Q24Game11CourseCacheFPUci
 *
 * --INFO--
 * Address:	801F1BB8
 * Size:	00009C
 */
int CourseCache::getColorMePikmins(unsigned char* buffer, int pikminType)
{
	int count = 0;
	RamStream stream(buffer + m_generatorSize + m_offset + m_creatureSize, m_pikiheadSize);
	for (int i = 0; i < m_pikiheadCount; i++) {
		u8 pikiheadFlags = stream.readByte();
		Vector3f position;
		position.read(stream);
		// TODO: Replace 0xf with define for ItemPikiheadTypeMask?
		if ((pikiheadFlags & 0xF) == (u8)pikminType) {
			count++;
		}
	}
	return count;
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	mr       r6, r4
	stw      r0, 0x454(r1)
	stmw     r27, 0x43c(r1)
	mr       r27, r3
	mr       r28, r5
	li       r30, 0
	lwz      r5, 0x28(r3)
	lwz      r0, 0x1c(r3)
	addi     r3, r1, 0x14
	lwz      r4, 0x30(r27)
	add      r0, r0, r5
	lwz      r5, 0x38(r27)
	add      r4, r0, r4
	add      r4, r6, r4
	bl       __ct__9RamStreamFPvi
	li       r29, 0
	b        lbl_801F1C30

lbl_801F1C04:
	addi     r3, r1, 0x14
	bl       readByte__6StreamFv
	clrlwi   r31, r3, 0x18
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	bl       "read__10Vector3<f>FR6Stream"
	clrlwi   r0, r31, 0x1c
	cmpw     r0, r28
	bne      lbl_801F1C2C
	addi     r30, r30, 1

lbl_801F1C2C:
	addi     r29, r29, 1

lbl_801F1C30:
	lwz      r0, 0x34(r27)
	cmpw     r29, r0
	blt      lbl_801F1C04
	mr       r3, r30
	lmw      r27, 0x43c(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F1C54
 * Size:	00009C
 */
void GeneratorCache::createHeap(void)
{
	m_heapBuffer = new u8[GENERATOR_CACHE_HEAP_SIZE];
	m_heapSize   = GENERATOR_CACHE_HEAP_SIZE;
	m_freeOffset = 0;
	m_freeSize   = m_heapSize;
	for (int i = 0; i < stageList->m_courseCount; i++) {
		_3C.add(new CourseCache(i));
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x0000A000@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r4, 0x0000A000@l
	bl       __nwa__FUl
	lis      r4, 0x0000A000@ha
	stw      r3, 0x7c(r30)
	addi     r3, r4, 0x0000A000@l
	li       r0, 0
	stw      r3, 0x80(r30)
	li       r31, 0
	stw      r0, 0x84(r30)
	lwz      r0, 0x80(r30)
	stw      r0, 0x88(r30)
	b        lbl_801F1CC8

lbl_801F1CA0:
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801F1CBC
	mr       r4, r31
	bl       __ct__Q24Game11CourseCacheFi
	mr       r4, r3

lbl_801F1CBC:
	addi     r3, r30, 0x3c
	bl       add__5CNodeFP5CNode
	addi     r31, r31, 1

lbl_801F1CC8:
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	blt      lbl_801F1CA0
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
 * Address:	........
 * Size:	000004
 */
void GeneratorCache::destroyHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1CF0
 * Size:	000038
 */
CourseCache* GeneratorCache::findCache(Game::CourseCache& haystack, int courseIndex)
{
	// TODO: Perhaps one check is checking the child before assigning?
	for (CourseCache* cache = (CourseCache*)haystack.m_child; cache != nullptr; cache = (CourseCache*)cache->m_next) {
		if (cache == nullptr) {
			return nullptr;
		}
		if (cache->m_courseIndex == courseIndex) {
			return cache;
		}
	}
	return nullptr;
	/*
	lwz      r3, 0x10(r4)
	b        lbl_801F1D18

lbl_801F1CF8:
	cmplwi   r3, 0
	bne      lbl_801F1D08
	li       r3, 0
	blr

lbl_801F1D08:
	lwz      r0, 0x18(r3)
	cmpw     r0, r5
	beqlr
	lwz      r3, 4(r3)

lbl_801F1D18:
	cmplwi   r3, 0
	bne      lbl_801F1CF8
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F1D28
 * Size:	000128
 */
void GeneratorCache::loadGenerators(int)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	stw      r31, 0x43c(r1)
	mr       r31, r3
	stw      r30, 0x438(r1)
	stw      r29, 0x434(r1)
	lwz      r3, 0x10(r3)
	b        lbl_801F1D70

lbl_801F1D4C:
	cmplwi   r3, 0
	bne      lbl_801F1D5C
	li       r3, 0
	b        lbl_801F1D7C

lbl_801F1D5C:
	lwz      r0, 0x18(r3)
	cmpw     r0, r4
	bne      lbl_801F1D6C
	b        lbl_801F1D7C

lbl_801F1D6C:
	lwz      r3, 4(r3)

lbl_801F1D70:
	cmplwi   r3, 0
	bne      lbl_801F1D4C
	li       r3, 0

lbl_801F1D7C:
	stw      r3, 0x78(r31)
	lwz      r5, 0x78(r31)
	cmplwi   r5, 0
	beq      lbl_801F1E34
	lwz      r4, 0x7c(r31)
	addi     r3, r1, 8
	lwz      r0, 0x1c(r5)
	lwz      r5, 0x20(r5)
	add      r4, r4, r0
	bl       __ct__9RamStreamFPvi
	li       r29, 0
	b        lbl_801F1E24

lbl_801F1DAC:
	li       r3, 0xb4
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801F1DC4
	bl       __ct__Q24Game9GeneratorFv
	mr       r30, r3

lbl_801F1DC4:
	li       r0, 1
	mr       r3, r30
	stb      r0, ramMode__Q24Game9Generator@sda21(r13)
	addi     r4, r1, 8
	bl       read__Q24Game9GeneratorFR6Stream
	li       r4, 0
	stb      r4, ramMode__Q24Game9Generator@sda21(r13)
	stw      r29, 0xb0(r30)
	stb      r4, 0xac(r30)
	lwz      r3, 0x9c(r31)
	b        lbl_801F1E04

lbl_801F1DF0:
	lbz      r0, 0xac(r3)
	cmplwi   r0, 0
	bne      lbl_801F1E00
	addi     r4, r4, 1

lbl_801F1E00:
	lwz      r3, 4(r3)

lbl_801F1E04:
	cmplwi   r3, 0
	bne      lbl_801F1DF0
	cmpwi    r4, 0x50
	bge      lbl_801F1E20
	mr       r4, r30
	addi     r3, r31, 0x8c
	bl       add__5CNodeFP5CNode

lbl_801F1E20:
	addi     r29, r29, 1

lbl_801F1E24:
	lwz      r3, 0x78(r31)
	lwz      r0, 0x24(r3)
	cmpw     r29, r0
	blt      lbl_801F1DAC

lbl_801F1E34:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F1E50
 * Size:	0001B8
 */
void GeneratorCache::loadCreatures(int)
{
	/*
	stwu     r1, -0x650(r1)
	mflr     r0
	stw      r0, 0x654(r1)
	stmw     r27, 0x63c(r1)
	mr       r31, r3
	lis      r3, lbl_80481480@ha
	addi     r30, r3, lbl_80481480@l
	lwz      r5, 0x10(r31)
	b        lbl_801F1E98

lbl_801F1E74:
	cmplwi   r5, 0
	bne      lbl_801F1E84
	li       r5, 0
	b        lbl_801F1EA4

lbl_801F1E84:
	lwz      r0, 0x18(r5)
	cmpw     r0, r4
	bne      lbl_801F1E94
	b        lbl_801F1EA4

lbl_801F1E94:
	lwz      r5, 4(r5)

lbl_801F1E98:
	cmplwi   r5, 0
	bne      lbl_801F1E74
	li       r5, 0

lbl_801F1EA4:
	stw      r5, 0x78(r31)
	lwz      r5, 0x78(r31)
	cmplwi   r5, 0
	beq      lbl_801F1FF4
	lwz      r4, 0x28(r5)
	addi     r3, r1, 0x214
	lwz      r0, 0x1c(r5)
	lwz      r6, 0x7c(r31)
	add      r4, r0, r4
	lwz      r5, 0x30(r5)
	add      r4, r6, r4
	bl       __ct__9RamStreamFPvi
	li       r28, 0
	b        lbl_801F1FD4

lbl_801F1EDC:
	addi     r3, r1, 0x214
	bl       readInt__6StreamFv
	lwz      r29, 0x9c(r31)
	mr       r27, r3
	b        lbl_801F1F10

lbl_801F1EF0:
	lbz      r0, 0xac(r29)
	cmplwi   r0, 0
	bne      lbl_801F1F0C
	lwz      r0, 0xb0(r29)
	cmpw     r0, r27
	bne      lbl_801F1F0C
	b        lbl_801F1F1C

lbl_801F1F0C:
	lwz      r29, 4(r29)

lbl_801F1F10:
	cmplwi   r29, 0
	bne      lbl_801F1EF0
	li       r29, 0

lbl_801F1F1C:
	cmplwi   r29, 0
	bne      lbl_801F1F40
	mr       r6, r28
	mr       r7, r27
	addi     r3, r30, 0x10
	addi     r5, r30, 0x28
	li       r4, 0x1ae
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1F40:
	mr       r3, r29
	addi     r4, r1, 0x214
	bl       loadCreature__Q24Game9GeneratorFR6Stream
	clrlwi.  r0, r3, 0x18
	bne      lbl_801F1FD0
	lwz      r0, 0x18(r29)
	cmplwi   r0, 0
	beq      lbl_801F1FB8
	addi     r3, r1, 0x14
	addi     r4, r2, lbl_80519BC0@sda21
	crclr    6
	bl       sprintf
	lwz      r3, 0x18(r29)
	addi     r4, r1, 0x14
	lwz      r12, 0xc(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r29)
	addi     r3, r1, 8
	lwz      r4, 0x10(r4)
	bl       __ct__4ID32FUl
	mr       r7, r27
	addi     r3, r30, 0x10
	addi     r5, r30, 0x40
	addi     r6, r1, 8
	addi     r8, r1, 0x14
	li       r4, 0x1c0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1FB8:
	mr       r6, r27
	addi     r3, r30, 0x10
	addi     r5, r30, 0x54
	li       r4, 0x1c2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1FD0:
	addi     r28, r28, 1

lbl_801F1FD4:
	lwz      r3, 0x78(r31)
	lwz      r0, 0x2c(r3)
	cmpw     r28, r0
	blt      lbl_801F1EDC
	mr       r3, r31
	bl       loadPikiheads__Q24Game14GeneratorCacheFv
	mr       r3, r31
	bl       slideCache__Q24Game14GeneratorCacheFv

lbl_801F1FF4:
	lmw      r27, 0x63c(r1)
	lwz      r0, 0x654(r1)
	mtlr     r0
	addi     r1, r1, 0x650
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2008
 * Size:	000114
 */
void GeneratorCache::loadPikiheads(void)
{
	/*
	stwu     r1, -0x480(r1)
	mflr     r0
	stw      r0, 0x484(r1)
	stfd     f31, 0x470(r1)
	psq_st   f31, 1144(r1), 0, qr0
	stmw     r25, 0x454(r1)
	mr       r31, r3
	addi     r3, r1, 0x28
	lwz      r5, 0x78(r31)
	lwz      r6, 0x7c(r31)
	lwz      r4, 0x28(r5)
	lwz      r0, 0x1c(r5)
	lwz      r7, 0x30(r5)
	add      r0, r0, r4
	lwz      r5, 0x38(r5)
	add      r4, r0, r7
	add      r4, r6, r4
	bl       __ct__9RamStreamFPvi
	lis      r6, "zero__10Vector3<f>"@ha
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11ItemInitArg@ha
	lis      r3, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f31, lbl_80519BC8@sda21(r2)
	addi     r27, r6, "zero__10Vector3<f>"@l
	addi     r28, r5, __vt__Q24Game15CreatureInitArg@l
	addi     r29, r4, __vt__Q24Game11ItemInitArg@l
	addi     r30, r3, __vt__Q34Game12ItemPikihead7InitArg@l
	li       r26, 0
	b        lbl_801F20F0

lbl_801F207C:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stw      r28, 8(r1)
	li       r5, 0
	lfs      f2, 0(r27)
	li       r6, -1
	stw      r29, 8(r1)
	li       r0, 1
	lfs      f1, 4(r27)
	mr       r25, r3
	stb      r5, 0x1c(r1)
	addi     r4, r1, 8
	lfs      f0, 8(r27)
	stw      r30, 8(r1)
	stw      r6, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stw      r5, 0x20(r1)
	stfs     f31, 0x24(r1)
	stb      r0, 0x1c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r25
	addi     r4, r1, 0x28
	bl       cacheLoad__Q34Game12ItemPikihead4ItemFR6Stream
	addi     r26, r26, 1

lbl_801F20F0:
	lwz      r3, 0x78(r31)
	lwz      r0, 0x34(r3)
	cmpw     r26, r0
	blt      lbl_801F207C
	psq_l    f31, 1144(r1), 0, qr0
	lfd      f31, 0x470(r1)
	lmw      r25, 0x454(r1)
	lwz      r0, 0x484(r1)
	mtlr     r0
	addi     r1, r1, 0x480
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F211C
 * Size:	0000C0
 */
void GeneratorCache::slideCache(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r3, 0x78(r3)
	lwz      r30, 0x20(r3)
	mr       r5, r3
	b        lbl_801F218C

lbl_801F2144:
	lwz      r3, 0x7c(r31)
	li       r6, 0
	lwz      r0, 0x1c(r5)
	add      r0, r3, r0
	subf     r3, r30, r0
	mr       r4, r0
	b        lbl_801F2174

lbl_801F2160:
	lbz      r0, 0(r4)
	addi     r6, r6, 1
	addi     r4, r4, 1
	stb      r0, 0(r3)
	addi     r3, r3, 1

lbl_801F2174:
	lwz      r0, 0x20(r5)
	cmpw     r6, r0
	blt      lbl_801F2160
	lwz      r0, 0x1c(r5)
	subf     r0, r30, r0
	stw      r0, 0x1c(r5)

lbl_801F218C:
	lwz      r5, 4(r5)
	cmplwi   r5, 0
	bne      lbl_801F2144
	lwz      r3, 0x78(r31)
	bl       del__5CNodeFv
	lwz      r4, 0x78(r31)
	addi     r3, r31, 0x3c
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x84(r31)
	subf     r0, r30, r0
	stw      r0, 0x84(r31)
	lwz      r0, 0x88(r31)
	add      r0, r0, r30
	stw      r0, 0x88(r31)
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
 * Address:	801F21DC
 * Size:	00004C
 */
void GeneratorCache::updateUseList()
{
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->m_next) {
		if (gen->_AC == 0) {
			gen->updateUseList();
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x9c(r3)
	b        lbl_801F220C

lbl_801F21F4:
	lbz      r0, 0xac(r31)
	cmplwi   r0, 0
	bne      lbl_801F2208
	mr       r3, r31
	bl       updateUseList__Q24Game9GeneratorFv

lbl_801F2208:
	lwz      r31, 4(r31)

lbl_801F220C:
	cmplwi   r31, 0
	bne      lbl_801F21F4
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2228
 * Size:	000078
 */
void GeneratorCache::createNumberGenerators(void)
{
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->m_next) {
		if (gen->_AC == 0 && (gen->m_reservedNum & 4U) != 0) {
			Generator::ramMode = 1;
			gen->generate();
			Generator::ramMode = 0;
		}
	}
}

/*
 * --INFO--
 * Address:	801F22A0
 * Size:	0000F8
 */
void GeneratorCache::beginSave(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_80481480@ha
	lwz      r6, 0x4c(r31)
	addi     r5, r3, lbl_80481480@l
	b        lbl_801F22E8

lbl_801F22C4:
	cmplwi   r6, 0
	bne      lbl_801F22D4
	li       r6, 0
	b        lbl_801F22F4

lbl_801F22D4:
	lwz      r0, 0x18(r6)
	cmpw     r0, r4
	bne      lbl_801F22E4
	b        lbl_801F22F4

lbl_801F22E4:
	lwz      r6, 4(r6)

lbl_801F22E8:
	cmplwi   r6, 0
	bne      lbl_801F22C4
	li       r6, 0

lbl_801F22F4:
	stw      r6, 0x78(r31)
	lwz      r0, 0x78(r31)
	cmplwi   r0, 0
	bne      lbl_801F2378
	lwz      r3, 0x10(r31)
	b        lbl_801F2330

lbl_801F230C:
	cmplwi   r3, 0
	bne      lbl_801F231C
	li       r3, 0
	b        lbl_801F233C

lbl_801F231C:
	lwz      r0, 0x18(r3)
	cmpw     r0, r4
	bne      lbl_801F232C
	b        lbl_801F233C

lbl_801F232C:
	lwz      r3, 4(r3)

lbl_801F2330:
	cmplwi   r3, 0
	bne      lbl_801F230C
	li       r3, 0

lbl_801F233C:
	cmplwi   r3, 0
	beq      lbl_801F2360
	mr       r6, r4
	addi     r3, r5, 0x10
	addi     r5, r5, 0x64
	li       r4, 0x220
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801F2378

lbl_801F2360:
	mr       r6, r4
	addi     r3, r5, 0x10
	addi     r5, r5, 0x88
	li       r4, 0x222
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F2378:
	lwz      r3, 0x78(r31)
	lwz      r4, 0x84(r31)
	bl       beginSave__Q24Game11CourseCacheFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2398
 * Size:	0000C8
 */
void GeneratorCache::endSave()
{
	P2ASSERTLINE(554, _78 != nullptr);
	CourseCache* cache = (CourseCache*)_3C.m_child;
	for (; cache != nullptr; cache = (CourseCache*)cache->m_next) {
		if (cache == nullptr) {
			break;
		}
		if (cache->m_courseIndex == _78->m_courseIndex) {
			break;
		}
	}
	// TODO: This is immediately after previous assert? How???
	P2ASSERTLINE(555, cache != nullptr);
	_78->del();
	_00.add(_78);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x78(r3)
	cmplwi   r0, 0
	bne      lbl_801F23D4
	lis      r3, lbl_80481490@ha
	lis      r5, lbl_8048152C@ha
	addi     r3, r3, lbl_80481490@l
	li       r4, 0x22a
	addi     r5, r5, lbl_8048152C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F23D4:
	lwz      r3, 0x78(r31)
	lwz      r4, 0x4c(r31)
	lwz      r3, 0x18(r3)
	b        lbl_801F2408

lbl_801F23E4:
	cmplwi   r4, 0
	bne      lbl_801F23F4
	li       r4, 0
	b        lbl_801F2414

lbl_801F23F4:
	lwz      r0, 0x18(r4)
	cmpw     r0, r3
	bne      lbl_801F2404
	b        lbl_801F2414

lbl_801F2404:
	lwz      r4, 4(r4)

lbl_801F2408:
	cmplwi   r4, 0
	bne      lbl_801F23E4
	li       r4, 0

lbl_801F2414:
	cmplwi   r4, 0
	bne      lbl_801F2438
	lis      r3, lbl_80481490@ha
	lis      r5, lbl_8048152C@ha
	addi     r3, r3, lbl_80481490@l
	li       r4, 0x22b
	addi     r5, r5, lbl_8048152C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F2438:
	lwz      r3, 0x78(r31)
	bl       del__5CNodeFv
	lwz      r4, 0x78(r31)
	mr       r3, r31
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2460
 * Size:	0000F0
 */
void GeneratorCache::saveGenerator(Game::Generator* generator)
{
	if (generator->isExpired()) {
		return;
	}
	if (generator->need_saveCreature()) {
		RamStream output(m_heapBuffer + m_freeOffset, m_freeSize);
		generator->m_generatorIndexMaybe = _78->m_generatorCount;
		Generator::ramMode               = 1;
		generator->write(output);
		Generator::ramMode = 0;
		m_freeOffset += output.m_position;
		m_freeSize -= output.m_position;
		_78->m_generatorCount++;
		_78->m_size += output.m_position;
		_78->m_generatorSize += output.m_position;
	}
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	mr       r31, r3
	stw      r30, 0x428(r1)
	mr       r30, r4
	lwz      r4, 0x84(r4)
	cmpwi    r4, -1
	beq      lbl_801F249C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplw    r0, r4
	bge      lbl_801F2538

lbl_801F249C:
	mr       r3, r30
	bl       need_saveCreature__Q24Game9GeneratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F2538
	lwz      r4, 0x7c(r31)
	addi     r3, r1, 8
	lwz      r0, 0x84(r31)
	lwz      r5, 0x88(r31)
	add      r4, r4, r0
	bl       __ct__9RamStreamFPvi
	lwz      r5, 0x78(r31)
	li       r0, 1
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r5, 0x24(r5)
	stw      r5, 0xb0(r30)
	stb      r0, ramMode__Q24Game9Generator@sda21(r13)
	bl       write__Q24Game9GeneratorFR6Stream
	li       r0, 0
	lwz      r5, 0x10(r1)
	stb      r0, ramMode__Q24Game9Generator@sda21(r13)
	lwz      r0, 0x84(r31)
	add      r0, r0, r5
	stw      r0, 0x84(r31)
	lwz      r0, 0x88(r31)
	subf     r0, r5, r0
	stw      r0, 0x88(r31)
	lwz      r4, 0x78(r31)
	lwz      r3, 0x24(r4)
	addi     r0, r3, 1
	stw      r0, 0x24(r4)
	lwz      r3, 0x78(r31)
	lwz      r0, 0x20(r3)
	add      r0, r0, r5
	stw      r0, 0x20(r3)
	lwz      r3, 0x78(r31)
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	stw      r0, 0x28(r3)

lbl_801F2538:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2550
 * Size:	000140
 */
void GeneratorCache::saveCreature(Game::Generator*)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	mr       r31, r3
	stw      r30, 0x428(r1)
	mr       r30, r4
	lwz      r0, 0x6c(r4)
	cmplwi   r0, 0
	beq      lbl_801F2678
	lwz      r4, 0x84(r30)
	cmpwi    r4, -1
	beq      lbl_801F259C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplw    r0, r4
	blt      lbl_801F259C
	b        lbl_801F2678

lbl_801F259C:
	lwz      r4, 0x7c(r31)
	addi     r3, r1, 8
	lwz      r0, 0x84(r31)
	lwz      r5, 0x88(r31)
	add      r4, r4, r0
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	mr       r3, r30
	stb      r0, ramMode__Q24Game9Generator@sda21(r13)
	bl       need_saveCreature__Q24Game9GeneratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F2618
	lwz      r4, 0xb0(r30)
	addi     r3, r1, 8
	bl       writeInt__6StreamFi
	mr       r3, r30
	addi     r4, r1, 8
	bl       saveCreature__Q24Game9GeneratorFR6Stream
	lwz      r3, 0x78(r31)
	lwz      r6, 0xb0(r30)
	lwz      r7, 0x24(r3)
	cmpw     r6, r7
	blt      lbl_801F2624
	lis      r3, lbl_80481490@ha
	lis      r4, lbl_80481538@ha
	addi     r5, r4, lbl_80481538@l
	addi     r3, r3, lbl_80481490@l
	li       r4, 0x2a0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801F2624

lbl_801F2618:
	li       r0, 0
	stb      r0, ramMode__Q24Game9Generator@sda21(r13)
	b        lbl_801F2678

lbl_801F2624:
	li       r0, 0
	lwz      r5, 0x10(r1)
	stb      r0, ramMode__Q24Game9Generator@sda21(r13)
	lwz      r0, 0x84(r31)
	add      r0, r0, r5
	stw      r0, 0x84(r31)
	lwz      r0, 0x88(r31)
	subf     r0, r5, r0
	stw      r0, 0x88(r31)
	lwz      r4, 0x78(r31)
	lwz      r3, 0x2c(r4)
	addi     r0, r3, 1
	stw      r0, 0x2c(r4)
	lwz      r3, 0x78(r31)
	lwz      r0, 0x20(r3)
	add      r0, r0, r5
	stw      r0, 0x20(r3)
	lwz      r3, 0x78(r31)
	lwz      r0, 0x30(r3)
	add      r0, r0, r5
	stw      r0, 0x30(r3)

lbl_801F2678:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2690
 * Size:	0002D0
 */
void GeneratorCache::savePikiheads(void)
{
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	stw      r0, 0x454(r1)
	stw      r31, 0x44c(r1)
	mr       r31, r3
	addi     r3, r1, 0x18
	stw      r30, 0x448(r1)
	stw      r29, 0x444(r1)
	lwz      r4, 0x7c(r31)
	lwz      r0, 0x84(r31)
	lwz      r5, 0x88(r31)
	add      r4, r4, r0
	bl       __ct__9RamStreamFPvi
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801F26D4
	addi     r3, r3, 0x30

lbl_801F26D4:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	stw      r0, 0x14(r1)
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801F2710
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801F2924

lbl_801F2710:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801F277C

lbl_801F2728:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801F2924
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801F277C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F2728
	b        lbl_801F2924

lbl_801F279C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F2840
	mr       r3, r30
	bl       needSave__Q34Game12ItemPikihead4ItemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F2840
	lwz      r29, 0x20(r1)
	mr       r3, r30
	addi     r4, r1, 0x18
	bl       cacheSave__Q34Game12ItemPikihead4ItemFR6Stream
	lwz      r3, 0x20(r1)
	lwz      r0, 0x84(r31)
	subf     r5, r29, r3
	add      r0, r0, r5
	stw      r0, 0x84(r31)
	lwz      r0, 0x88(r31)
	subf     r0, r5, r0
	stw      r0, 0x88(r31)
	lwz      r4, 0x78(r31)
	lwz      r3, 0x34(r4)
	addi     r0, r3, 1
	stw      r0, 0x34(r4)
	lwz      r3, 0x78(r31)
	lwz      r0, 0x20(r3)
	add      r0, r0, r5
	stw      r0, 0x20(r3)
	lwz      r3, 0x78(r31)
	lwz      r0, 0x38(r3)
	add      r0, r0, r5
	stw      r0, 0x38(r3)
	b        lbl_801F2868

lbl_801F2840:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F2868
	mr       r3, r30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_801F2868:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801F2894
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801F2924

lbl_801F2894:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801F2908

lbl_801F28B4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801F2924
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801F2908:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801F28B4

lbl_801F2924:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801F279C
	lwz      r0, 0x454(r1)
	lwz      r31, 0x44c(r1)
	lwz      r30, 0x448(r1)
	lwz      r29, 0x444(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GeneratorCache::checkOverflow(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F2960
 * Size:	000070
 */
CourseCache::CourseCache(int courseIndex)
    : CNode()
{
	m_courseIndex    = courseIndex;
	m_size           = 0;
	m_offset         = 0;
	m_generatorCount = 0;
	m_generatorSize  = 0;
	m_creatureCount  = 0;
	m_creatureSize   = 0;
	m_pikiheadCount  = 0;
	m_pikiheadSize   = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game11CourseCache@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game11CourseCache@l
	mr       r3, r30
	stw      r4, 0(r30)
	stw      r31, 0x18(r30)
	stw      r0, 0x20(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x24(r30)
	stw      r0, 0x28(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * beginSave__Q24Game11CourseCacheFi
 * --INFO--
 * Address:	801F29D0
 * Size:	000028
 */
void CourseCache::beginSave(int offset)
{
	m_offset         = offset;
	m_size           = 0;
	m_generatorCount = 0;
	m_generatorSize  = 0;
	m_creatureCount  = 0;
	m_creatureSize   = 0;
	m_pikiheadCount  = 0;
	m_pikiheadSize   = 0;
}

/*
 * --INFO--
 * Address:	801F29F8
 * Size:	000234
 */
void GeneratorCache::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80481480@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	mr       r31, r4
	li       r28, 0
	addi     r29, r5, lbl_80481480@l
	b        lbl_801F2B24

lbl_801F2A20:
	lwz      r3, 0x10(r30)
	b        lbl_801F2A4C

lbl_801F2A28:
	cmplwi   r3, 0
	bne      lbl_801F2A38
	li       r3, 0
	b        lbl_801F2A58

lbl_801F2A38:
	lwz      r0, 0x18(r3)
	cmpw     r0, r28
	bne      lbl_801F2A48
	b        lbl_801F2A58

lbl_801F2A48:
	lwz      r3, 4(r3)

lbl_801F2A4C:
	cmplwi   r3, 0
	bne      lbl_801F2A28
	li       r3, 0

lbl_801F2A58:
	cmplwi   r3, 0
	mr       r27, r3
	beq      lbl_801F2A90
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	li       r4, 0
	bl       writeByte__6StreamFUc
	mr       r3, r31
	addi     r4, r29, 0xd4
	crclr    6
	bl       textWriteText__6StreamFPce
	b        lbl_801F2B14

lbl_801F2A90:
	lwz      r3, 0x4c(r30)
	b        lbl_801F2ABC

lbl_801F2A98:
	cmplwi   r3, 0
	bne      lbl_801F2AA8
	li       r3, 0
	b        lbl_801F2AC8

lbl_801F2AA8:
	lwz      r0, 0x18(r3)
	cmpw     r0, r28
	bne      lbl_801F2AB8
	b        lbl_801F2AC8

lbl_801F2AB8:
	lwz      r3, 4(r3)

lbl_801F2ABC:
	cmplwi   r3, 0
	bne      lbl_801F2A98
	li       r3, 0

lbl_801F2AC8:
	cmplwi   r3, 0
	mr       r27, r3
	bne      lbl_801F2AEC
	mr       r6, r28
	addi     r3, r29, 0x10
	addi     r5, r29, 0xe0
	li       r4, 0x3b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F2AEC:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	li       r4, 0xff
	bl       writeByte__6StreamFUc
	mr       r3, r31
	addi     r4, r29, 0xf0
	crclr    6
	bl       textWriteText__6StreamFPce

lbl_801F2B14:
	mr       r3, r27
	mr       r4, r31
	bl       write__Q24Game11CourseCacheFR6Stream
	addi     r28, r28, 1

lbl_801F2B24:
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r28, r0
	blt      lbl_801F2A20
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x80(r30)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0xfc
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x84(r30)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x10c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x88(r30)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x11c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r27, 0x80(r30)
	li       r28, 0
	b        lbl_801F2C10

lbl_801F2BB8:
	cmpwi    r27, 0x40
	li       r29, 0x40
	bge      lbl_801F2BC8
	mr       r29, r27

lbl_801F2BC8:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	li       r26, 0
	b        lbl_801F2BF4

lbl_801F2BDC:
	lwz      r4, 0x7c(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	addi     r28, r28, 1
	bl       writeByte__6StreamFUc
	addi     r26, r26, 1

lbl_801F2BF4:
	cmpw     r26, r29
	blt      lbl_801F2BDC
	mr       r3, r31
	addi     r4, r2, lbl_80519BCC@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	subf     r27, r29, r27

lbl_801F2C10:
	cmpwi    r27, 0
	bgt      lbl_801F2BB8
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F2C2C
 * Size:	0002B0
 */
void GeneratorCache::read(Stream&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, lbl_80481480@ha
	stw      r0, 0x64(r1)
	stmw     r26, 0x48(r1)
	mr       r30, r3
	mr       r31, r4
	li       r28, 0
	addi     r29, r5, lbl_80481480@l
	b        lbl_801F2CAC

lbl_801F2C54:
	lwz      r27, 0x10(r30)
	b        lbl_801F2C80

lbl_801F2C5C:
	cmplwi   r27, 0
	bne      lbl_801F2C6C
	li       r27, 0
	b        lbl_801F2C8C

lbl_801F2C6C:
	lwz      r0, 0x18(r27)
	cmpw     r0, r28
	bne      lbl_801F2C7C
	b        lbl_801F2C8C

lbl_801F2C7C:
	lwz      r27, 4(r27)

lbl_801F2C80:
	cmplwi   r27, 0
	bne      lbl_801F2C5C
	li       r27, 0

lbl_801F2C8C:
	cmplwi   r27, 0
	beq      lbl_801F2CA8
	mr       r3, r27
	bl       del__5CNodeFv
	mr       r4, r27
	addi     r3, r30, 0x3c
	bl       add__5CNodeFP5CNode

lbl_801F2CA8:
	addi     r28, r28, 1

lbl_801F2CAC:
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r28, r0
	blt      lbl_801F2C54
	li       r4, 0
	addi     r3, r1, 8
	stw      r4, 0x9c(r30)
	stw      r4, 0x98(r30)
	stw      r4, 0x94(r30)
	stw      r4, 0x90(r30)
	stw      r4, 0x84(r30)
	lwz      r0, 0x80(r30)
	stw      r0, 0x88(r30)
	stw      r4, 0x78(r30)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game11CourseCache@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game11CourseCache@l
	li       r3, -1
	stw      r4, 8(r1)
	li       r26, 0
	stw      r3, 0x20(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x40(r1)
	b        lbl_801F2DF4

lbl_801F2D28:
	mr       r3, r31
	bl       readByte__6StreamFv
	lwz      r28, 0x4c(r30)
	clrlwi   r27, r3, 0x18
	b        lbl_801F2D60

lbl_801F2D3C:
	cmplwi   r28, 0
	bne      lbl_801F2D4C
	li       r28, 0
	b        lbl_801F2D6C

lbl_801F2D4C:
	lwz      r0, 0x18(r28)
	cmpw     r0, r26
	bne      lbl_801F2D5C
	b        lbl_801F2D6C

lbl_801F2D5C:
	lwz      r28, 4(r28)

lbl_801F2D60:
	cmplwi   r28, 0
	bne      lbl_801F2D3C
	li       r28, 0

lbl_801F2D6C:
	cmplwi   r28, 0
	bne      lbl_801F2D8C
	mr       r6, r26
	addi     r3, r29, 0x10
	addi     r5, r29, 0x12c
	li       r4, 0x3f1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F2D8C:
	mr       r3, r28
	mr       r4, r31
	bl       read__Q24Game11CourseCacheFR6Stream
	cmplwi   r27, 0
	bne      lbl_801F2DB8
	mr       r3, r28
	bl       del__5CNodeFv
	mr       r4, r28
	addi     r3, r1, 8
	bl       add__5CNodeFP5CNode
	b        lbl_801F2DF0

lbl_801F2DB8:
	cmplwi   r27, 0xff
	bne      lbl_801F2DD8
	mr       r3, r28
	bl       del__5CNodeFv
	mr       r4, r28
	addi     r3, r30, 0x3c
	bl       add__5CNodeFP5CNode
	b        lbl_801F2DF0

lbl_801F2DD8:
	mr       r6, r27
	addi     r3, r29, 0x10
	addi     r5, r29, 0x14c
	li       r4, 0x3fb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F2DF0:
	addi     r26, r26, 1

lbl_801F2DF4:
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r26, r0
	blt      lbl_801F2D28
	lwz      r0, 0x18(r1)
	b        lbl_801F2E5C

lbl_801F2E0C:
	lwz      r4, 0x18(r1)
	li       r3, -1
	li       r26, 0
	b        lbl_801F2E34

lbl_801F2E1C:
	lwz      r0, 0x1c(r4)
	cmplw    r3, r0
	ble      lbl_801F2E30
	mr       r3, r0
	mr       r26, r4

lbl_801F2E30:
	lwz      r4, 4(r4)

lbl_801F2E34:
	cmplwi   r4, 0
	bne      lbl_801F2E1C
	cmplwi   r26, 0
	beq      lbl_801F2E58
	mr       r3, r26
	bl       del__5CNodeFv
	mr       r3, r30
	mr       r4, r26
	bl       add__5CNodeFP5CNode

lbl_801F2E58:
	lwz      r0, 0x18(r1)

lbl_801F2E5C:
	cmplwi   r0, 0
	bne      lbl_801F2E0C
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x80(r30)
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x84(r30)
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x88(r30)
	li       r26, 0
	b        lbl_801F2EA4

lbl_801F2E90:
	mr       r3, r31
	bl       readByte__6StreamFv
	lwz      r4, 0x7c(r30)
	stbx     r3, r4, r26
	addi     r26, r26, 1

lbl_801F2EA4:
	lwz      r0, 0x80(r30)
	cmpw     r26, r0
	blt      lbl_801F2E90
	lis      r4, __vt__Q24Game11CourseCache@ha
	addi     r3, r1, 8
	addi     r0, r4, __vt__Q24Game11CourseCache@l
	li       r4, 0
	stw      r0, 8(r1)
	bl       __dt__5CNodeFv
	lmw      r26, 0x48(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * write__Q24Game11CourseCacheFR6Stream
 * --INFO--
 * Address:	801F2EDC
 * Size:	0001D4
 */
void CourseCache::write(Stream& output)
{
	char header[256];

	sprintf(header, "CourseCache %d", m_courseIndex);
	output.textBeginGroup(header);

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_courseIndex);
	output.textWriteText("# courseindex\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_offset);
	output.textWriteText("# offset\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_size);
	output.textWriteText("# size\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_generatorCount);
	output.textWriteText("# numGenerators\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_generatorSize);
	output.textWriteText("# generatorSize\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_creatureCount);
	output.textWriteText("# numCreatures\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_creatureSize);
	output.textWriteText("# creatureSize\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_pikiheadCount);
	output.textWriteText("# numPikiheads\r\n");

	output.textWriteTab(output.m_tabCount);
	output.writeInt(m_pikiheadSize);
	output.textWriteText("# pikiheadSize\r\n");

	output.textEndGroup();
}

/*
 * read__Q24Game11CourseCacheFR6Stream
 * --INFO--
 * Address:	801F30B0
 * Size:	0000BC
 */
void CourseCache::read(Stream& input)
{
#if MATCHING
	// Why would you do this? I guess maybe to print out to console what's being
	// parsed?
	char header[256];
	sprintf(header, "CourseCache %d", m_courseIndex);
#endif
	m_courseIndex    = input.readInt();
	m_offset         = input.readInt();
	m_size           = input.readInt();
	m_generatorCount = input.readInt();
	m_generatorSize  = input.readInt();
	m_creatureCount  = input.readInt();
	m_creatureSize   = input.readInt();
	m_pikiheadCount  = input.readInt();
	m_pikiheadSize   = input.readInt();
}
} // namespace Game
