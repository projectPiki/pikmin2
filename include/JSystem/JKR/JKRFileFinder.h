#ifndef _JKRFILEFINDER_H
#define _JKRFILEFINDER_H

#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "types.h"

struct JKRArchive;

struct JKRFileFinderBase {
	char* m_fileName; // _00
	s32 _04;          // _04
	u16 _08;          // _08
	u16 _0A;          // _0A
};

struct JKRFileFinder : JKRFileFinderBase {
	inline JKRFileFinder()
	    : _10(false)
	    , _11(0)
	{
	}

	/**
	 * @reifiedAddress{800223E0}
	 * @reifiedFile{JSystem/JKR/JKRFileCache.cpp}
	 */
	virtual ~JKRFileFinder() { } // _08 (weak)

	// VT _0C
	bool _10; // _10
	bool _11; // _11
};

struct JKRArcFinder : JKRFileFinder {
	JKRArcFinder(JKRArchive*, long, long);

	virtual ~JKRArcFinder() { }  // _08 (weak)
	virtual bool findNextFile(); // _0C

	JKRArchive* m_archive; // _14
	s32 _18;               // _18
	s32 _1C;               // _1C
	s32 _20;               // _20
};

struct JKRDvdFinder : JKRFileFinder {
	JKRDvdFinder(const char*);

	virtual ~JKRDvdFinder() // _08 (weak)
	{
		if (_20) {
			DVDCloseDir(&m_fstEntry);
		}
	}
	virtual bool findNextFile(); // _0C

	OSFstEntry m_fstEntry; // _14
	bool _20;              // _20
};

#endif
