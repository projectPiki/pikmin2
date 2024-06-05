#include "Game/gameGeneratorCache.h"
#include "Game/gameStages.h"
#include "Game/Entities/ItemPikihead.h"

namespace Game {

static const char className[] = "generatorCache";

GeneratorCache* generatorCache;

/**
 * @note Address: 0x801F1908
 * @note Size: 0x88
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

/**
 * @note Address: 0x801F19F0
 * @note Size: 0x98
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

/**
 * @note Address: 0x801F1A88
 * @note Size: 0x18
 */
void GeneratorCache::clearGeneratorList() { mGenerator.clearRelations(); }

/**
 * @note Address: 0x801F1AA0
 * @note Size: 0x78
 */
void GeneratorCache::addGenerator(Game::Generator* newGenerator)
{
	int count = 0;
	FOREACH_NODE(Generator, getFirstGenerator(), gen)
	{
		if (gen->mIsInactive == FALSE) {
			count++;
		}
	}
	// TODO: Remove magic number
	// TODO: Move this to checkOverflow.
	if (count < 80) {
		mGenerator.add(newGenerator);
	}
}

/**
 * @note Address: 0x801F1B18
 * @note Size: 0x8
 */
Generator* GeneratorCache::getFirstGenerator() { return (Generator*)mGenerator.mChild; }

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
Generator* GeneratorCache::findRamGenerator(int index)
{
	FOREACH_NODE(Generator, mGenerator.mChild, gen)
	{
		if (gen->mIsInactive == FALSE && gen->mIndex == index) {
			return gen;
		}
	}
	return nullptr;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801F1B20
 * @note Size: 0x24
 */
int GeneratorCache::getTotalMePikmins()
{
	int count = 0;
	FOREACH_NODE(CourseCache, mRootCache.mChild, cache) { count += cache->mPikiheadCount; }
	return count;
}

/**
 * @note Address: 0x801F1B44
 * @note Size: 0x74
 */
int GeneratorCache::getColorMePikmins(int pikminType)
{
	int count = 0;
	FOREACH_NODE(CourseCache, mRootCache.mChild, cache) { count += cache->getColorMePikmins(mHeapBuffer, pikminType); }
	return count;
}

/**
 * getColorMePikmins__Q24Game11CourseCacheFPUci
 *
 * @note Address: 0x801F1BB8
 * @note Size: 0x9C
 */
int CourseCache::getColorMePikmins(u8* buffer, int pikminType)
{
	int pikiheadFlags;
	int count = 0;

	RamStream stream(getOffsetBuffer(buffer, mCreatureSize), mPikiheadSize);
	for (int i = 0; i < mPikiheadCount; i++) {
		pikiheadFlags = stream.readByte();

		Vector3f unused;
		unused.read(stream);

		if ((pikiheadFlags & 0xF) == pikminType) {
			count++;
		}
	}
	return count;
}

/**
 * @note Address: 0x801F1C54
 * @note Size: 0x9C
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

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void GeneratorCache::destroyHeap()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801F1CF0
 * @note Size: 0x38
 */
CourseCache* GeneratorCache::findCache(Game::CourseCache& haystack, int courseIndex)
{
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

/**
 * @note Address: 0x801F1D28
 * @note Size: 0x128
 */
void GeneratorCache::loadGenerators(int courseIndex)
{
	mCurrentCache = findCache(mRootCache, courseIndex);
	if (mCurrentCache) {
		RamStream input(mHeapBuffer + mCurrentCache->mOffset, mCurrentCache->mSize);
		for (int i = 0; i < mCurrentCache->mGeneratorCount; i++) {
			Generator* generator = new Generator;

			Generator::ramMode = Generator::RM_MemoryCache;
			generator->read(input);

			Generator::ramMode = Generator::RM_Disc;

			generator->mIndex      = i;
			generator->mIsInactive = FALSE;

			int inactives = mGenerator.getInactives();
			if (inactives < 80) {
				mGenerator.add(generator);
			}
		}
	}
}

/**
 * @note Address: 0x801F1E50
 * @note Size: 0x1B8
 */
void GeneratorCache::loadCreatures(int courseIndex)
{
	mCurrentCache = findCache(mRootCache, courseIndex);
	if (mCurrentCache) {
		RamStream input(mCurrentCache->getOffsetBuffer(mHeapBuffer, 0), mCurrentCache->mCreatureSize);
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

					JUT_PANICLINE(448, "loadC[%s](no%d):%s", objID.getStr(), id, buf);
				}

				JUT_PANICLINE(450, "loadC(no%d)\n", id);
			}
		}
		loadPikiheads();
		slideCache();
	}
}

/**
 * @note Address: 0x801F2008
 * @note Size: 0x114
 */
void GeneratorCache::loadPikiheads()
{
	CourseCache* cache = mCurrentCache;
	RamStream input(cache->getOffsetBuffer(mHeapBuffer, cache->mCreatureSize), cache->mPikiheadSize);
	for (int i = 0; i < mCurrentCache->mPikiheadCount; i++) {
		ItemPikihead::Item* piki = ItemPikihead::mgr->birth();
		ItemPikihead::InitArg arg;
		arg.mIsAlreadyBuried = true;
		piki->init(&arg);
		piki->cacheLoad(input);
	}
}

/**
 * @note Address: 0x801F211C
 * @note Size: 0xC0
 */
void GeneratorCache::slideCache()
{
	u8* destinationBuffer;
	u8* sourceBuffer;
	CourseCache* cache = mCurrentCache;
	int cacheSize      = mCurrentCache->mSize;

	// this feels bad to write.
	for (cache; cache = (CourseCache*)cache->mNext;) {
		destinationBuffer = (u8*)cache->getOffsetBufferNoGen(mHeapBuffer, cacheSize);
		sourceBuffer      = (u8*)mHeapBuffer + cache->mOffset;

		for (int index = 0; index < cache->mSize; index++) {
			*destinationBuffer++ = *sourceBuffer++;
		}

		cache->mOffset -= cacheSize;
	}

	// Delete the current cache and add it to the free cache
	mCurrentCache->del();
	mFreeCache.add(mCurrentCache);

	// Update the free offset and size
	mFreeOffset -= cacheSize;
	mFreeSize += cacheSize;
}

/**
 * @note Address: 0x801F21DC
 * @note Size: 0x4C
 */
void GeneratorCache::updateUseList()
{
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->mNext) {
		if (gen->mIsInactive == FALSE) {
			gen->updateUseList();
		}
	}
}

/**
 * @note Address: 0x801F2228
 * @note Size: 0x78
 */
void GeneratorCache::createNumberGenerators()
{
	for (Generator* gen = getFirstGenerator(); gen != nullptr; gen = (Generator*)gen->mNext) {
		if (gen->mIsInactive == FALSE && (gen->mReservedNum & 4U) != 0) {
			Generator::ramMode = Generator::RM_MemoryCache;
			gen->generate();
			Generator::ramMode = Generator::RM_Disc;
		}
	}
}

/**
 * @note Address: 0x801F22A0
 * @note Size: 0xF8
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

/**
 * @note Address: 0x801F2398
 * @note Size: 0xC8
 */
void GeneratorCache::endSave()
{
	P2ASSERTLINE(554, mCurrentCache);
	P2ASSERTLINE(555, findCache(mFreeCache, mCurrentCache->mCourseIndex));
	mCurrentCache->del();
	mRootCache.add(mCurrentCache);
}

/**
 * @note Address: 0x801F2460
 * @note Size: 0xF0
 */
void GeneratorCache::saveGenerator(Generator* generator)
{
	if (generator->mDayLimit == -1 || gameSystem->mTimeMgr->mDayCount < generator->mDayLimit) {
		if (generator->need_saveCreature()) {
			RamStream output(mHeapBuffer + mFreeOffset, mFreeSize);
			generator->mIndex = mCurrentCache->mGeneratorCount;

			Generator::ramMode = Generator::RM_MemoryCache;
			generator->write(output);
			int newPos         = output.mPosition;
			Generator::ramMode = Generator::RM_Disc;

			mFreeOffset += newPos;
			mFreeSize -= newPos;
			mCurrentCache->mGeneratorCount++;
			mCurrentCache->mSize += newPos;
			mCurrentCache->mGeneratorSize += newPos;
		}
	}
}

/**
 * @note Address: 0x801F2550
 * @note Size: 0x140
 */
void GeneratorCache::saveCreature(Generator* gen)
{
	if (!gen->mCreature || (gen->mDayLimit != -1) && (gameSystem->mTimeMgr->mDayCount >= gen->mDayLimit)) {
		return;
	}

	RamStream output(mHeapBuffer + mFreeOffset, mFreeSize);
	Generator::ramMode = Generator::RM_MemoryCache;
	if (gen->need_saveCreature()) {
		output.writeInt(gen->mIndex);
		gen->saveCreature(output);

		if (gen->mIndex >= mCurrentCache->mGeneratorCount) {
			JUT_PANICLINE(672, "(gen number large %d>=%d\n", gen->mIndex, mCurrentCache->mGeneratorCount);
		}
	} else {
		Generator::ramMode = Generator::RM_Disc;
		return;
	}

	Generator::ramMode = Generator::RM_Disc;
	int size           = output.mPosition;
	mFreeOffset += size;
	mFreeSize -= size;
	mCurrentCache->mCreatureCount++;
	mCurrentCache->mSize += size;
	mCurrentCache->mCreatureSize += size;
}

/**
 * @note Address: 0x801F2690
 * @note Size: 0x2D0
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
			int otherSize = output.mPosition - size;
			mFreeOffset += otherSize;
			mFreeSize -= otherSize;
			mCurrentCache->mPikiheadCount++;
			mCurrentCache->mSize += otherSize;
			mCurrentCache->mPikiheadSize += otherSize;
		} else {
			if (obj->isAlive()) {
				obj->kill(nullptr);
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void GeneratorCache::checkOverflow()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801F2960
 * @note Size: 0x70
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

/**
 * beginSave__Q24Game11CourseCacheFi
 * @note Address: 0x801F29D0
 * @note Size: 0x28
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

/**
 * @note Address: 0x801F29F8
 * @note Size: 0x234
 */
void GeneratorCache::write(Stream& output)
{
	for (int i = 0; i < stageList->getCourseCount(); i++) {

		CourseCache* cache = findCache(mRootCache, i);
		if (cache) {
			output.textWriteTab(output.mTabCount);
			output.writeByte(0);
			output.textWriteText("\t# Alive\r\n");

		} else {
			cache = findCache(mFreeCache, i);

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

	int j        = 0;
	int heapOffs = 0;
	int currSize;
	for (j = mHeapSize; j > 0; j -= currSize) {
		currSize = 0x40;
		if (j < 0x40) {
			currSize = j;
		}
		output.textWriteTab(output.mTabCount);
		for (int k = 0; k < currSize; k++) {
			output.writeByte(mHeapBuffer[heapOffs++]);
		}
		output.textWriteText("\r\n");
	}
}

/**
 * @note Address: 0x801F2C2C
 * @note Size: 0x2B0
 */
void GeneratorCache::read(Stream& input)
{
	clearCache();

	CourseCache newcache(-1);

	u32 flag;
	for (int i = 0; i < stageList->getCourseCount(); i++) {
		flag = input.readByte();

		CourseCache* cache = findCache(mFreeCache, i);
		JUT_ASSERTLINE(1009, cache, "cache %d is not in dead list\n", i);
		cache->read(input);
		if (flag == 0) {
			cache->del();
			newcache.add(cache);
		} else if (flag == 255) {
			cache->del();
			mFreeCache.add(cache);
		} else {
			JUT_PANICLINE(1019, "illegal cache flag(%x)\n", flag);
		}
	}

	CourseCache* childCache = (CourseCache*)newcache.mChild;
	while (childCache) {
		// this might be an inline, its not findCache though
		u32 id             = -1;
		CourseCache* cache = nullptr;
		FOREACH_NODE(CourseCache, newcache.mChild, cnode)
		{
			if (id > cnode->mOffset) {
				id    = cnode->mOffset;
				cache = cnode;
			}
		}

		if (cache) {
			cache->del();
			mRootCache.add(cache);
		}
		childCache = (CourseCache*)newcache.mChild;
	}

	mHeapSize   = input.readInt();
	mFreeOffset = input.readInt();
	mFreeSize   = input.readInt();
	for (int j = 0; j < mHeapSize; j++) {
		mHeapBuffer[j] = input.readByte();
	}
}

/**
 * write__Q24Game11CourseCacheFR6Stream
 * @note Address: 0x801F2EDC
 * @note Size: 0x1D4
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

/**
 * read__Q24Game11CourseCacheFR6Stream
 * @note Address: 0x801F30B0
 * @note Size: 0xBC
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
