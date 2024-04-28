#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "P2Macros.h"
#include "PSSystem/PSTaskBase.h"
#include "PSSystem/PSBgmTask.h"

namespace PSSystem {

/**
 * @note Address: 0x8033E1F8
 * @note Size: 0x54
 */
TaskBase::TaskBase()
    : mLink(this)
    , mEnabled(false)
    , mHasNext(0)
    , mWaitTaskLink(nullptr)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
bool TaskEntry::stackTask(JASTrack& track)
{
	OSLockMutex(&mMutex);
	JSULink<TaskBase>* taskLink = getFirst();
	if (!taskLink) {
		OSUnlockMutex(&mMutex);
		mDirector = nullptr;
		return false;
	}

	while (taskLink) {
		TaskBase* task = taskLink->getObject();
		u32 i          = -16;
		if (task->mWaitTaskLink && !task->mWaitTaskLink->getList()) {
			i = -1;
		}
		if (i != -1) {
			i = task->task(track);
		}
		if (i == -1) {
			JSUPtrList::remove(taskLink);
			task->mEnabled      = 0;
			task->mHasNext      = 0;
			task->mWaitTaskLink = nullptr;
		}
		taskLink = (task->mHasNext != 0) ? taskLink->getNext() : nullptr;
	}
	OSUnlockMutex(&mMutex);

	return true;
}

/**
 * @note Address: 0x8033E24C
 * @note Size: 0x24
 */
void TaskEntry::append(PSSystem::TaskBase* task) { append_Lock(&task->mLink); }

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void TaskEntry::remove(PSSystem::TaskBase* task) { remove_Lock(&task->mLink); }

/**
 * @note Address: 0x8033E270
 * @note Size: 0x34
 */
bool TaskEntryMgr::isUnderTask_byDirector(PSSystem::DirectorBase* director)
{
	for (JSULink<TaskEntry>* entry = getFirst(); entry; entry = entry->getNext()) {
		if (entry->getObject()->mDirector == director) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8033E2A4
 * @note Size: 0x150
 */
void TaskEntryMgr::update()
{
	P2ASSERTLINE(197, mTrack);

	OSLockMutex(&mMutex);
	JSULink<TaskEntry>* first = getFirst();
	if (first && !first->getObject()->stackTask(getTrack())) {
		remove(first);
	}
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: 0x8033E3F4
 * @note Size: 0xA0
 */
void TaskEntryMgr::appendEntry(PSSystem::TaskEntry* entry, PSSystem::DirectorBase* director)
{
	P2ASSERTLINE(220, entry);
	entry->mDirector = nullptr;
	if (director) {
		entry->setDirector(director);
	}
	append_Lock(&entry->mTaskList);
}

/**
 * @note Address: 0x8033E494
 * @note Size: 0x74
 */
void TaskEntryMgr::removeEntry(PSSystem::TaskEntry* entry)
{
	if (entry) {
		remove_Lock(&entry->mTaskList);
		OSLockMutex(&entry->mMutex);
		JSULink<TaskBase>* taskLink = entry->getFirst();
		while (taskLink) {
			JSULink<TaskBase>* nextLink = taskLink->getNext();
			entry->JSUPtrList::remove(taskLink);
			taskLink = nextLink;
		}
		OSUnlockMutex(&entry->mMutex);
		entry->mDirector = nullptr;
	}
}

/**
 * @note Address: 0x8033E508
 * @note Size: 0xA4
 */
void TaskEntryMgr::removeAllEntry()
{
	OSLockMutex(&mMutex);
	JSULink<TaskEntry>* first = getFirst();
	if (first) {
		TaskEntry* entry = first->getObject();
		removeEntry(entry);
	}
	OSUnlockMutex(&mMutex);
}

} // namespace PSSystem
