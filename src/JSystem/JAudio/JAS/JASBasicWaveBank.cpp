#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JKernel/JKRHeap.h"

/**
 * @note Address: 0x80099E60
 * @note Size: 0x60
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

/**
 * @note Address: 0x80099F08
 * @note Size: 0xBC
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

/**
 * @note Address: 0x80099FC4
 * @note Size: 0x24
 */
JASBasicWaveBank::TWaveGroup* JASBasicWaveBank::getWaveGroup(int groupIndex)
{
	if (groupIndex >= mGroupCount) {
		return nullptr;
	}
	return mGroups[groupIndex];
}

/**
 * @note Address: 0x80099FE8
 * @note Size: 0xE8
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

/**
 * @note Address: 0x8009A0D0
 * @note Size: 0x64
 */
void JASBasicWaveBank::setWaveTableSize(u32 tableSize)
{
	delete[] mWaveTable;
	mWaveTable = new (JASWaveBank::getCurrentHeap(), 0) TWaveInfo*[tableSize];
	JASCalc::bzero(mWaveTable, tableSize * sizeof(TWaveHandle*));
	mTableSize = tableSize;
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void JASBasicWaveBank::incWaveTable(const JASBasicWaveBank::TWaveGroup* wave)
{
	JASMutexLock lock(&mMutex);
	for (int i = 0; i < wave->mInfoCount; i++) {
		TWaveInfo** table   = &mWaveTable[wave->getWaveID(i)];
		TWaveInfo* currInfo = &wave->mInfo[i];
		currInfo->mPrev     = nullptr;
		currInfo->mNext     = (*table);
		if ((*table) != nullptr) {
			(*table)->mPrev = currInfo;
		}
		(*table) = currInfo;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void JASBasicWaveBank::decWaveTable(const JASBasicWaveBank::TWaveGroup* wave)
{
	JASMutexLock lock(&mMutex);
	for (int i = 0; i < wave->mInfoCount; i++) {
		u32 id              = wave->getWaveID(i);
		TWaveInfo* info     = mWaveTable[id];
		TWaveInfo* currInfo = &wave->mInfo[i];
		for (info; info; info = info->mNext) {
			if (info != currInfo) {
				continue;
			}

			if (!info->mPrev) {
				mWaveTable[id] = info->mNext;
			} else {
				info->mPrev->mNext = info->mNext;
			}

			if (info->mNext) {
				info->mNext->mPrev = info->mPrev;
			}
			break;
		}
	}
}

/**
 * @note Address: 0x8009A134
 * @note Size: 0x30
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

/**
 * @note Address: 0x8009A164
 * @note Size: 0x58
 * __ct__Q216JASBasicWaveBank10TWaveGroupFP16JASBasicWaveBank
 */
JASBasicWaveBank::TWaveGroup::TWaveGroup(JASBasicWaveBank* bank)
    : JASWaveArc()
    , mBank(bank)
    , mInfo(nullptr)
    , mInfoCount(0)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 * __dt__10JASWaveArcFv
 */
// JASWaveArc::~JASWaveArc()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8009A1BC
 * @note Size: 0xB4
 * __dt__Q216JASBasicWaveBank10TWaveGroupFv
 */
JASBasicWaveBank::TWaveGroup::~TWaveGroup() { delete[] mInfo; }

/**
 * @note Address: 0x8009A2D0
 * @note Size: 0x1BC
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

/**
 * @note Address: 0x8009A560
 * @note Size: 0x90
 */
void JASBasicWaveBank::TWaveGroup::setWaveInfo(int infoIndex, u32 waveID, const JASWaveInfo& info)
{
	mInfo[infoIndex].mHandle.mWaveID   = waveID;
	mInfo[infoIndex].mHandle.mInfo     = info;
	mInfo[infoIndex].mHandle.mInfo._24 = &_48; // TODO: Should _48 be the start of a struct?
}

/**
 * @note Address: 0x8009A5F0
 * @note Size: 0xA0
 */
void JASBasicWaveBank::TWaveGroup::onLoadDone()
{
	mBank->incWaveTable(this);
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

/**
 * @note Address: 0x8009A690
 * @note Size: 0xE8
 */
void JASBasicWaveBank::TWaveGroup::onEraseDone() { mBank->decWaveTable(this); }

/**
 * @note Address: 0x8009A778
 * @note Size: 0x14
 */
u32 JASBasicWaveBank::TWaveGroup::getWaveID(int infoIndex) const { return mInfo[infoIndex].mHandle.mWaveID; }
