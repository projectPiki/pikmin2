#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80099E60
 * Size:	000060
 */
JASBasicWaveBank::JASBasicWaveBank()
    : JASWaveBank()
    , mWaveTable(nullptr)
    , mTableSize(0)
    , mGroups(nullptr)
    , mGroupCount(0)
{
	OSInitMutex(&mMutex);
}

/*
 * --INFO--
 * Address:	80099F08
 * Size:	0000BC
 * __dt__16JASBasicWaveBankFv
 */
JASBasicWaveBank::~JASBasicWaveBank()
{
	delete[] mWaveTable;
	for (u32 i = 0; i < mGroupCount; i++) {
		delete mGroups[i];
	}
	delete[] mGroups;
}

/*
 * --INFO--
 * Address:	80099FC4
 * Size:	000024
 */
JASBasicWaveBank::TWaveGroup* JASBasicWaveBank::getWaveGroup(int groupIndex)
{
	if (groupIndex >= mGroupCount) {
		return nullptr;
	}
	return mGroups[groupIndex];
}

/*
 * --INFO--
 * Address:	80099FE8
 * Size:	0000E8
 */
void JASBasicWaveBank::setGroupCount(u32 count)
{
	for (int i = 0; i < mGroupCount; i++) {
		delete mGroups[i];
	}
	delete[] mGroups;
	mGroupCount = count;
	mGroups     = new (getCurrentHeap(), 0) TWaveGroup*[count];
	for (int i = 0; i < mGroupCount; i++) {
		mGroups[i] = new (getCurrentHeap(), 0) TWaveGroup(this);
	}
}

/*
 * --INFO--
 * Address:	8009A0D0
 * Size:	000064
 */
void JASBasicWaveBank::setWaveTableSize(u32 tableSize)
{
	delete[] mWaveTable;
	mWaveTable = new (JASWaveBank::getCurrentHeap(), 0) TWaveInfo*[tableSize];
	JASCalc::bzero(mWaveTable, tableSize * sizeof(TWaveHandle*));
	mTableSize = tableSize;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JASBasicWaveBank::incWaveTable(const JASBasicWaveBank::TWaveGroup*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// JASMutexLock::~JASMutexLock()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void JASBasicWaveBank::decWaveTable(const JASBasicWaveBank::TWaveGroup*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009A134
 * Size:	000030
 */
JASWaveHandle* JASBasicWaveBank::getWaveHandle(u32 handleIndex) const
{
	if (handleIndex >= mTableSize) {
		return nullptr;
	}
	if (mWaveTable[handleIndex] == nullptr) {
		return nullptr;
	}
	return &mWaveTable[handleIndex]->mHandle;
}

/*
 * --INFO--
 * Address:	8009A164
 * Size:	000058
 * __ct__Q216JASBasicWaveBank10TWaveGroupFP16JASBasicWaveBank
 */
JASBasicWaveBank::TWaveGroup::TWaveGroup(JASBasicWaveBank* bank)
    : JASWaveArc()
    , mBank(bank)
    , mInfo(nullptr)
    , mInfoCount(0)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 * __dt__10JASWaveArcFv
 */
// JASWaveArc::~JASWaveArc()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8009A1BC
 * Size:	0000B4
 * __dt__Q216JASBasicWaveBank10TWaveGroupFv
 */
JASBasicWaveBank::TWaveGroup::~TWaveGroup() { delete[] mInfo; }

/*
 * --INFO--
 * Address:	8009A2D0
 * Size:	0001BC
 */
void JASBasicWaveBank::TWaveGroup::setWaveCount(u32 count)
{
	delete[] mInfo;
	mInfoCount = count;
	mInfo      = new (getCurrentHeap(), 0) TWaveInfo[count];
	for (int i = 0; i < count; i++) {
		mInfo[i].mHandle.mHeap     = &mHeap;
		mInfo[i].mHandle.mInfo._24 = &_48; // TODO: Should _48 be the start of a struct?
	}
}

/*
 * --INFO--
 * Address:	8009A560
 * Size:	000090
 */
void JASBasicWaveBank::TWaveGroup::setWaveInfo(int infoIndex, u32 waveID, const JASWaveInfo& info)
{
	mInfo[infoIndex].mHandle.mWaveID   = waveID;
	mInfo[infoIndex].mHandle.mInfo     = info;
	mInfo[infoIndex].mHandle.mInfo._24 = &_48; // TODO: Should _48 be the start of a struct?
}

/*
 * --INFO--
 * Address:	8009A5F0
 * Size:	0000A0
 */
void JASBasicWaveBank::TWaveGroup::onLoadDone()
{
	JASBasicWaveBank* bank = mBank;
	JASMutexLock lock(&bank->mMutex);
	for (int i = 0; i < mInfoCount; i++) {
		u32 id              = getWaveID(i);
		TWaveInfo* currInfo = &mInfo[i];
		TWaveInfo** table   = bank->mWaveTable;
		currInfo->mPrev     = nullptr;
		currInfo->mNext     = table[id];
		if (table[id] != nullptr) {
			table[id]->mPrev = currInfo;
		}
		table[id] = currInfo;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lwz      r29, 0x5c(r3)
	addi     r3, r29, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	li       r30, 0
	mr       r28, r30
	mr       r31, r30
	b        lbl_8009A668

lbl_8009A624:
	mr       r3, r27
	mr       r4, r30
	bl       getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi
	lwz      r0, 0x60(r27)
	slwi     r4, r3, 2
	lwz      r3, 0x1c(r29)
	add      r5, r0, r28
	stw      r31, 0x38(r5)
	lwzx     r0, r3, r4
	stw      r0, 0x34(r5)
	lwzx     r6, r3, r4
	cmplwi   r6, 0
	beq      lbl_8009A65C
	stw      r5, 0x38(r6)

lbl_8009A65C:
	stwx     r5, r3, r4
	addi     r28, r28, 0x3c
	addi     r30, r30, 1

lbl_8009A668:
	lwz      r0, 0x64(r27)
	cmplw    r30, r0
	blt      lbl_8009A624
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009A690
 * Size:	0000E8
 */
void JASBasicWaveBank::TWaveGroup::onEraseDone()
{
	JASBasicWaveBank* bank = mBank;
	JASMutexLock lock(&bank->mMutex);
	for (int i = 0; i < mInfoCount; i++) {
		u32 id              = getWaveID(i);
		TWaveInfo* info     = bank->mWaveTable[id];
		TWaveInfo* currInfo = &mInfo[i];
		for (info; info; info = info->mNext) {
			if (info != currInfo) {
				continue;
			}

			if (!info->mPrev) {
				bank->mWaveTable[id] = info->mNext;
			} else {
				info->mPrev->mNext = info->mNext;
			}

			if (info->mNext) {
				info->mNext->mPrev = info->mPrev;
			}
			break;
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r30, 0x5c(r3)
	addi     r3, r30, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	li       r31, 0
	mr       r29, r31
	b        lbl_8009A744

lbl_8009A6CC:
	mr       r3, r28
	mr       r4, r31
	bl       getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi
	lwz      r4, 0x1c(r30)
	slwi     r3, r3, 2
	lwz      r0, 0x60(r28)
	lwzx     r5, r4, r3
	add      r0, r0, r29
	b        lbl_8009A734

lbl_8009A6F0:
	cmplw    r5, r0
	bne      lbl_8009A730
	lwz      r6, 0x38(r5)
	cmplwi   r6, 0
	bne      lbl_8009A710
	lwz      r0, 0x34(r5)
	stwx     r0, r4, r3
	b        lbl_8009A718

lbl_8009A710:
	lwz      r0, 0x34(r5)
	stw      r0, 0x34(r6)

lbl_8009A718:
	lwz      r3, 0x34(r5)
	cmplwi   r3, 0
	beq      lbl_8009A73C
	lwz      r0, 0x38(r5)
	stw      r0, 0x38(r3)
	b        lbl_8009A73C

lbl_8009A730:
	lwz      r5, 0x34(r5)

lbl_8009A734:
	cmplwi   r5, 0
	bne      lbl_8009A6F0

lbl_8009A73C:
	addi     r29, r29, 0x3c
	addi     r31, r31, 1

lbl_8009A744:
	lwz      r0, 0x64(r28)
	cmplw    r31, r0
	blt      lbl_8009A6CC
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
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
 * Address:	8009A778
 * Size:	000014
 */
u32 JASBasicWaveBank::TWaveGroup::getWaveID(int infoIndex) const { return mInfo[infoIndex].mHandle.mWaveID; }
