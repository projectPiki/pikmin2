#ifndef _JKRFILEFINDER_H
#define _JKRFILEFINDER_H

#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "types.h"

struct JKRArchive;

struct JKRFileFinderBase {
	enum FileTypes {
		FILETYPE_Unk1 = 1,
		FILETYPE_Unk2 = 2,
	};

	char* mFileName;    // _00
	int mFileIndex;     // _04
	u16 mFileID;        // _08
	u16 mFileTypeFlags; // _0A
};

struct JKRFileFinder : public JKRFileFinderBase {
	inline JKRFileFinder()
	    : mIsAvailable(false)
	    , mIsFileOrDir(false)
	{
	}

	virtual ~JKRFileFinder() { }     // _08 (weak)
	virtual bool findNextFile() = 0; // _0C

	// _00     = VTBL
	// _00-_10 = JKRFileFinderBase
	bool mIsAvailable; // _10
	bool mIsFileOrDir; // _11
};

struct JKRArcFinder : public JKRFileFinder {
	JKRArcFinder(JKRArchive*, s32, s32);

	virtual ~JKRArcFinder() { }  // _08 (weak)
	virtual bool findNextFile(); // _0C

	// _00     = VTBL
	// _00-_14 = JKRFileFinder
	JKRArchive* mArchive; // _14
	int mStartIndex;      // _18
	int mEndIndex;        // _1C
	int mNextIndex;       // _20
};

struct JKRDvdFinder : public JKRFileFinder {
	JKRDvdFinder(const char*);

	virtual ~JKRDvdFinder();     // _08 (weak)
	virtual bool findNextFile(); // _0C

	// _00     = VTBL
	// _00-_14 = JKRFileFinder
	DVDDir mFstEntry; // _14
	bool mIsDvdOpen;  // _20
};

#endif
