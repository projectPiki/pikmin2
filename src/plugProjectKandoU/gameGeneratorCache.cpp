#include "Game/gameGeneratorCache.h"
#include "Game/gameStages.h"
#include "Game/Entities/ItemPikihead.h"

namespace Game {

static const char className[] = "generatorCache";

GeneratorCache* generatorCache;

/*
 * --INFO--
 * Address:	801F1908
 * Size:	000088
 */
GeneratorCache::GeneratorCache()
    : mRootCache(-1)
    , mFreeCache(-1)
    , mGenerator()
{
	mRootCache.clearRelations();
	mFreeCache.clearRelations();
	createHeap();
	generatorCache = this;
	mCurrentCache  = nullptr;
	clearGeneratorList();
}

/*
 * --INFO--
 * Address:	801F19F0
 * Size:	000098
 */
void GeneratorCache::clearCache()
{
	for (int i = 0; i < stageList->mCourseCount; i++) {
		CourseCache* course = findCache(mRootCache, i);
		if (course) {
			course->del();
			mFreeCache.add(course);
		}
	}

	clearGeneratorList();
	mFreeOffset   = 0;
	mFreeSize     = mHeapSize;
	mCurrentCache = nullptr;
}

/*
 * --INFO--
 * Address:	801F1A88
 * Size:	000018
 */
void GeneratorCache::clearGeneratorList() { mGenerator.clearRelations(); }

/*
 * --INFO--
 * Address:	801F1AA0
 * Size:	000078
 */
void GeneratorCache::addGenerator(Game::Generator* newGenerator)
{
	int count = 0;
	FOREACH_NODE(Generator, getFirstGenerator(), gen)
	{
		if (gen->_AC == 0) {
			count++;
		}
	}
	// TODO: Remove magic number
	// TODO: Move this to checkOverflow.
	if (count < 80) {
		mGenerator.add(newGenerator);
	}
}

/*
 * --INFO--
 * Address:	801F1B18
 * Size:	000008
 */
Generator* GeneratorCache::getFirstGenerator() { return (Generator*)mGenerator.mChild; }

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
Generator* GeneratorCache::findRamGenerator(int index)
{
	FOREACH_NODE(Generator, mGenerator.mChild, gen)
	{
		if (gen->_AC == 0 && gen->mIndex == index) {
			return gen;
		}
	}
	return nullptr;
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
	FOREACH_NODE(CourseCache, mRootCache.mChild, cache) { count += cache->mPikiheadCount; }
	return count;
}

/*
 * --INFO--
 * Address:	801F1B44
 * Size:	000074
 */
int GeneratorCache::getColorMePikmins(int pikminType)
{
	int count = 0;
	FOREACH_NODE(CourseCache, mRootCache.mChild, cache) { count += cache->getColorMePikmins(mHeapBuffer, pikminType); }
	return count;
}

/*
 * getColorMePikmins__Q24Game11CourseCacheFPUci
 *
 * --INFO--
 * Address:	801F1BB8
 * Size:	00009C
 */
int CourseCache::getColorMePikmins(u8* buffer, int pikminType)
{
	int pikiheadFlags = 0;
	int count         = 0;
	RamStream stream(&buffer[mCreatureSize + mOffset + mGeneratorSize], mPikiheadSize);
	for (int i = 0; i < mPikiheadCount; i++) {
		pikiheadFlags = stream.readByte();
		Vector3f position;
		position.read(stream);
		// TODO: Replace 0xf with define for ItemPikiheadTypeMask?
		if ((pikiheadFlags & 0xF) == pikminType) {
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
void GeneratorCache::createHeap()
{
	mHeapBuffer = new u8[GENERATOR_CACHE_HEAP_SIZE];
	mHeapSize   = GENERATOR_CACHE_HEAP_SIZE;
	mFreeOffset = 0;
	mFreeSize   = mHeapSize;
	for (int i = 0; i < stageList->mCourseCount; i++) {
		mFreeCache.add(new CourseCache(i));
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void GeneratorCache::destroyHeap()
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
	FOREACH_NODE(CourseCache, haystack.mChild, cache)
	{
		if (cache == nullptr) {
			return nullptr;
		}
		if (cache->mCourseIndex == courseIndex) {
			return cache;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801F1D28
 * Size:	000128
 */
void GeneratorCache::loadGenerators(int courseIndex)
{
	mCurrentCache = findCache(mRootCache, courseIndex);
	if (mCurrentCache) {
		RamStream input(mHeapBuffer + mCurrentCache->mOffset, mCurrentCache->mSize);
		for (int i = 0; i < mCurrentCache->mGeneratorCount; i++) {
			Generator* generator = new Generator;

			Generator::ramMode = 1;
			generator->read(input);
			int v1             = 0;
			Generator::ramMode = 0;

			generator->mIndex = i;
			generator->_AC    = 0;

			FOREACH_NODE(Generator, mGenerator.mChild, child)
			{
				if (child->_AC == 0) {
					v1++;
				}
			}
			if (v1 < 80) {
				mGenerator.add(generator);
			}
		}
	}
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
void GeneratorCache::loadCreatures(int courseIndex)
{
	mCurrentCache = findCache(mRootCache, courseIndex);
	if (mCurrentCache) {
		RamStream input(mHeapBuffer + mCurrentCache->mGeneratorSize + mCurrentCache->mOffset, mCurrentCache->mCreatureSize);
		for (int i = 0; i < mCurrentCache->mCreatureCount; i++) {
			int id         = input.readInt();
			Generator* gen = findRamGenerator(id);
			JUT_ASSERTLINE(430, gen, "no ram generator %d %d\n", i, id);

			bool created = gen->loadCreature(input);
			if (!created) {
				if (gen->mObject) {
					char buf[512];
					sprintf(buf, "none");
					gen->mObject->getDebugInfo(buf);
					ID32 objID(gen->mObject->mTypeID);
					JUT_PANICLINE(448, "loadC[%s](no%d):%s", objID.getID(), id, buf);
				}
				JUT_PANICLINE(450, "loadC(no%d)\n", id);
			}
		}
		loadPikiheads();
		slideCache();
	}
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
void GeneratorCache::loadPikiheads()
{
	CourseCache* cache = mCurrentCache;
	RamStream input(mHeapBuffer + cache->mGeneratorSize + cache->mOffset + cache->mCreatureSize, cache->mPikiheadSize);
	for (int i = 0; i < mCurrentCache->mPikiheadCount; i++) {
		ItemPikihead::Item* piki = ItemPikihead::mgr->birth();
		ItemPikihead::InitArg arg;
		arg.mIsAlreadyBuried = true;
		piki->init(&arg);
		piki->cacheLoad(input);
	}

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
void GeneratorCache::slideCache()
{
	int size = mCurrentCache->mSize;
	FOREACH_NODE(CourseCache, mCurrentCache->mChild, cache)
	{
		// wackness in here
		cache->mOffset -= size;
	}

	mCurrentCache->del();
	mRootCache.add(mCurrentCache);
	mFreeOffset -= size;
	mFreeSize += size;
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
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->mNext) {
		if (gen->_AC == 0) {
			gen->updateUseList();
		}
	}
}

/*
 * --INFO--
 * Address:	801F2228
 * Size:	000078
 */
void GeneratorCache::createNumberGenerators()
{
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->mNext) {
		if (gen->_AC == 0 && (gen->mReservedNum & 4U) != 0) {
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
void GeneratorCache::beginSave(int courseIndex)
{
	mCurrentCache = findCache(mFreeCache, courseIndex);

	if (!mCurrentCache) {
		CourseCache* cache = findCache(mRootCache, courseIndex);

		if (cache) {
			JUT_PANICLINE(544, "BeginSave::Cache (%d) is alive !\n", courseIndex);
		} else {
			JUT_PANICLINE(546, "BeginSave::Cache (%d) is invalid !\n", courseIndex);
		}
	}

	mCurrentCache->beginSave(mFreeOffset);
}

/*
 * --INFO--
 * Address:	801F2398
 * Size:	0000C8
 */
void GeneratorCache::endSave()
{
	P2ASSERTLINE(554, mCurrentCache);
	P2ASSERTLINE(555, findCache(mFreeCache, mCurrentCache->mCourseIndex));
	mCurrentCache->del();
	mRootCache.add(mCurrentCache);
}

/*
 * --INFO--
 * Address:	801F2460
 * Size:	0000F0
 */
void GeneratorCache::saveGenerator(Generator* generator)
{
	if (generator->mDayLimit == -1 || gameSystem->mTimeMgr->mDayCount < generator->mDayLimit) {
		if (generator->need_saveCreature()) {
			RamStream output(mHeapBuffer + mFreeOffset, mFreeSize);
			generator->mIndex  = mCurrentCache->mGeneratorCount;
			Generator::ramMode = 1;
			generator->write(output);
			Generator::ramMode = 0;
			mFreeOffset += output.mPosition;
			mFreeSize -= output.mPosition;
			mCurrentCache->mGeneratorCount++;
			mCurrentCache->mSize += output.mPosition;
			mCurrentCache->mGeneratorSize += output.mPosition;
		}
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
void GeneratorCache::saveCreature(Generator* gen)
{
	if (gen->mCreature && (gen->mDayLimit == -1 || gameSystem->mTimeMgr->mDayCount < gen->mDayLimit)) {
		RamStream output(mHeapBuffer + mFreeOffset, mFreeSize);
		Generator::ramMode = 1;
		if (gen->need_saveCreature()) {
			output.writeInt(gen->mIndex);
			gen->saveCreature(output);

			JUT_ASSERTLINE(672, mCurrentCache->mGeneratorCount < gen->mIndex, "(gen number large %d>=%d\n", mCurrentCache->mGeneratorCount,
			               gen->mIndex);
			Generator::ramMode = 0;
		} else {
			Generator::ramMode = 0;
		}
		int size = output.mPosition;
		mFreeOffset += size;
		mFreeSize -= size;
		mCurrentCache->mCreatureCount++;
		mCurrentCache->mSize += size;
		mCurrentCache->mGeneratorSize += size;
	}
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
void GeneratorCache::savePikiheads()
{
	RamStream output(mHeapBuffer + mFreeOffset, mFreeSize);

	Iterator<ItemPikihead::Item> iterator(ItemPikihead::mgr);
	CI_LOOP(iterator)
	{
		ItemPikihead::Item* obj = *iterator;
		if (obj->isAlive() && obj->needSave()) {
			int size = output.mPosition;
			obj->cacheSave(output);
			size -= output.mPosition;
			mFreeOffset += size;
			mFreeSize -= size;
			mCurrentCache->mPikiheadCount++;
			mCurrentCache->mSize += size;
			mCurrentCache->mPikiheadSize += size;
		} else {
			if (obj->isAlive()) {
				obj->kill(nullptr);
			}
		}
	}

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
void GeneratorCache::checkOverflow()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F2960
 * Size:	000070
 */
CourseCache::CourseCache(int courseIndex)
{
	mCourseIndex    = courseIndex;
	mSize           = 0;
	mOffset         = 0;
	mGeneratorCount = 0;
	mGeneratorSize  = 0;
	mCreatureCount  = 0;
	mCreatureSize   = 0;
	mPikiheadCount  = 0;
	mPikiheadSize   = 0;
}

/*
 * beginSave__Q24Game11CourseCacheFi
 * --INFO--
 * Address:	801F29D0
 * Size:	000028
 */
void CourseCache::beginSave(int offset)
{
	mOffset         = offset;
	mSize           = 0;
	mGeneratorCount = 0;
	mGeneratorSize  = 0;
	mCreatureCount  = 0;
	mCreatureSize   = 0;
	mPikiheadCount  = 0;
	mPikiheadSize   = 0;
}

/*
 * --INFO--
 * Address:	801F29F8
 * Size:	000234
 */
void GeneratorCache::write(Stream& output)
{
	for (int i = 0; i < stageList->getCourseCount(); i++) {

		CourseCache* cache = findCache(mFreeCache, i);
		if (cache) {
			output.textWriteTab(output.mTabCount);
			output.writeByte(0);
			output.textWriteText("\t# Alive\r\n");

		} else {
			cache = findCache(mRootCache, i);

			JUT_ASSERTLINE(945, cache, "no cache : %d\n", i);
			output.textWriteTab(output.mTabCount);
			output.writeByte(255);
			output.textWriteText("\t# Dead\r\n");
		}
		cache->write(output);
	}

	output.textWriteTab(output.mTabCount);
	output.writeInt(mHeapSize);
	output.textWriteText("\t# heapSize\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mFreeOffset);
	output.textWriteText("\t# freeOffset\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mFreeSize);
	output.textWriteText("\t# freeSize\r\n");

	for (int j = 0; j < mHeapSize; j++) {
		output.textWriteTab(output.mTabCount);
		for (int k = 0; k < 0x40; k++) {
			output.writeByte(mHeapBuffer[k]);
		}
		output.textWriteText("\r\n");
	}
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
void GeneratorCache::read(Stream& input)
{
	for (int i = 0; i < stageList->getCourseCount(); i++) {
		CourseCache* cache = findCache(mRootCache, i);
		if (cache) {
			cache->del();
			mFreeCache.add(cache);
		}
	}
	mRootCache.clearRelations();
	mFreeOffset   = 0;
	mFreeSize     = mHeapSize;
	mCurrentCache = nullptr;
	CourseCache newcache(-1);

	for (int i = 0; i < stageList->getCourseCount(); i++) {
		u8 flag            = input.readByte();
		CourseCache* cache = findCache(newcache, i);
		JUT_ASSERTLINE(1009, cache, "cache %d is not in dead list\n", i);
		cache->read(input);
		if (flag == 0) {
			cache->del();
			newcache.add(cache);
		} else if (flag == 255) {
			cache->del();
			mRootCache.add(cache);
		} else {
			JUT_PANICLINE(1019, "illegal cache flag(%x)\n", flag);
		}
	}

	CourseCache* cache = findCache(newcache, -1);
	if (cache) {
		cache->del();
		mFreeCache.add(cache);
	}
	mHeapSize   = input.readInt();
	mFreeOffset = input.readInt();
	mFreeSize   = input.readInt();
	for (int j = 0; j < mHeapSize; j++) {
		mHeapBuffer[j] = input.readByte();
	}
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

	sprintf(header, "CourseCache %d", mCourseIndex);
	output.textBeginGroup(header);

	output.textWriteTab(output.mTabCount);
	output.writeInt(mCourseIndex);
	output.textWriteText("# courseindex\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mOffset);
	output.textWriteText("# offset\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mSize);
	output.textWriteText("# size\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mGeneratorCount);
	output.textWriteText("# numGenerators\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mGeneratorSize);
	output.textWriteText("# generatorSize\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mCreatureCount);
	output.textWriteText("# numCreatures\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mCreatureSize);
	output.textWriteText("# creatureSize\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mPikiheadCount);
	output.textWriteText("# numPikiheads\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeInt(mPikiheadSize);
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
	char header[256];
	sprintf(header, "CourseCache %d", mCourseIndex);
	// some testing leftover

	mCourseIndex    = input.readInt();
	mOffset         = input.readInt();
	mSize           = input.readInt();
	mGeneratorCount = input.readInt();
	mGeneratorSize  = input.readInt();
	mCreatureCount  = input.readInt();
	mCreatureSize   = input.readInt();
	mPikiheadCount  = input.readInt();
	mPikiheadSize   = input.readInt();
}
} // namespace Game
