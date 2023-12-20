#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "types.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileFinder.h"

/**
 * @note Address: 0x80022ADC
 * @note Size: 0x8C
 */
JKRArcFinder::JKRArcFinder(JKRArchive* archive, s32 startIdx, s32 length)
    : JKRFileFinder()
    , mArchive(archive)
{
	mIsAvailable = (length > 0);
	mStartIndex  = startIdx;
	mEndIndex    = startIdx + length - 1;
	mNextIndex   = mStartIndex;
	findNextFile();
}

/**
 * @note Address: 0x80022B68
 * @note Size: 0xAC
 */
bool JKRArcFinder::findNextFile()
{
	if (mIsAvailable) {
		mIsAvailable = (mNextIndex <= mEndIndex);
		if (mIsAvailable) {
			JKRArchive::SDirEntry entry;
			mIsAvailable   = mArchive->getDirEntry(&entry, mNextIndex);
			mFileName      = entry.mName;
			mFileIndex     = mNextIndex;
			mFileID        = entry.mID;
			mFileTypeFlags = entry.mFlags;
			mIsFileOrDir   = mFileTypeFlags >> 1 & 1;
			mNextIndex++;
		}
	}
	return mIsAvailable;
}

/**
 * @note Address: 0x80022C14
 * @note Size: 0x88
 */
JKRDvdFinder::JKRDvdFinder(const char* p1)
    : JKRFileFinder()
{
	mIsDvdOpen   = DVDOpenDir(const_cast<char*>(p1), &mFstEntry);
	mIsAvailable = mIsDvdOpen;
	findNextFile();
}

/**
 * @note Address: 0x80022C9C
 * @note Size: 0x80
 * __dt__12JKRDvdFinderFv
 */
JKRDvdFinder::~JKRDvdFinder()
{
	if (mIsDvdOpen) {
		DVDCloseDir(&mFstEntry);
	}
}

/**
 * @note Address: 0x80022D1C
 * @note Size: 0xA4
 * findNextFile__12JKRDvdFinderFv
 */
bool JKRDvdFinder::findNextFile()
{
	if (mIsAvailable) {
		DVDDirEntry entry;
		mIsAvailable = DVDReadDir(&mFstEntry, &entry);
		if (mIsAvailable) {
			mIsFileOrDir   = entry.isDir;
			mFileName      = entry.name;
			mFileIndex     = entry.entryNum;
			mFileID        = 0;
			mFileTypeFlags = mIsFileOrDir ? FILETYPE_Unk2 : FILETYPE_Unk1;
		}
	}
	return mIsAvailable;
}
