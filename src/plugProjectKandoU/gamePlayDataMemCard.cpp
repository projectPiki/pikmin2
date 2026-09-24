#include "Game/BirthMgr.h"
#include "Game/Data.h"
#include "Game/DeathMgr.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"
#include "Game/TimeMgr.h"
#include "Game/gameStages.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* name, ...)
{
	OSReport("PlayDataMemCard");
}

namespace Game {

int PlayData::sCurrPlayDataSize = 0;
int PlayData::sMaxPlayDataSize  = 0;

u32 PlayData::mVersion = 'j009';

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void PlayData::prepareSave()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8021CFF4
 * @note Size: 0x740
 */
void PlayData::write(Stream& output)
{
	int startPosition = output.mPosition;
	int courseCount;
	int dataSize;

	output.textBeginGroup("* Version *");
	ID32 IStack312(PlayData::mVersion);
	IStack312.write(output);
	output.textEndGroup();

	output.textBeginGroup("* お宝個数 *"); // 'number of treasures'
	output.writeInt(mTreasureCount);
	output.textEndGroup();

	output.textBeginGroup("* 返済度フラグ *"); // 'repayment flag'
	getDebtProgressFlags().writeBytes(output);
	output.textEndGroup();

	output.textBeginGroup("* クリアフラグ *"); // 'clear flag'
	output.writeBytes(&mStoryFlags, 1);
	output.textEndGroup();

	output.textBeginGroup("* セーブフラグ/オニョンフラグ *"); // 'save flag/onyon flag'
	output.textWriteTab(output.mTabCount);
	output.writeByte(mLoadType);
	output.textWriteText("\r\n");
	output.textWriteTab(output.mTabCount);
	output.writeByte(mHasContainerFlags);
	output.textWriteText("# has container flag\r\n");
	output.textWriteTab(output.mTabCount);
	output.writeByte(mHasBootContainerFlags);
	output.textWriteText("# has boot container flag\r\n");
	output.textWriteTab(output.mTabCount);
	output.writeByte(mMeetPikminFlags);
	output.textWriteText("# meet pikmin flag\r\n");
	output.textEndGroup();

	output.textBeginGroup("* 日にち *"); // 'date' (?)
	mTekiStatMgr.write(output);
	output.textEndGroup();

	output.textBeginGroup("* 日にち *"); // 'date' (?)
	output.textWriteTab(output.mTabCount);
	output.writeInt(gameSystem->mTimeMgr->mDayCount);
	output.textWriteText("\r\n");
	output.textEndGroup();

	output.textBeginGroup("* オリマー装備他/OlimarData *"); // 'olimar equipment etc./OlimarData'
	mOlimarData[0].write(output);
	mOlimarData[1].write(output);
	output.textEndGroup();

	output.textBeginGroup("* 洞窟状況/CaveSaveData *"); // 'cave situation/CaveSaveData'
	mCaveSaveData.write(output);
	output.textEndGroup();

	output.textBeginGroup("* メール/MailSaveData *"); // 'email/MailSaveData'
	mMailSaveData.write(output);
	output.textEndGroup();

	output.textBeginGroup("* コンテナ/ContainerPikmin *"); // 'container/ContainerPikmin'
	mPikiContainer.write(output);
	output.textEndGroup();

	output.textBeginGroup("* ペレット/PelletMemory *"); // 'pellet/PelletMemory'
	mZukanStat->write(output);
	output.textEndGroup();

	output.textBeginGroup("* ペレット/１日にとったもの(Main) *"); // 'pellets/taken in 1 day (Main)'
	mMainCropMemory->write(output);
	output.textEndGroup();

	output.textBeginGroup("* ペレット/地下でとったもの(Cave) *"); // 'pellets/taken underground (Cave)'
	mCaveCropMemory->write(output);
	output.textEndGroup();

	output.textBeginGroup("* ドーピング情報/Doping *"); // 'doping information/Doping'
	char textBuffer[256];
	for (int i = 0; i < 2; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeInt(mSprayCount[i]);
		sprintf(textBuffer, "\t# dope[%d]\r\n", i);
		output.textWriteText(textBuffer);
	}
	for (int i = 0; i < 2; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeInt(mBerryCount[i]);
		sprintf(textBuffer, "\t# dope-実[%d]\r\n", i); // 'dope-berry'
		output.textWriteText(textBuffer);
	}
	output.textEndGroup();

	output.textBeginGroup("* コース情報 *"); // 'course information'
	courseCount = stageList->getCourseCount();
	output.textWriteTab(output.mTabCount);
	output.writeInt(courseCount);
	output.textWriteText("\t# コース数\r\n"); // 'number of courses'
	for (int i = 0; i < courseCount; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeByte(mBitfieldPerCourse[i]);
		output.writeByte(mGroundOtakaraCollected[i]);
		CourseInfo* courseInfo = stageList->getCourseInfo(i);
		P2ASSERTLINE(325, courseInfo);
		sprintf(textBuffer, "\t# %s\r\n", courseInfo->mName);
		output.textWriteText(textBuffer);
	}
	output.textEndGroup();

	output.textBeginGroup("* 洞窟達成情報 *"); // 'cave achievement information'
	write_CaveOtakara(output);
	output.textEndGroup();

	output.textBeginGroup("* LimitGen *");
	courseCount = stageList->getCourseCount();
	for (int i = 0; i < courseCount; i++) {
		mLimitGen[i].write(output);
	}
	output.textEndGroup();

	output.textBeginGroup("* お金/洞窟で取得した一時的なお金 *"); // 'money/temporary money obtained in the cave'
	output.textWriteTab(output.mTabCount);
	output.writeInt(mPokoCount);
	output.writeInt(mCavePokoCount);
	output.textWriteText("\r\n");
	output.textEndGroup();

	output.textBeginGroup("* 出生数 *"); // 'number of births'
	Game::BirthMgr::write(output);
	output.textEndGroup();

	output.textBeginGroup("* 死亡数 *"); // 'number of deaths'
	Game::DeathMgr::write(output);
	output.textEndGroup();

	output.textBeginGroup("* オリマー死亡フラグ *"); // 'olimar death flag'
	output.textWriteTab(output.mTabCount);
	output.writeBytes(&mDeadNaviID.typeView, 1);
	output.textWriteText("\r\n");
	output.textWriteTab(output.mTabCount);
	output.writeFloat(mNaviLifeMax[0]);
	output.writeFloat(mNaviLifeMax[1]);
	output.textWriteText("\r\n");
	output.textEndGroup();

	output.textBeginGroup("* デモフラグ/特殊発見デモフラグ *"); // 'demo flag/special discovery demo flag'
	output.textWriteTab(output.mTabCount);
	mDemoFlags.write(output);
	mFindItemFlags.write(output);
	output.textWriteText("\r\n");
	output.textEndGroup();

	courseCount = stageList->getCourseCount();
	output.textBeginGroup("* WorldMap 演出用 *"); //  'WorldMap for performance' [staging?]
	for (int i = 0; i < courseCount; i++) {
		output.writeByte(mGroundOtakaraCollectedOld[i]);
	}
	output.writeInt(mPokoCountOld);
	write_CaveOtakara_Old(output);
	output.textEndGroup();

	dataSize = output.getStreamDistance(startPosition) + generatorCache->getHeapUsedSize();
	output.textBeginGroup("* DayEndResult用 *"); // 'for DayEndResult'
	for (int i = FirstPikmin; i < StoredPikiCount + 1; i++) {
		output.writeInt(mPikminYesterday[i]);
		output.writeInt(mPikminToday[i]);
		output.textWriteText("\r\n");
	}
	output.textEndGroup();

	output.textBeginGroup("* ジェネレータキャッシュ/GeneratorCache *"); // 'generator cache/GeneratorCache'
	generatorCache->write(output);
	output.textEndGroup();

	mBeforeSaveDelegate         = nullptr;
	PlayData::sCurrPlayDataSize = dataSize;
	if (PlayData::sMaxPlayDataSize < dataSize) {
		PlayData::sMaxPlayDataSize = dataSize;
	}
}

/**
 * @note Address: 0x8021D734
 * @note Size: 0x404
 */
void PlayData::read(Stream& input)
{
	int startPosition = input.mPosition;
	mOsTime           = OSGetTime();
	ID32 version;
	version.read(input);
	int id        = version.getID();
	u32 versionID = id;
	if (mVersion != id) {
		ID32 unusedVersion(mVersion);
	}

	if (versionID >= 'j004') {
		mTreasureCount = input.readInt();
	} else {
		mTreasureCount = 0;
	}

	if (versionID >= 'j001') {
		getDebtProgressFlags().readBytes(input);
	}

	mStoryFlags            = input.readByte();
	mLoadType              = input.readByte();
	mHasContainerFlags     = input.readByte();
	mHasBootContainerFlags = input.readByte();

	if (versionID >= 'j007') {
		mMeetPikminFlags = input.readByte();
	}

	mTekiStatMgr.read(input);
	gameSystem->mTimeMgr->mDayCount = input.readInt();
	mOlimarData[0].read(input);
	mOlimarData[1].read(input);
	mCaveSaveData.read(input, versionID);
	mMailSaveData.read(input);
	mPikiContainer.read(input);
	mZukanStat->read(input);
	mMainCropMemory->read(input);
	mCaveCropMemory->read(input);
	for (int i = 0; i < 2; i++) {
		mSprayCount[i] = input.readInt();
	}
	for (int i = 0; i < 2; i++) {
		mBerryCount[i] = input.readInt();
	}

	int courseNum = stageList->getCourseCount();
	int cardNum   = input.readInt();
	JUT_ASSERTLINE(633, cardNum == courseNum, "SaveData ERROR : CourseNum=%d (card num=%d)\n", courseNum, cardNum);
	for (int i = 0; i < courseNum; i++) {
		mBitfieldPerCourse[i] = input.readByte();
		if (versionID >= 'j005') {
			mGroundOtakaraCollected[i] = input.readByte();
		}
	}

	read_CaveOtakara(input);
	courseNum = stageList->getCourseCount();
	for (int i = 0; i < courseNum; i++) {
		mLimitGen[i].read(input);
	}

	mPokoCount     = input.readInt();
	mCavePokoCount = input.readInt();

	BirthMgr::read(input);
	DeathMgr::read(input);
	mDeadNaviID.typeView = input.readByte();

	if (versionID >= 'j006') {
		mNaviLifeMax[0] = input.readFloat();
		mNaviLifeMax[1] = input.readFloat();
	}

	mDemoFlags.read(input);
	mFindItemFlags.read(input);

	if (versionID >= 'j008') {
		courseNum = stageList->getCourseCount();
		for (int i = 0; i < courseNum; i++) {
			mGroundOtakaraCollectedOld[i] = input.readByte();
		}
		mPokoCountOld = input.readInt();
		read_CaveOtakara_Old(input);
	}

	for (int i = FirstPikmin; i < StoredPikiCount + 1; i++) {
		mPikminYesterday[i] = input.readInt();
		mPikminToday[i]     = input.readInt();
	}

	int dataSize = getDataSize(input, startPosition);
	generatorCache->read(input);
	PlayData::sCurrPlayDataSize = dataSize;
	if (PlayData::sMaxPlayDataSize < dataSize) {
		PlayData::sMaxPlayDataSize = dataSize;
	}
}

/**
 * read__Q34Game8PlayData8LimitGenFR6Stream
 * @note Address: 0x8021DB38
 * @note Size: 0x44
 */
void PlayData::LimitGen::read(Stream& input)
{
	mNonLoops.read(input);
	mLoops.read(input);
}

/**
 * write__Q34Game8PlayData8LimitGenFR6Stream
 * @note Address: 0x8021DB7C
 * @note Size: 0x78
 */
void PlayData::LimitGen::write(Stream& output)
{
	output.textBeginGroup("nonloops");
	mNonLoops.write(output);
	output.textEndGroup();
	output.textBeginGroup("loops");
	mLoops.write(output);
	output.textEndGroup();
}

/**
 * write__Q24Game11KindCounterFR6Stream
 * @note Address: N/A
 * @note Size: 0xC8
 */
void KindCounter::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	output.writeShort(mNumKinds);
	output.textBeginGroup("KindCounter");
	for (int i = 0; i < mNumKinds; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeByte(mKinds[i]);
		output.textWriteText("\t# [%d]\r\n", i);
	}
	output.textEndGroup();
}

/**
 * read__Q24Game11KindCounterFR6Stream
 * @note Address: N/A
 * @note Size: 0x98
 */
void KindCounter::read(Stream& input)
{
	u16 count = input.readShort();
	JUT_ASSERTLINE(794, count == (int)mNumKinds, "read count %d : mNumKinds %d : mismatch !\n", count, mNumKinds);
	for (int i = 0; i < mNumKinds; i++) {
		mKinds[i] = input.readByte();
	}
}

/**
 * write__Q24Game16PelletCropMemoryFR6Stream
 * @note Address: 0x8021DBF4
 * @note Size: 0x208
 */
void PelletCropMemory::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	output.textWriteText("# mOtakaraCounter\r\n");
	mOtakara.write(output);

	output.textWriteTab(output.mTabCount);
	output.textWriteText("# mItemCounter\r\n");
	mItem.write(output);

	output.textWriteTab(output.mTabCount);
	output.textWriteText("# mCarcassCounter\r\n");
	mCarcass.write(output);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_804827B8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	stw      r29, 0x14(r1)
	addi     r29, r5, lbl_804827B8@l
	stw      r28, 0x10(r1)
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x398
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 4(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x354
	bl       textBeginGroup__6StreamFPc
	li       r28, 0
	b        lbl_8021DCA0

lbl_8021DC6C:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 8(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	bl       writeByte__6StreamFUc
	mr       r3, r31
	mr       r5, r28
	addi     r4, r29, 0x360
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 1

lbl_8021DCA0:
	lhz      r0, 4(r30)
	cmpw     r28, r0
	blt      lbl_8021DC6C
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x3ac
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 0xc(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x354
	bl       textBeginGroup__6StreamFPc
	li       r28, 0
	b        lbl_8021DD34

lbl_8021DD00:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x10(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	bl       writeByte__6StreamFUc
	mr       r3, r31
	mr       r5, r28
	addi     r4, r29, 0x360
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 1

lbl_8021DD34:
	lhz      r0, 0xc(r30)
	cmpw     r28, r0
	blt      lbl_8021DD00
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x3c0
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 0x14(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x354
	bl       textBeginGroup__6StreamFPc
	li       r28, 0
	b        lbl_8021DDC8

lbl_8021DD94:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x18(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	bl       writeByte__6StreamFUc
	mr       r3, r31
	mr       r5, r28
	addi     r4, r29, 0x360
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 1

lbl_8021DDC8:
	lhz      r0, 0x14(r30)
	cmpw     r28, r0
	blt      lbl_8021DD94
	mr       r3, r31
	bl       textEndGroup__6StreamFv
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

/**
 * read__Q24Game16PelletCropMemoryFR6Stream
 * @note Address: 0x8021DDFC
 * @note Size: 0x150
 */
void PelletCropMemory::read(Stream& input)
{
	mOtakara.read(input);
	mItem.read(input);
	mCarcass.read(input);
}

/**
 * write__Q24Game10OlimarDataFR6Stream
 * @note Address: 0x8021DF4C
 * @note Size: 0x7C
 */
void OlimarData::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	mFlags.writeBytes(output);
	output.textWriteText("\t# itemFlag\r\n");
}

/**
 * read__Q24Game10OlimarDataFR6Stream
 * @note Address: 0x8021DFC8
 * @note Size: 0x5C
 */
void OlimarData::read(Stream& input)
{
	mFlags.readBytes(input);
}

/**
 * write__Q24Game12CaveSaveDataFR6Stream
 * @note Address: 0x8021E024
 * @note Size: 0x198
 */
void CaveSaveData::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	output.textWriteText("# formationPikmin\r\n");
	mCavePikis.write(output);

	output.textWriteTab(output.mTabCount);
	output.writeFloat(mTime);
	output.textWriteText("\t# time\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeByte(mCourseIdx);
	output.textWriteText("\t# curr course\r\n");

	output.textWriteTab(output.mTabCount);
	mCurrentCaveID.write(output);
	output.textWriteText("\t# curr cave\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeByte(mCurrentFloor);
	output.textWriteText("\t# curr cave\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeByte(mIsWaterwraithAlive);
	output.textWriteText("\t# blackman alive\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeFloat(mWaterwraithTimer);
	output.textWriteText("\t# blackman timer\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeByte(mActiveNaviID);
	output.textWriteText("\t# active player id\r\n");
}

/**
 * @note Address: 0x8021E1BC
 * @note Size: 0xD0
 */
void CaveSaveData::read(Stream& input, u32 size)
{
	mCavePikis.read(input);
	mTime      = input.readFloat();
	mCourseIdx = (s8)input.readByte();
	mCurrentCaveID.read(input);
	mCurrentFloor       = (s8)input.readByte();
	mIsWaterwraithAlive = input.readByte() != 0;
	mWaterwraithTimer   = input.readFloat();
	if ('j009' <= size) {
		mActiveNaviID = input.readByte();
	}
	return;
}
} // namespace Game
