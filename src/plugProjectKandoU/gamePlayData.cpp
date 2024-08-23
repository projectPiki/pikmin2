#include "Game/AIConstants.h"
#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "Game/Piki.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletItem.h"
#include "Game/gameStat.h"
#include "Game/enemyInfo.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void _Print(char* name, ...) { OSReport("PlayData"); }

namespace Game {

PlayData* playData;

/**
 * @note Address: 0x801E5354
 * @note Size: 0x10
 */
KindCounter::KindCounter()
    : mNumKinds(0)
    , mKinds(nullptr)
{
}

/**
 * @note Address: 0x801E5364
 * @note Size: 0x74
 */
void KindCounter::alloc(int numKinds)
{
	P2ASSERTLINE(299, mKinds == nullptr);
	mNumKinds = numKinds;
	mKinds    = new u8[mNumKinds];
	clear();
}

/**
 * @note Address: 0x801E53D8
 * @note Size: 0x28
 */
void KindCounter::clear()
{
	for (int i = 0; i < mNumKinds; i++) {
		mKinds[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void KindCounter::copyFrom(KindCounter& other)
{
	P2ASSERTLINE(314, mNumKinds == other.mNumKinds);
	for (int i = 0; i < mNumKinds; i++) {
		mKinds[i] = other.mKinds[i];
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void KindCounter::addTo(KindCounter& other)
{
	P2ASSERTLINE(322, mNumKinds == other.mNumKinds);
	for (int i = 0; i < mNumKinds; i++) {
		mKinds[i] += other.mKinds[i];
	}
}

/**
 * @note Address: 0x801E5400
 * @note Size: 0x78
 */
u8& KindCounter::operator()(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < mNumKinds) {
		isValidIndex = true;
	}
	P2ASSERTLINE(330, isValidIndex);
	return mKinds[index];
}

/**
 * @note Address: N/A
 * @note Size: 0x18C
 */
PelletCropMemory::PelletCropMemory(int num1, int num2, int num3)
{
	mOtakara.alloc(num1);
	mItem.alloc(num2);
	mCarcass.alloc(num3);
}

/**
 * @note Address: 0x801E5478
 * @note Size: 0x280
 */
PelletCropMemory* PelletCropMemory::createClone()
{
	PelletCropMemory* clone = new PelletCropMemory(mOtakara.getNumKinds(), mItem.getNumKinds(), mCarcass.getNumKinds());
	clone->mOtakara.copyFrom(mOtakara);
	clone->mItem.copyFrom(mItem);
	clone->mCarcass.copyFrom(mCarcass);
	return clone;
}

/**
 * @note Address: 0x801E56F8
 * @note Size: 0x148
 */
void PelletCropMemory::addTo(PelletCropMemory* add)
{
	mOtakara.addTo(add->mOtakara);
	mItem.addTo(add->mItem);
	mCarcass.addTo(add->mCarcass);
}

/**
 * @note Address: 0x801E5840
 * @note Size: 0x70
 */
void PelletCropMemory::clear()
{
	mOtakara.clear();
	mItem.clear();
	mCarcass.clear();
}

/**
 * @note Address: N/A
 * @note Size: 0x288
 */
void PelletCropMemory::obtainPellet(Pellet*) { }

/**
 * @note Address: 0x801E58B0
 * @note Size: 0x48
 */
int PelletCropMemory::calcEarnKinds() { return mOtakara.getEarnKinds() + mItem.getEarnKinds(); }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
int PelletCropMemory::calcNumKinds() { }

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
PelletFirstMemory::PelletFirstMemory(int p1, int p2, int p3)
    : PelletCropMemory(p1, p2, p3)
{
}

/**
 * @note Address: 0x801E58F8
 * @note Size: 0x2C8
 */
bool PelletFirstMemory::firstCarryPellet(Pellet* pellet)
{
	if (pellet->getKind() == PelletType::Treasure) {
		int id = pellet->getConfigIndex();

		if (!(mOtakara(id) & 2)) {
			mOtakara(id) |= 2;
			pellet->getConfigName();
			return true;
		}

	} else if (pellet->getKind() == PelletType::Upgrade) {
		int id = pellet->getConfigIndex();
		if (!(mItem(id) & 2)) {
			mItem(id) |= 2;
			pellet->getConfigName();
			return true;
		}

	} else if (pellet->getKind() == PelletType::Carcass) {
		int id = pellet->getConfigIndex();
		if (!(mCarcass(id) & 2)) {
			mCarcass(id) |= 2;
			pellet->getConfigName();
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x801E5BC0
 * @note Size: 0x154
 */
void PelletFirstMemory::obtainPellet(BasePelletMgr* mgr, int id)
{
	if (mgr->getMgrID() == PelletType::Treasure) {
		mOtakara(id) |= 2;
		mgr->getPelletConfig(id);

	} else if (mgr->getMgrID() == PelletType::Upgrade) {
		mItem(id) |= 2;
		mgr->getPelletConfig(id);

	} else {
		mgr->getMgrID();
	}
}

/**
 * @note Address: 0x801E5D14
 * @note Size: 0x154
 */
void PelletFirstMemory::losePellet(Game::BasePelletMgr* mgr, int id)
{
	if (mgr->getMgrID() == PelletType::Treasure) {
		mOtakara(id) &= ~0x2;
		mgr->getPelletConfig(id);

	} else if (mgr->getMgrID() == PelletType::Upgrade) {
		mItem(id) &= ~0x2;
		mgr->getPelletConfig(id);

	} else {
		mgr->getMgrID();
	}
}

/**
 * @note Address: 0x801E5E68
 * @note Size: 0x4C
 */
bool PlayData::isCompletePelletTrigger()
{
	// has paid debt, has not seen all treasures ending before, has all treasures
	if (isStoryFlag(STORY_DebtPaid) && !isStoryFlag(STORY_AllTreasuresCollected) && mZukanStat->completeAll()) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x801E5EB4
 * @note Size: 0x58
 */
bool PelletCropMemory::completeAll()
{
	return (!mOtakara.completeAll()) ? false : mItem.completeAll() > 0; // sure.
}

/**
 * @note Address: 0x801E5F0C
 * @note Size: 0x3C
 */
bool KindCounter::completeAll()
{
	for (int i = 0; i < mNumKinds; ++i) {
		if (mKinds[i] == 0)
			return false;
	}
	return true;
}

/**
 * @note Address: 0x801E5F48
 * @note Size: 0x3C
 */
int KindCounter::getEarnKinds()
{
	int earnedKinds = 0;
	for (int i = 0; i < mNumKinds; i++) {
		if (mKinds[i] & KCF_Earned) {
			earnedKinds++;
		}
	}
	return earnedKinds;
}

/**
 * @note Address: 0x801E5F84
 * @note Size: 0x3C
 */
OlimarData::OlimarData()
{
	mFlags[0] = 0;
	mFlags[1] = 0;
	clear();
}

/**
 * @note Address: 0x801E5FC0
 * @note Size: 0x10
 */
void OlimarData::clear()
{
	mFlags[0] = 0;
	mFlags[1] = 0;
}

/**
 * @note Address: 0x801E5FD0
 * @note Size: 0x98
 */
bool OlimarData::hasItem(int index)
{
	P2ASSERTBOUNDSLINE(588, ODII_BruteKnuckles, index, ODII_LAST_NON_EXPLORATION_KIT_ITEM);
	int data_idx = (index >> 3);
	int rot      = (data_idx << 3);
	int bits     = 1 << (index - rot);
	return (mFlags[1 - data_idx] & bits) != false;
}

/**
 * @note Address: 0x801E6068
 * @note Size: 0xCC
 */
void OlimarData::getItem(int item)
{
	bool validItem = item >= ODII_BruteKnuckles && item < ODII_LAST_NON_EXPLORATION_KIT_ITEM;
	P2ASSERTLINE(601, validItem);

	if (item < 16) {
		int data_idx = (item >> 3);
		mFlags[1 - data_idx] |= 1 << (item - (data_idx << 3));
	}

	switch (item) {
	case ODII_SphericalAtlas:
		playData->openCourse(1);
		return;
	case ODII_GeographicProjection:
		playData->openCourse(2);
		return;
	}
}

/**
 * @note Address: 0x801E6134
 * @note Size: 0x84
 */
void PlayData::construct()
{
	P2ASSERTLINE(690, playData == nullptr);
	sys->heapStatusStart("playData", nullptr);
	playData = new PlayData();
	sys->heapStatusEnd("playData");
}

/**
 * @note Address: 0x801E61B8
 * @note Size: 0x854
 */
PlayData::PlayData()
    : mDeadNaviID()
    , mStoryFlags()
{
	mBeforeSaveDelegate = nullptr;

	int stageCount             = stageList->getCourseCount();
	mBitfieldPerCourse         = new u8[stageCount];
	mGroundOtakaraCollected    = new u8[stageCount];
	mGroundOtakaraCollectedOld = new u8[stageCount];

	for (int i = 0; i < stageCount; i++) {
		mGroundOtakaraCollected[i]    = 0;
		mGroundOtakaraCollectedOld[i] = 0;
	}

	mLimitGen = new LimitGen[stageCount];

	for (int i = 0; i < stageCount; i++) {
		LimitGen* gen    = &mLimitGen[i];
		CourseInfo* info = stageList->getCourseInfo(i);
		gen->mNonLoops.create(info->mLimitGenInfo.mCount, nullptr);
		gen->mLoops.create(info->mLoopGenInfo.mCount, nullptr);
	}

	mTekiStatMgr.allocate(EnemyTypeID::EnemyID_COUNT); // uses EnemyTypeID::EnemyID_COUNT rather than gEnemyInfoNum

	mCaveOtakara    = new CaveOtakara[stageCount];
	mCaveOtakaraOld = new CaveOtakara[stageCount];

	for (int i = 0; i < stageCount; i++) {
		CaveOtakara* thisOtakara = &mCaveOtakara[i];
		CourseInfo* info         = stageList->getCourseInfo(i);
		thisOtakara->updateCounts(i, info);

		CaveOtakara* oldOtakara = &mCaveOtakaraOld[i];
		oldOtakara->updateCounts(i, info);
	}

	int treasures = PelletList::Mgr::getCount(PelletList::PLK_Otakara);
	int items     = PelletList::Mgr::getCount(PelletList::PLK_Item);
	int carcasses = PelletList::Mgr::getCount(PelletList::PLK_Carcass);

	mZukanStat      = new PelletFirstMemory(treasures, items, carcasses);
	mMainCropMemory = new PelletCropMemory(treasures, items, carcasses);
	mCaveCropMemory = new PelletCropMemory(treasures, items, carcasses);
	mDemoFlags.create(57, nullptr);
	mDemoFlags.reset();
	mFindItemFlags.create(PelletList::Mgr::getCount(PelletList::PLK_Item), nullptr);
	mFindItemFlags.reset();

	sys->heapStatusStart("generatorCache", nullptr);
	generatorCache = new GeneratorCache;
	sys->heapStatusEnd("generatorCache");
	reset();
}

/**
 * @note Address: 0x801E6A58
 * @note Size: 0x68
 */
PlayData::~PlayData() { playData = nullptr; }

/**
 * @note Address: 0x801E6AC0
 * @note Size: 0x3D0
 */
void PlayData::reset()
{
	mNaviLifeMax[1]        = 0.0f;
	mNaviLifeMax[0]        = 0.0f;
	mDeadNaviID            = 0;
	u64 osTime             = OSGetTime();
	mOsTime                = osTime;
	mDoAllowDebugPikiSpawn = false;
	mLoadType              = 0;
	mStoryFlags            = 0;
	mDebtProgressFlags.clear();
	mBackupDebtProgressFlags.clear();
	for (int i = 0; i <= -1; i++) {
		if (i < 16) {
			int byte = i >> 3;
			getDebtProgressFlags(1 - byte) |= 1 << (i - (byte << 3));
		}
	}
	generatorCache->clearCache();
	mPokoCount     = 0;
	mCavePokoCount = 0;
	mPokoCountOld  = 0;
	mSprayCount[0] = 0;
	mBerryCount[0] = 0;
	mSprayCount[1] = 0;
	mBerryCount[1] = 0;
	mPikiContainer.clear();
	initCourses(false);
	initLimitGens();
	initCaveOtakaras();
	int courseCount = stageList->getCourseCount();
	mMainCropMemory->clear();
	mCaveCropMemory->clear();
	mZukanStat->clear();
	mTreasureCount = 0;
	for (int i = 0; i < courseCount; i++) {
		mGroundOtakaraCollected[i]    = 0;
		mGroundOtakaraCollectedOld[i] = 0;
	}
	resetContainerFlag();
	mDemoFlags.all_zero();
	mFindItemFlags.all_zero();
	mTekiStatMgr.clear();
	mOlimarData[0].clear();
	mOlimarData[1].clear();
	mCaveSaveData.clear();
	mMailSaveData.clear();
	for (int i = 0; i < 6; i++) {
		mPikminToday[i]     = 0;
		mPikminYesterday[i] = 0;
	}
	DeathMgr::clear();
	BirthMgr::clear();
}

/**
 * @note Address: 0x801E6E90
 * @note Size: 0xC8
 */
void PlayData::setDevelopSetting(bool isDevelop, bool setDemos)
{
	mDoAllowDebugPikiSpawn = isDevelop;
	if (isDevelop) {
		initCourses(true);
		debugSetContainerFlagOn();
		mDemoFlags.all_one();
		mFindItemFlags.all_one();
		mOlimarData[0].mFlags[0] |= 4;
		playData->openCourse(1);
		initCourses(true);
		if (!setDemos) {
			mDemoFlags.resetFlag(DEMO_Waterwraith_Appears);
			mDemoFlags.resetFlag(DEMO_First_Spicy_Berry);
			mDemoFlags.resetFlag(DEMO_First_Bitter_Berry);
			mDemoFlags.resetFlag(DEMO_First_Spicy_Spray_Made);
			mDemoFlags.resetFlag(DEMO_First_Bitter_Spray_Made);
		}
	}
}

/**
 * @note Address: 0x801E6F58
 * @note Size: 0xB4
 */
int PlayData::calcPlayMinutes()
{
	OSCalendarTime calendar1;
	OSCalendarTime calendar2;
	OSCalendarTime calendar3;

	OSTime time = OSGetTime(); // mistake?
	OSTicksToCalendarTime(time, &calendar1);
	OSTicksToCalendarTime(mOsTime, &calendar2);

	OSTime diff = time - mOsTime;
	OSTicksToCalendarTime(diff, &calendar3);

	return (int)(diff / OS_TIMER_CLOCK) / 60;
}

/**
 * @note Address: 0x801E700C
 * @note Size: 0x14
 */
void PlayData::resetContainerFlag()
{
	mMeetPikminFlags       = 0;
	mHasBootContainerFlags = 0;
	mHasContainerFlags     = 0;
}

/**
 * @note Address: 0x801E7020
 * @note Size: 0x88
 */
bool PlayData::hasContainer(int pikminColor)
{
	P2ASSERTBOUNDSLINE(1002, FirstPikmin, pikminColor, StoredPikiCount);
	return (mHasContainerFlags & (1 << pikminColor)) != 0;
}

/**
 * @note Address: 0x801E70A8
 * @note Size: 0x30
 */
bool PlayData::hasMetPikmin(int pikminColor)
{
	if (pikminColor == Bulbmin) {
		return true;
	}
	return mMeetPikminFlags & (1 << pikminColor);
}

/**
 * @note Address: 0x801E70D8
 * @note Size: 0xA4
 */
bool PlayData::hasBootContainer(int pikminColor)
{
	bool isValidIndex;
	if (pikminColor == White || pikminColor == Purple) {
		return false;
	} else {
		isValidIndex = false;
		if (FirstPikmin <= pikminColor && pikminColor <= LastOnyon) {
			isValidIndex = true;
		}
		P2ASSERTLINE(1018, isValidIndex);
		return mHasBootContainerFlags & (1 << pikminColor);
	}
}

/**
 * @note Address: 0x801E717C
 * @note Size: 0x80
 */
void PlayData::setContainer(int pikminColor)
{
	bool isValidIndex = false;
	if (FirstPikmin <= pikminColor && pikminColor < StoredPikiCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1024, isValidIndex);
	mHasContainerFlags |= (1 << pikminColor);
}

/**
 * @note Address: 0x801E71FC
 * @note Size: 0x80
 */
void PlayData::setMeetPikmin(int pikminColor)
{
	bool isValidIndex = false;
	if (FirstPikmin <= pikminColor && pikminColor < StoredPikiCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1030, isValidIndex);
	mMeetPikminFlags |= (1 << pikminColor);
}

/**
 * @note Address: 0x801E727C
 * @note Size: 0x80
 */
void PlayData::setBootContainer(int pikminColor)
{
	bool isValidIndex = false;
	if (FirstPikmin <= pikminColor && pikminColor <= LastOnyon) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1036, isValidIndex);
	mHasBootContainerFlags |= (1 << pikminColor);
}

/**
 * @note Address: 0x801E72FC
 * @note Size: 0xA8
 */
void PlayData::debugSetContainerFlagOn()
{
	mHasContainerFlags |= 0x01;
	mHasContainerFlags |= 0x02;
	mHasContainerFlags |= 0x04;
	mHasContainerFlags |= 0x10;
	mHasContainerFlags |= 0x08;
	mHasBootContainerFlags |= 0x01;
	mHasBootContainerFlags |= 0x02;
	mHasBootContainerFlags |= 0x04;
	mMeetPikminFlags |= 0x01;
	mMeetPikminFlags |= 0x02;
	mMeetPikminFlags |= 0x04;
	mMeetPikminFlags |= 0x10;
	mMeetPikminFlags |= 0x08;
	mLoadType = 1;
}

/**
 * @note Address: 0x801E73A4
 * @note Size: 0x3C
 */
void PlayData::setDemoFlag(int flag)
{
	mDemoFlags.setFlag(flag);
	mDemoFlags.dump();
}

/**
 * @note Address: 0x801E73E0
 * @note Size: 0x28
 */
bool PlayData::isDemoFlag(int flag) { return mDemoFlags.isFlag(flag); }

/**
 * @note Address: 0x801E7408
 * @note Size: 0x3C
 */
void PlayData::setFindItemDemoFlag(int flag)
{
	mFindItemFlags.setFlag(flag);
	mFindItemFlags.dump();
}

/**
 * @note Address: 0x801E7444
 * @note Size: 0x28
 */
bool PlayData::isFindItemDemoFlag(int flag) { return mFindItemFlags.isFlag(flag); }

/**
 * @note Address: 0x801E746C
 * @note Size: 0x8
 */
void PlayData::setCurrentCourse(int id) { mCaveSaveData.mCourseIdx = id; }

/**
 * @note Address: 0x801E7474
 * @note Size: 0xC
 */
void PlayData::clearCurrentCave() { mCaveSaveData.mIsInCave = false; }

/**
 * @note Address: 0x801E7480
 * @note Size: 0x4C
 */
void PlayData::setCurrentCave(ID32& caveID, int floor)
{
	mCaveSaveData.mCurrentCaveID.setID(caveID.getID());
	mCaveSaveData.mCurrentFloor = floor;
	mCaveSaveData.mIsInCave     = true;
}

/**
 * @note Address: 0x801E74CC
 * @note Size: 0x10
 */
void PlayData::setCurrentCaveFloor(int floor)
{
	mCaveSaveData.mCurrentFloor = floor;
	mCaveSaveData.mIsInCave     = true;
}

/**
 * @note Address: 0x801E74DC
 * @note Size: 0x8
 */
int PlayData::getCurrentCourseIndex() { return mCaveSaveData.mCourseIdx; }

/**
 * @note Address: 0x801E74E4
 * @note Size: 0x38
 */
CourseInfo* PlayData::getCurrentCourse()
{
	if (mCaveSaveData.mCourseIdx != -1) {
		return stageList->getCourseInfo(mCaveSaveData.mCourseIdx);
	}
	return nullptr;
}

/**
 * @note Address: 0x801E751C
 * @note Size: 0x48
 */
void PlayData::getCurrentCave(ID32& outCaveID, int& outCaveFloor)
{
	outCaveID.setID(mCaveSaveData.mCurrentCaveID.getID());
	outCaveFloor = mCaveSaveData.mCurrentFloor;
}

/**
 * @note Address: 0x801E7564
 * @note Size: 0x30
 */
bool PlayData::firstCarryPellet(Game::Pellet* pellet) { return mZukanStat->firstCarryPellet(pellet); }

/**
 * @note Address: 0x801E7594
 * @note Size: 0x30
 */
void PlayData::obtainPellet(BasePelletMgr* mgr, int p2) { mZukanStat->obtainPellet(mgr, p2); }

/**
 * @note Address: 0x801E75C4
 * @note Size: 0x30
 */
void PlayData::losePellet(Game::BasePelletMgr* mgr, int p2) { mZukanStat->losePellet(mgr, p2); }

/**
 * @note Address: 0x801E75F4
 * @note Size: 0x320
 */
void PlayData::obtainPellet_Main(Game::Pellet* pellet)
{
	PelletCropMemory* mem = mMainCropMemory;
	if (pellet->getKind() == PelletType::Treasure) {
		int id = pellet->getConfigIndex();
		(mem->mOtakara(id))++;
		pellet->getConfigName();
		(mem->mOtakara(id));

	} else if (pellet->getKind() == PelletType::Upgrade) {
		int id = pellet->getConfigIndex();
		(mem->mItem(id))++;
		pellet->getConfigName();
		(mem->mItem(id));

	} else if (pellet->getKind() == PelletType::Carcass) {
		int id = pellet->getConfigIndex();
		(mem->mCarcass(id))++;
		pellet->getConfigName();
		(mem->mCarcass(id));
	}

	BasePelletMgr* mgr = 0;
	if (pellet->getKind() == PelletType::Treasure) {
		mgr = PelletOtakara::mgr;
	} else if (pellet->getKind() == PelletType::Upgrade) {
		mgr = PelletItem::mgr;
	}

	if (mgr) {
		mZukanStat->obtainPellet(mgr, pellet->getConfigIndex());
	}
	mPokoCount += pellet->mConfig->mParams.mMoney.mData;
}

/**
 * @note Address: 0x801E7914
 * @note Size: 0x284
 */
void PlayData::obtainPellet_Cave(Game::Pellet* pellet)
{
	PelletCropMemory* mem = mCaveCropMemory;
	if (pellet->getKind() == PelletType::Treasure) {
		int id = pellet->getConfigIndex();
		(mem->mOtakara(id))++;
		pellet->getConfigName();
		(mem->mOtakara(id));

	} else if (pellet->getKind() == PelletType::Upgrade) {
		int id = pellet->getConfigIndex();
		(mem->mItem(id))++;
		pellet->getConfigName();
		(mem->mItem(id));

	} else if (pellet->getKind() == PelletType::Carcass) {
		int id = pellet->getConfigIndex();
		(mem->mCarcass(id))++;
		pellet->getConfigName();
		(mem->mCarcass(id));
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void PlayData::confirmCaveCropMemory() { }

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
// bool PlayData::isPelletEverGot(Pellet*) { }

/**
 * @note Address: 0x801E7B98
 * @note Size: 0x104
 */
bool PlayData::isPelletEverGot(u8 type, u8 id)
{
	if (type == PelletType::Upgrade) {
		int itemID = mZukanStat->mItem(id);
		return itemID > 0;
	}
	if (type == PelletType::Treasure) {
		int treasureID = mZukanStat->mOtakara(id);
		return treasureID > 0;
	}
	JUT_PANICLINE(1406, "otakara or item !");
}

/**
 * @note Address: 0x801E7C9C
 * @note Size: 0x128
 */
bool PlayData::isPelletZukanVisible(int id)
{
	PelletConfigList* list = PelletList::Mgr::getConfigList(PelletList::PLK_Otakara);
	PelletConfig* config   = list->getPelletConfig_ByDictionaryNo(id);
	if (config) {
		int index = config->mParams.mIndex;
		if (IS_FLAG(mZukanStat->mOtakara(index), 2)) {
			return true;
		}
	} else {
		list   = PelletList::Mgr::getConfigList(PelletList::PLK_Item);
		config = list->getPelletConfig_ByDictionaryNo(id);
		if (config) {
			int index = config->mParams.mIndex;
			if (IS_FLAG(mZukanStat->mItem(index), 2)) {
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x801E7DC4
 * @note Size: 0x138
 */
bool PlayData::isPelletZukanWhatsNew(int id)
{
	PelletConfigList* list = PelletList::Mgr::getConfigList(PelletList::PLK_Otakara);
	PelletConfig* config   = list->getPelletConfig_ByDictionaryNo(id);
	if (config) {
		int index = config->mParams.mIndex;
		u8 kinds  = mZukanStat->mOtakara(index);
		if (kinds & 2 && !(kinds & 4)) {
			return true;
		}
	} else {
		list   = PelletList::Mgr::getConfigList(PelletList::PLK_Item);
		config = list->getPelletConfig_ByDictionaryNo(id);
		if (config) {
			int index = config->mParams.mIndex;
			u8 kinds  = mZukanStat->mItem(index);
			if (kinds & 2 && !(kinds & 4)) {
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x801E7EFC
 * @note Size: 0x1BC
 */
bool PlayData::hasPelletZukanWhatsNew()
{
	PelletFirstMemory* zukanStat = getZukanStat();
	for (int i = 0; i < zukanStat->mOtakara.mNumKinds; i++) {
		u8 kinds = zukanStat->mOtakara(i);
		if (kinds && !(IS_FLAG(zukanStat->mOtakara(i), 4)))
			return true;
	}

	PelletFirstMemory* zukanStat2 = getZukanStat();
	for (int i = 0; i < zukanStat2->mItem.mNumKinds; i++) {

		u8 kinds = zukanStat2->mItem(i);
		if (kinds && !(IS_FLAG(zukanStat2->mItem(i), 4)))
			return true;
	}
	return false;
}

/**
 * @note Address: 0x801E80B8
 * @note Size: 0x1A8
 */
void PlayData::setPelletZukanOutOfDateAll()
{
	PelletFirstMemory* zukanStat = getZukanStat();
	for (int i = 0; i < zukanStat->mOtakara.mNumKinds; i++) {
		u8 kinds = zukanStat->mOtakara(i);
		if (kinds) {
			SET_FLAG(zukanStat->mOtakara(i), 4);
		}
	}

	PelletFirstMemory* zukanStat2 = getZukanStat();
	for (int i = 0; i < zukanStat2->mItem.mNumKinds; i++) {
		u8 kinds = zukanStat2->mItem(i);
		if (kinds) {
			SET_FLAG(zukanStat2->mItem(i), 4);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
int PlayData::getTekiCarcassMoney(int id)
{
	// Just here for rodata alignment
	JUT_ASSERTLINE(300, id > 0, "no tekiname for %d\n", id);
}

/**
 * @note Address: 0x801E8260
 * @note Size: 0x7C
 */
int PlayData::getGroundOtakaraNum(int id)
{
	P2ASSERTBOUNDSLINE(1543, 0, id, stageList->getCourseCount());
	return mGroundOtakaraCollected[id];
}

/**
 * @note Address: 0x801E82DC
 * @note Size: 0x78
 */
int PlayData::getGroundOtakaraMax(int id)
{
	P2ASSERTBOUNDSLINE(1550, 0, id, stageList->getCourseCount());
	CourseInfo* info = stageList->getCourseInfo(id);
	return info->mGroundOtakaraMax;
}

/**
 * @note Address: 0x801E8354
 * @note Size: 0x84
 */
void PlayData::incGroundOtakara(int index)
{
	P2ASSERTBOUNDSLINE(1558, 0, index, stageList->getCourseCount());
	mGroundOtakaraCollected[index]++;
}

/**
 * @note Address: 0x801E83D8
 * @note Size: 0x78
 */
int PlayData::getDopeCount(int sprayIndex)
{
	P2ASSERTBOUNDSLINE(1572, 0, sprayIndex, 2);
	return mSprayCount[sprayIndex];
}

/**
 * @note Address: 0x801E8450
 * @note Size: 0x84
 */
void PlayData::setDopeCount(int sprayIndex, int sprayCount)
{
	P2ASSERTBOUNDSLINE(1578, 0, sprayIndex, 2);
	mSprayCount[sprayIndex] = sprayCount;
}

/**
 * @note Address: 0x801E84D4
 * @note Size: 0x80
 */
void PlayData::incDopeCount(int sprayIndex)
{
	P2ASSERTBOUNDSLINE(1584, 0, sprayIndex, 2);
	mSprayCount[sprayIndex]++;
}

/**
 * @note Address: 0x801E8554
 * @note Size: 0x84
 */
bool PlayData::hasDope(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1590, isValidIndex);
	return (0 < mSprayCount[sprayIndex]);
}

/**
 * @note Address: 0x801E85D8
 * @note Size: 0x78
 */
int PlayData::getDopeFruitCount(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1596, isValidIndex);
	return mBerryCount[sprayIndex];
}

/**
 * @note Address: 0x801E8650
 * @note Size: 0xB4
 */
bool PlayData::addDopeFruit(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1602, isValidIndex);

	mBerryCount[sprayIndex]++;
	if (mBerryCount[sprayIndex] >= _aiConstants->mDopeCount.mData) {
		mBerryCount[sprayIndex] = 0;
		mSprayCount[sprayIndex]++;
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x801E8704
 * @note Size: 0xC4
 */
void PlayData::useDope(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1614, isValidIndex);
	if (hasDope(sprayIndex)) {
		mSprayCount[sprayIndex]--;
	}
}

/**
 * @note Address: 0x801E87C8
 * @note Size: 0xDC
 */
bool PlayData::isCaveFirstTime(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		CaveOtakara* ota = &mCaveOtakara[courseIndex];
		int id           = info->getCaveIndex_FromID(caveID);
		if (id != -1) {
			if (id >= 0 && id < ota->mCaveCount) {
				return ota->_08[id] == 0;
			}
			return false;
		}
	}
	ID32 caveIDCopy;
	caveIDCopy.setID(caveID.getID());
	JUT_PANICLINE(1645, "no cave info : course(%d):[%s]\n", courseIndex, caveID.getStr());
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
bool PlayData::isCaveFirstReturn(int, ID32&) { }

/**
 * @note Address: 0x801E88A4
 * @note Size: 0xBC
 */
void PlayData::setCaveVisit(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		CaveOtakara* ota = &mCaveOtakara[courseIndex];
		int id           = info->getCaveIndex_FromID(caveID);
		if (id != -1) {
			if (ota->_08[id] == 0) {
				ota->_08[id] = 1;
				return;
			}
			ota->_08[id] = 2;
			return;
		}
	}
	JUT_PANICLINE(1680, "no cave info : course(%d):[%s]\n", courseIndex, caveID.getStr());
}

/**
 * @note Address: 0x801E8960
 * @note Size: 0xB8
 */
void PlayData::incCaveOtakara(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		CaveOtakara* ota = &mCaveOtakara[courseIndex];
		int id           = info->getCaveIndex_FromID(caveID);
		if (id != -1) {
			bool check;
			if (id >= 0 && id < ota->mCaveCount) {
				ota->mOtakaraCountsOld[id]++;
				check = true;
			} else {
				check = false;
			}

			if (check) {
				info->getOtakaraNum(id);
			}
		}
	}
}

/**
 * @note Address: 0x801E8A18
 * @note Size: 0xB8
 */
int PlayData::getOtakaraNum_Course_CaveID(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		CaveOtakara* ota = &mCaveOtakara[courseIndex];
		int id           = info->getCaveIndex_FromID(caveID);
		if (id != -1) {
			if (id >= 0 && id < ota->mCaveCount) {
				return (u8)ota->mOtakaraCountsOld[id];
			}
			return -1;
		}
	} else {
		JUT_PANICLINE(1727, "course index error:%d (getOtakaraNum_*)\n", courseIndex);
	}
	return -1;
}

/**
 * @note Address: 0x801E8AD0
 * @note Size: 0x48
 */
int PlayData::getOtakaraMax_Course_CaveID(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		return info->getOtakaraNum(caveID);
	} else {
		return -1;
	}
}

/**
 * @note Address: 0x801E8B18
 * @note Size: 0xD4
 */
void PlayData::initCaveOtakaras()
{
	u16 max = stageList->mCourseCount;
	for (int i = 0; i < max; i++) {
		mCaveOtakara[i].clear();
	}

	for (int i = 0; i < max; i++) {
		mCaveOtakaraOld[i].clear();
	}
}

/**
 * @note Address: 0x801E8BEC
 * @note Size: 0x60
 */
void PlayData::read_CaveOtakara(Stream& ram)
{
	u16 max = stageList->getCourseCount();
	for (int i = 0; i < max; i++) {
		mCaveOtakara[i].read(ram);
	}
}

/**
 * @note Address: 0x801E8C4C
 * @note Size: 0x78
 */
void PlayData::write_CaveOtakara(Stream& ram)
{
	ram.textBeginGroup("＊洞窟情報＊");
	u16 max = stageList->getCourseCount();
	for (int i = 0; i < max; i++) {
		mCaveOtakara[i].write(ram);
	}
	ram.textEndGroup();
}

/**
 * @note Address: 0x801E8CC4
 * @note Size: 0xD8
 */
void PlayData::CaveOtakara::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	output.writeByte(mCaveCount);
	output.textWriteText("# cave数\r\n");
	for (int i = 0; i < mCaveCount; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeByte(mOtakaraCountsOld[i]);
		output.textWriteText("# 個数\r\n");
		output.textWriteTab(output.mTabCount);
		output.writeByte(_08[i]);
		output.textWriteText("# 状態\r\n");
	}
}

/**
 * @note Address: 0x801E8D9C
 * @note Size: 0xC0
 */
void PlayData::CaveOtakara::read(Stream& input)
{
	u8 existingCaveCount = mCaveCount;
	mCaveCount           = input.readByte();
	JUT_ASSERTLINE(1797, existingCaveCount == mCaveCount, "セーブしたときと洞窟の数があいません\n");
	for (int i = 0; i < mCaveCount; i++) {
		mOtakaraCountsOld[i] = input.readByte();
		_08[i]               = input.readByte();
	}
}

namespace {
const f32 repay_levs[10] = {
	10.0f, 20.0f, 30.0f, 40.0f, 50.0f, 60.0f, 70.0f, 80.0f, 90.0f, 100.0f,
};
} // namespace

/**
 * @note Address: 0x801E8E5C
 * @note Size: 0x124
 */
int PlayData::getRepayLevel()
{
	f32 level = _aiConstants->mDebt.mData;
	f32 prog  = (mPokoCount / level) * 100.0f;
	for (int i = 0; i < 10; i++) {
		if (repay_levs[i] > prog)
			return i - 1;
	}
	return 9;
}

/**
 * @note Address: 0x801E8F80
 * @note Size: 0x44
 */
f32 PlayData::getRepayLevelPercent(int state)
{
	if (state >= 0) {
		return repay_levs[state];
	} else {
		return (f32)state;
	}
}

/**
 * @note Address: 0x801E8FC4
 * @note Size: 0x160
 */
bool PlayData::checkRepayLevelFirstClear()
{
	int id = getRepayLevel();

	if (id >= 0) {
		int byte = id >> 3;
		if ((getDebtProgressFlags(1 - byte) & 1 << (id - (byte << 3))) == 0) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x801E9124
 * @note Size: 0x174
 */
void PlayData::experienceRepayLevelFirstClear()
{
	int id = getRepayLevel();

	if (id > 0) {
		for (int i = 0; i <= -1; i++) {
			if (i < 16) {
				int byte = i >> 3;
				getDebtProgressFlags(1 - byte) |= 1 << (i - (byte << 3));
			}
		}
	}
}

/**
 * @note Address: 0x801E9298
 * @note Size: 0x64
 */
void PlayData::initLimitGens()
{
	u16 courseCount = stageList->getCourseCount();
	for (int i = 0; i < courseCount; i++) {
		LimitGen* gen = &mLimitGen[i];
		gen->init();
	}
}

/**
 * @note Address: 0x801E92FC
 * @note Size: 0x6C
 */
void PlayData::initCourses(bool type)
{
	if (type) {
		for (int i = 0; i < stageList->getCourseCount(); i++) {
			mBitfieldPerCourse[i] = 3;
		}
		return;
	} else {
		for (int i = 0; i < stageList->getCourseCount(); i++) {
			mBitfieldPerCourse[i] = 0;
		}
	}
	mBitfieldPerCourse[0] = 3; // valley of repose always unlocked
}

/**
 * @note Address: 0x801E9368
 * @note Size: 0x94
 */
void PlayData::openCourse(int index)
{
	P2ASSERTBOUNDSLINE(1905, 0, index, stageList->getCourseCount());
	if (!courseOpen(index)) {
		mBitfieldPerCourse[index] = PDCF_Open;
	}
}

/**
 * @note Address: 0x801E93FC
 * @note Size: 0x84
 */
void PlayData::visitCourse(int index)
{
	P2ASSERTBOUNDSLINE(1918, 0, index, stageList->getCourseCount());
	mBitfieldPerCourse[index] |= PDCF_Visited;
}

bool PlayData::closeCourse(int) { }

/**
 * @note Address: 0x801E9480
 * @note Size: 0x80
 */
bool PlayData::courseOpen(int index)
{
	P2ASSERTBOUNDSLINE(1930, 0, index, stageList->getCourseCount());
	return (mBitfieldPerCourse[index] & PDCF_Open);
}

/**
 * @note Address: 0x801E9500
 * @note Size: 0xE4
 */
bool PlayData::courseJustOpen(int index)
{
	P2ASSERTBOUNDSLINE(1936, 0, index, stageList->getCourseCount());
	bool open = courseOpen(index);
	if (!open) {
		return false;
	} else {
		mBitfieldPerCourse[index] = open | PDCF_JustOpen;
		return !(open & PDCF_JustOpen);
	}
}

/**
 * @note Address: 0x801E95E4
 * @note Size: 0xDC
 */
bool PlayData::courseFirstTime(int index)
{
	P2ASSERTBOUNDSLINE(1955, 0, index, stageList->getCourseCount());

	if (!courseOpen(index)) {
		return false;
	} else {
		return !(mBitfieldPerCourse[index] & PDCF_JustOpen);
	}
}

/**
 * @note Address: 0x801E96C0
 * @note Size: 0x80
 */
bool PlayData::courseVisited(int index)
{
	P2ASSERTBOUNDSLINE(1965, 0, index, stageList->getCourseCount());
	return mBitfieldPerCourse[index] & PDCF_Visited;
}

/**
 * @note Address: 0x801E9740
 * @note Size: 0x84
 */
CaveSaveData::CaveSaveData()
    : mCurrentCaveID()
    , mCavePikis()
    , _30()
{
	mCavePikis.clear();
	mTime      = 0.0f;
	mIsInCave  = false;
	mCourseIdx = -1;
	mCurrentCaveID.setID('none');
	mIsWaterwraithAlive = 1;
	mWaterwraithTimer   = 0.0f;
}

/**
 * @note Address: 0x801E97C4
 * @note Size: 0x68
 */
void CaveSaveData::clear()
{
	mCavePikis.clear();
	mTime      = 0.0f;
	mIsInCave  = false;
	mCourseIdx = -1;
	mCurrentCaveID.setID('none');
	mIsWaterwraithAlive = 1;
	mWaterwraithTimer   = 0.0f;
}

/**
 * @note Address: 0x801E982C
 * @note Size: 0x194
 */
bool PlayData::doneWorldMapEffect()
{
	int courseCount = stageList->mCourseCount;
	mPokoCountOld   = mPokoCount;
	for (int i = 0; i < courseCount; i++) {
		mGroundOtakaraCollectedOld[i] = mGroundOtakaraCollected[i];
	}

	for (int i = 0; i < courseCount; i++) {
		CaveOtakara* datanew = &mCaveOtakara[i];
		CaveOtakara* data    = &mCaveOtakaraOld[i];
		data->mCaveCount     = datanew->mCaveCount;
		for (int j = 0; j < datanew->mCaveCount; j++) {
			data->mOtakaraCountsOld[j] = datanew->mOtakaraCountsOld[j];
			data->_08[j]               = datanew->_08[j];
		}
	}
}

/**
 * @note Address: 0x801E99C0
 * @note Size: 0x7C
 */
int PlayData::getGroundOtakaraNum_Old(int index)
{
	P2ASSERTBOUNDSLINE(2040, 0, index, stageList->getCourseCount());
	return mGroundOtakaraCollectedOld[index];
}

/**
 * @note Address: 0x801E9A3C
 * @note Size: 0xB8
 */
int PlayData::getOtakaraNum_Course_CaveID_Old(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		CaveOtakara* ota = &mCaveOtakaraOld[courseIndex];
		int id           = info->getCaveIndex_FromID(caveID);
		if (id != -1) {
			if (id >= 0 && id < ota->mCaveCount) {
				return ota->mOtakaraCountsOld[id];
			}
			return -1;
		}
	} else {
		JUT_PANICLINE(2057, "course index error:%d (getOtakaraNum_*)\n", courseIndex);
	}
	return -1;
}

/**
 * @note Address: 0x801E9AF4
 * @note Size: 0x8
 */
int PlayData::getMoney_Old() { return mPokoCountOld; }

/**
 * @note Address: 0x801E9AFC
 * @note Size: 0xA4
 */
bool PlayData::isCaveFirstTime_Old(int courseIndex, ID32& caveID)
{
	CourseInfo* info = Game::stageList->getCourseInfo(courseIndex);
	if (info) {
		CaveOtakara* otakara = &mCaveOtakaraOld[courseIndex];
		int caveIndex        = info->getCaveIndex_FromID(caveID);
		if (caveIndex != -1) {
			if (0 <= caveIndex && caveIndex < otakara->mCaveCount) {
				return otakara->_08[caveIndex] == 0;
			}
			return false;
		}
	}
	return false;
}

/**
 * @note Address: 0x801E9BA0
 * @note Size: 0xD4
 */
void PlayData::read_CaveOtakara_Old(Stream& ram)
{
	u16 max = stageList->mCourseCount;
	for (int i = 0; i < max; i++) {
		CaveOtakara* ota = &mCaveOtakaraOld[i];
		ota->read(ram);
	}
}

/**
 * @note Address: 0x801E9C74
 * @note Size: 0x118
 */
void PlayData::write_CaveOtakara_Old(Stream& ram)
{
	ram.textBeginGroup("＊洞窟情報(Old)＊");
	u16 max = stageList->getCourseCount();
	for (int i = 0; i < max; i++) {
		CaveOtakara* ota = &mCaveOtakaraOld[i];
		ota->write(ram);
	}
	ram.textEndGroup();
}

/**
 * @note Address: 0x801E9D8C
 * @note Size: 0x78
 */
int PlayData::getPikminCount_Today(int pikminColor)
{
	P2ASSERTBOUNDSLINE(2114, FirstPikmin, pikminColor, StoredPikiCount + 1);
	return mPikminToday[pikminColor];
}

/**
 * @note Address: 0x801E9E04
 * @note Size: 0x78
 */
int PlayData::getPikminCount_Yesterday(int pikminColor)
{
	P2ASSERTBOUNDSLINE(2121, FirstPikmin, pikminColor, StoredPikiCount + 1);
	return mPikminYesterday[pikminColor];
}

/**
 * @note Address: 0x801E9E7C
 * @note Size: 0x108
 */
void PlayData::setPikminCounts_Today()
{
	BirthMgr::account_today_adjust();
	BirthMgr::account_today();

	GameStat::PikiCounter* cont1 = &GameStat::zikatuPikis;
	GameStat::PikiCounter* cont2 = &GameStat::alivePikis;

	for (int i = FirstPikmin; i < StoredPikiCount + 1; i++) {
		if (i == AllPikmin) {
			int pikiheads = generatorCache->getTotalMePikmins();
			int pikis     = GameStat::alivePikis;
			int pikidiff  = pikis - GameStat::zikatuPikis;
			if (pikidiff < 0)
				pikidiff = 0;
			int pikis3      = mPikiContainer.getTotalSum();
			mPikminToday[i] = pikiheads + pikidiff + pikis3;
		} else {
			int pikiheads = generatorCache->getColorMePikmins(i);
			int pikis     = cont2->mPikiCounts[i] - cont1->mPikiCounts[i];
			if (pikis < 0)
				pikis = 0;
			int pikis3      = mPikiContainer.getColorSum(i);
			mPikminToday[i] = pikiheads + pikis + pikis3;
		}
	}
}

/**
 * @note Address: 0x801E9F84
 * @note Size: 0x34
 */
void PlayData::setPikminCounts_Yesterday()
{
	for (int i = FirstPikmin; i < StoredPikiCount + 1; i++) {
		mPikminYesterday[i] = mPikminToday[i];
	}
}
} // namespace Game
