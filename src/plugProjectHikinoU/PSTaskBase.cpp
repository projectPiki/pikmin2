#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "P2Macros.h"
#include "PSSystem/PSTaskBase.h"
#include "PSSystem/PSBgmTask.h"

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033E1F8
 * Size:	000054
 */
TaskBase::TaskBase()
    : _04(this)
    , _14(0)
    , _15(0)
    , _18(nullptr)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
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
		if (task->_18 && !task->_18->getList()) {
			i = -1;
		}
		if (i != -1) {
			i = task->task(track);
		}
		if (i == -1) {
			JSUPtrList::remove(taskLink);
			task->_14 = 0;
			task->_15 = 0;
			task->_18 = nullptr;
		}
		taskLink = (task->_15 != 0) ? taskLink->getNext() : nullptr;
	}
	OSUnlockMutex(&mMutex);

	return true;
}

/*
 * --INFO--
 * Address:	8033E24C
 * Size:	000024
 */
void TaskEntry::append(PSSystem::TaskBase* task) { append_Lock(&task->_04); }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void TaskEntry::remove(PSSystem::TaskBase* task) { remove_Lock(&task->_04); }

/*
 * --INFO--
 * Address:	8033E270
 * Size:	000034
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

/*
 * --INFO--
 * Address:	8033E2A4
 * Size:	000150
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

/*
 * --INFO--
 * Address:	8033E3F4
 * Size:	0000A0
 */
void TaskEntryMgr::appendEntry(PSSystem::TaskEntry* entry, PSSystem::DirectorBase* director)
{
	P2ASSERTLINE(220, entry);
	entry->mDirector = nullptr;
	if (director) {
		entry->setDirector(director);
	}
	append_Lock(&entry->_28);
}

/*
 * --INFO--
 * Address:	8033E494
 * Size:	000074
 */
void TaskEntryMgr::removeEntry(PSSystem::TaskEntry* entry)
{
	if (entry) {
		remove_Lock(&entry->_28);
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

/*
 * --INFO--
 * Address:	8033E508
 * Size:	0000A4
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
