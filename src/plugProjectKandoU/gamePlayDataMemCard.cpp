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
void _Print(char* name, ...) { OSReport("PlayDataMemCard"); }

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

	output.textBeginGroup("* Version *");
	ID32 IStack312(PlayData::mVersion);
	IStack312.write(output);
	output.textEndGroup();

	output.textBeginGroup("* お宝個数 *"); // 'number of treasures'
	output.writeInt(mTreasureCount);
	output.textEndGroup();

	output.textBeginGroup("* 返済度フラグ *"); // 'repayment flag'
	u8* flags = &mDebtProgressFlags.typeView;
	for (u32 i = 0; i < 2; i++) {
		output.writeByte(flags[i]);
	}
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
	writeSprayCounts(output, textBuffer);
	writeBerryCounts(output, textBuffer);
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
	output.writeBytes(&mDeadNaviID, 1);
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

	courseCount = stageList->mCourseCount;
	output.textBeginGroup("* WorldMap 演出用 *"); //  'WorldMap for performance' [staging?]
	for (int i = 0; i < courseCount; i++) {
		output.writeByte(mGroundOtakaraCollectedOld[i]);
	}
	output.writeInt(mPokoCountOld);
	write_CaveOtakara_Old(output);
	output.textEndGroup();

	int dataSize = getDataSize(output, startPosition);
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

	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stmw     r25, 0x124(r1)
	mr       r29, r4
	lis      r4, lbl_804827B8@ha
	mr       r28, r3
	addi     r31, r4, lbl_804827B8@l
	mr       r3, r29
	addi     r4, r31, 0x10
	lwz      r30, 8(r29)
	bl       textBeginGroup__6StreamFPc
	lwz      r4, mVersion__Q24Game8PlayData@sda21(r13)
	addi     r3, r1, 8
	bl       __ct__4ID32FUl
	mr       r4, r29
	addi     r3, r1, 8
	bl       write__4ID32FR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x1c
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0xbc(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x2c
	bl       textBeginGroup__6StreamFPc
	li       r26, 0
	addi     r27, r28, 0xf0

lbl_8021D078:
	lbz      r4, 0(r27)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	addi     r26, r26, 1
	addi     r27, r27, 1
	cmplwi   r26, 2
	blt      lbl_8021D078
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x40
	bl       textBeginGroup__6StreamFPc
	mr       r3, r29
	lbz      r4, 0x2f(r28)
	bl       writeByte__6StreamFUc
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x54
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x19(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x2c(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0x74
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x2d(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0x8c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x2e(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0xa8
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xc0
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x40
	bl       write__Q34Game8TekiStat3MgrFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xc0
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r3, r29
	lwz      r4, 0x40(r4)
	lwz      r4, 0x218(r4)
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xcc
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x48
	bl       write__Q24Game10OlimarDataFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x4a
	bl       write__Q24Game10OlimarDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xec
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x4c
	bl       write__Q24Game12CaveSaveDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x108
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x84
	bl       write__Q32kh6Screen12MailSaveDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x120
	bl       textBeginGroup__6StreamFPc
	addi     r3, r28, 0xa8
	mr       r4, r29
	lwz      r12, 0xa8(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x140
	bl       textBeginGroup__6StreamFPc
	lwz      r3, 0xb0(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x15c
	bl       textBeginGroup__6StreamFPc
	lwz      r3, 0xb4(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x180
	bl       textBeginGroup__6StreamFPc
	lwz      r3, 0xb8(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x1a4
	bl       textBeginGroup__6StreamFPc
	li       r27, 0
	mr       r26, r28

lbl_8021D304:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xc0(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r5, r27
	addi     r3, r1, 0x14
	addi     r4, r31, 0x1c0
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x14
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r27, r27, 1
	addi     r26, r26, 4
	cmpwi    r27, 2
	blt      lbl_8021D304
	li       r27, 0
	mr       r26, r28

lbl_8021D358:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xc8(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r5, r27
	addi     r3, r1, 0x14
	addi     r4, r31, 0x1d0
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x14
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r27, r27, 1
	addi     r26, r26, 4
	cmpwi    r27, 2
	blt      lbl_8021D358
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x1e4
	bl       textBeginGroup__6StreamFPc
	lwz      r5, stageList__4Game@sda21(r13)
	mr       r3, r29
	lwz      r4, 0x414(r29)
	lhz      r26, 0x100(r5)
	bl       textWriteTab__6StreamFi
	mr       r3, r29
	mr       r4, r26
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r31, 0x1f4
	crclr    6
	bl       textWriteText__6StreamFPce
	li       r25, 0
	b        lbl_8021D46C

lbl_8021D3F0:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xd8(r28)
	mr       r3, r29
	lbzx     r4, r4, r25
	bl       writeByte__6StreamFUc
	lwz      r4, 0xdc(r28)
	mr       r3, r29
	lbzx     r4, r4, r25
	bl       writeByte__6StreamFUc
	lwz      r3, stageList__4Game@sda21(r13)
	mr       r4, r25
	bl       getCourseInfo__Q24Game6StagesFi
	or.      r27, r3, r3
	bne      lbl_8021D444
	addi     r3, r31, 0x204
	addi     r5, r31, 0x21c
	li       r4, 0x145
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021D444:
	lwz      r5, 0x14(r27)
	addi     r3, r1, 0x14
	addi     r4, r2, lbl_8051A07C@sda21
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x14
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r25, r25, 1

lbl_8021D46C:
	cmpw     r25, r26
	blt      lbl_8021D3F0
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x228
	bl       textBeginGroup__6StreamFPc
	mr       r3, r28
	mr       r4, r29
	bl       write_CaveOtakara__Q24Game8PlayDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x23c
	bl       textBeginGroup__6StreamFPc
	lwz      r3, stageList__4Game@sda21(r13)
	li       r25, 0
	li       r27, 0
	lhz      r26, 0x100(r3)
	b        lbl_8021D4D4

lbl_8021D4BC:
	lwz      r0, 0xe4(r28)
	mr       r4, r29
	add      r3, r0, r27
	bl       write__Q34Game8PlayData8LimitGenFR6Stream
	addi     r27, r27, 0x10
	addi     r25, r25, 1

lbl_8021D4D4:
	cmpw     r25, r26
	blt      lbl_8021D4BC
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x24c
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xe8(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	lwz      r4, 0xec(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x270
	bl       textBeginGroup__6StreamFPc
	mr       r3, r29
	bl       write__Q24Game8BirthMgrFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x27c
	bl       textBeginGroup__6StreamFPc
	mr       r3, r29
	bl       write__Q24Game8DeathMgrFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x288
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	mr       r3, r29
	lbz      r4, 0x20(r28)
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x24(r28)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	lfs      f1, 0x28(r28)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x2a0
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	mr       r4, r29
	addi     r3, r28, 0x30
	bl       write__8BitFlagsFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x38
	bl       write__8BitFlagsFR6Stream
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	lwz      r5, stageList__4Game@sda21(r13)
	mr       r3, r29
	addi     r4, r31, 0x2c4
	lhz      r26, 0x100(r5)
	bl       textBeginGroup__6StreamFPc
	li       r25, 0
	b        lbl_8021D64C

lbl_8021D638:
	lwz      r4, 0xf4(r28)
	mr       r3, r29
	lbzx     r4, r4, r25
	bl       writeByte__6StreamFUc
	addi     r25, r25, 1

lbl_8021D64C:
	cmpw     r25, r26
	blt      lbl_8021D638
	lwz      r4, 0xfc(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r28
	mr       r4, r29
	bl       write_CaveOtakara_Old__Q24Game8PlayDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	lwz      r5, generatorCache__4Game@sda21(r13)
	mr       r3, r29
	lwz      r0, 8(r29)
	addi     r4, r31, 0x2d8
	lwz      r6, 0x88(r5)
	lwz      r5, 0x80(r5)
	subf     r0, r30, r0
	subf     r5, r6, r5
	add      r27, r0, r5
	bl       textBeginGroup__6StreamFPc
	li       r25, 0
	mr       r26, r28

lbl_8021D6A4:
	lwz      r4, 0x100(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	lwz      r4, 0x118(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r25, r25, 1
	addi     r26, r26, 4
	cmpwi    r25, 6
	blt      lbl_8021D6A4
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x2ec
	bl       textBeginGroup__6StreamFPc
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r29
	bl       write__Q24Game14GeneratorCacheFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	li       r0, 0
	stw      r0, 0x1c(r28)
	lwz      r0, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)
	stw      r27, sCurrPlayDataSize__Q24Game8PlayData@sda21(r13)
	cmpw     r0, r27
	bge      lbl_8021D720
	stw      r27, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)

lbl_8021D720:
	lmw      r25, 0x124(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
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
		u8* debtFlags = &mDebtProgressFlags.typeView;
		for (u32 i = 0; i < 2; i++) {
			debtFlags[i] = input.readByte();
		}
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
	readSprayCounts(input);
	readBerryCounts(input);

	int courseNum = stageList->mCourseCount;
	int cardNum   = input.readInt();
	JUT_ASSERTLINE(633, cardNum == courseNum, "SaveData ERROR : CourseNum=%d (card num=%d)\n", courseNum, cardNum);
	for (int i = 0; i < courseNum; i++) {
		mBitfieldPerCourse[i] = input.readByte();
		if (versionID >= 'j005') {
			mGroundOtakaraCollected[i] = input.readByte();
		}
	}

	read_CaveOtakara(input);
	courseNum = stageList->mCourseCount;
	for (int i = 0; i < courseNum; i++) {
		mLimitGen[i].read(input);
	}

	mPokoCount     = input.readInt();
	mCavePokoCount = input.readInt();

	BirthMgr::read(input);
	DeathMgr::read(input);
	mDeadNaviID = input.readByte();

	if (versionID >= 'j006') {
		mNaviLifeMax[0] = input.readFloat();
		mNaviLifeMax[1] = input.readFloat();
	}

	mDemoFlags.read(input);
	mFindItemFlags.read(input);

	if (versionID >= 'j008') {
		courseNum = stageList->mCourseCount;
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

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r29, r4
	mr       r28, r3
	lwz      r31, 8(r4)
	bl       OSGetTime
	stw      r4, 0xd4(r28)
	stw      r3, 0xd0(r28)
	addi     r3, r1, 0x14
	bl       __ct__4ID32Fv
	mr       r4, r29
	addi     r3, r1, 0x14
	bl       read__4ID32FR6Stream
	lwz      r0, 0x1c(r1)
	lwz      r4, mVersion__Q24Game8PlayData@sda21(r13)
	mr       r30, r0
	cmplw    r4, r0
	beq      lbl_8021D78C
	addi     r3, r1, 8
	bl       __ct__4ID32FUl

lbl_8021D78C:
	lis      r3, 0x6A303034@ha
	addi     r0, r3, 0x6A303034@l
	cmplw    r30, r0
	blt      lbl_8021D7AC
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xbc(r28)
	b        lbl_8021D7B4

lbl_8021D7AC:
	li       r0, 0
	stw      r0, 0xbc(r28)

lbl_8021D7B4:
	lis      r3, 0x6A303031@ha
	addi     r0, r3, 0x6A303031@l
	cmplw    r30, r0
	blt      lbl_8021D7E8
	li       r26, 0
	addi     r27, r28, 0xf0

lbl_8021D7CC:
	mr       r3, r29
	bl       readByte__6StreamFv
	addi     r26, r26, 1
	stb      r3, 0(r27)
	cmplwi   r26, 2
	addi     r27, r27, 1
	blt      lbl_8021D7CC

lbl_8021D7E8:
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x2f(r28)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x19(r28)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x2c(r28)
	mr       r3, r29
	bl       readByte__6StreamFv
	lis      r4, 0x6A303037@ha
	stb      r3, 0x2d(r28)
	addi     r0, r4, 0x6A303037@l
	cmplw    r30, r0
	blt      lbl_8021D834
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x2e(r28)

lbl_8021D834:
	mr       r4, r29
	addi     r3, r28, 0x40
	bl       read__Q34Game8TekiStat3MgrFR6Stream
	mr       r3, r29
	bl       readInt__6StreamFv
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r4, r29
	lwz      r5, 0x40(r5)
	stw      r3, 0x218(r5)
	addi     r3, r28, 0x48
	bl       read__Q24Game10OlimarDataFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x4a
	bl       read__Q24Game10OlimarDataFR6Stream
	mr       r4, r29
	mr       r5, r30
	addi     r3, r28, 0x4c
	bl       read__Q24Game12CaveSaveDataFR6StreamUl
	mr       r4, r29
	addi     r3, r28, 0x84
	bl       read__Q32kh6Screen12MailSaveDataFR6Stream
	addi     r3, r28, 0xa8
	mr       r4, r29
	lwz      r12, 0xa8(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb0(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb4(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb8(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r27, 0
	mr       r26, r28

lbl_8021D8F0:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r27, r27, 1
	stw      r3, 0xc0(r26)
	cmpwi    r27, 2
	addi     r26, r26, 4
	blt      lbl_8021D8F0
	li       r27, 0
	mr       r26, r28

lbl_8021D914:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r27, r27, 1
	stw      r3, 0xc8(r26)
	cmpwi    r27, 2
	addi     r26, r26, 4
	blt      lbl_8021D914
	lwz      r4, stageList__4Game@sda21(r13)
	mr       r3, r29
	lhz      r26, 0x100(r4)
	bl       readInt__6StreamFv
	cmpw     r3, r26
	beq      lbl_8021D970
	lis      r5, lbl_804829BC@ha
	lis      r4, lbl_80482AD0@ha
	addi     r0, r5, lbl_804829BC@l
	mr       r7, r3
	addi     r5, r4, lbl_80482AD0@l
	mr       r6, r26
	mr       r3, r0
	li       r4, 0x279
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021D970:
	lis      r3, 0x6A303035@ha
	li       r25, 0
	addi     r27, r3, 0x6A303035@l
	b        lbl_8021D9AC

lbl_8021D980:
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0xd8(r28)
	cmplw    r30, r27
	stbx     r3, r4, r25
	blt      lbl_8021D9A8
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0xdc(r28)
	stbx     r3, r4, r25

lbl_8021D9A8:
	addi     r25, r25, 1

lbl_8021D9AC:
	cmpw     r25, r26
	blt      lbl_8021D980
	mr       r3, r28
	mr       r4, r29
	bl       read_CaveOtakara__Q24Game8PlayDataFR6Stream
	lwz      r3, stageList__4Game@sda21(r13)
	li       r25, 0
	li       r27, 0
	lhz      r26, 0x100(r3)
	b        lbl_8021D9EC

lbl_8021D9D4:
	lwz      r0, 0xe4(r28)
	mr       r4, r29
	add      r3, r0, r27
	bl       read__Q34Game8PlayData8LimitGenFR6Stream
	addi     r27, r27, 0x10
	addi     r25, r25, 1

lbl_8021D9EC:
	cmpw     r25, r26
	blt      lbl_8021D9D4
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xe8(r28)
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xec(r28)
	mr       r3, r29
	bl       read__Q24Game8BirthMgrFR6Stream
	mr       r3, r29
	bl       read__Q24Game8DeathMgrFR6Stream
	mr       r3, r29
	bl       readByte__6StreamFv
	lis      r4, 0x6A303036@ha
	stb      r3, 0x20(r28)
	addi     r0, r4, 0x6A303036@l
	cmplw    r30, r0
	blt      lbl_8021DA50
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x24(r28)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x28(r28)

lbl_8021DA50:
	mr       r4, r29
	addi     r3, r28, 0x30
	bl       read__8BitFlagsFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x38
	bl       read__8BitFlagsFR6Stream
	lis      r3, 0x6A303038@ha
	addi     r0, r3, 0x6A303038@l
	cmplw    r30, r0
	blt      lbl_8021DABC
	lwz      r3, stageList__4Game@sda21(r13)
	li       r25, 0
	lhz      r26, 0x100(r3)
	b        lbl_8021DA9C

lbl_8021DA88:
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0xf4(r28)
	stbx     r3, r4, r25
	addi     r25, r25, 1

lbl_8021DA9C:
	cmpw     r25, r26
	blt      lbl_8021DA88
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xfc(r28)
	mr       r3, r28
	mr       r4, r29
	bl       read_CaveOtakara_Old__Q24Game8PlayDataFR6Stream

lbl_8021DABC:
	li       r25, 0
	mr       r26, r28

lbl_8021DAC4:
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0x100(r26)
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r25, r25, 1
	stw      r3, 0x118(r26)
	cmpwi    r25, 6
	addi     r26, r26, 4
	blt      lbl_8021DAC4
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r29
	lwz      r0, 8(r29)
	lwz      r6, 0x88(r3)
	lwz      r5, 0x80(r3)
	subf     r0, r31, r0
	subf     r5, r6, r5
	add      r26, r0, r5
	bl       read__Q24Game14GeneratorCacheFR6Stream
	lwz      r0, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)
	stw      r26, sCurrPlayDataSize__Q24Game8PlayData@sda21(r13)
	cmpw     r0, r26
	bge      lbl_8021DB24
	stw      r26, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)

lbl_8021DB24:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
	for (u32 i = 0; i < 2; i++) {
		output.writeByte(mFlags[i]);
	}
	output.textWriteText("\t# itemFlag\r\n");
}

/**
 * read__Q24Game10OlimarDataFR6Stream
 * @note Address: 0x8021DFC8
 * @note Size: 0x5C
 */
void OlimarData::read(Stream& input)
{
	for (u32 i = 0; i < 2; i++) {
		mFlags[i] = input.readByte();
	}
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
