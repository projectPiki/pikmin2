#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "types.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileFinder.h"

/*
 * --INFO--
 * Address:	80022ADC
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	80022B68
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	80022C14
 * Size:	000088
 */
JKRDvdFinder::JKRDvdFinder(const char* p1)
    : JKRFileFinder()
{
	mIsDvdOpen   = DVDOpenDir(const_cast<char*>(p1), &mFstEntry);
	mIsAvailable = mIsDvdOpen;
	findNextFile();
}

/*
 * --INFO--
 * Address:	80022C9C
 * Size:	000080
 * __dt__12JKRDvdFinderFv
 */
JKRDvdFinder::~JKRDvdFinder()
{
	if (mIsDvdOpen) {
		DVDCloseDir(&mFstEntry);
	}
}

/*
 * --INFO--
 * Address:	80022D1C
 * Size:	0000A4
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
