#ifndef _JSYSTEM_JKR_JKRFILE_H
#define _JSYSTEM_JKR_JKRFILE_H

#include "Dolphin/os.h"
#include "Dolphin/dvd.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JSUFileInputStream;
struct JKRAramBlock;
struct JKRDvdFile;

// fabricated
struct JKRDVDFileInfo : public DVDFileInfo {
	// _00-_3C = DVDFileInfo
	JKRDvdFile* mFile; // _3C
};

struct JKRFile : public JKRDisposer {
	inline JKRFile()
	    : JKRDisposer()
	    , mFileOpen(false)
	{
	}

	virtual ~JKRFile() { }                              // _08 (weak)
	virtual bool open(const char*)                 = 0; // _0C
	virtual void close()                           = 0; // _10
	virtual int readData(void*, long, long)        = 0; // _14
	virtual int writeData(const void*, long, long) = 0; // _18
	virtual int getFileSize() const                = 0; // _1C

	void read(void* a1, long a2, long a3);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	bool mFileOpen; // _18
};

// Size: 0xF8
struct JKRDvdFile : public JKRFile {
	JKRDvdFile();
	JKRDvdFile(const char*);
	JKRDvdFile(long);
	virtual ~JKRDvdFile();                                        // _08
	virtual bool open(const char*);                               // _0C
	virtual void close();                                         // _10
	virtual int readData(void*, long, long);                      // _14
	virtual int writeData(const void*, long, long);               // _18
	virtual int getFileSize() const { return mDvdPlayer.length; } // _1C (weak)
	virtual bool open(long);                                      // _20

	inline int readDataAsync(void* addr, s32 length, s32 offset)
	{
		OSLockMutex(&mMutex1);
		s32 retAddr;
		if (mThread != nullptr) {
			OSUnlockMutex(&mMutex1);
			retAddr = -1;
		} else {
			mThread = OSGetCurrentThread();
			retAddr = -1;
			if (DVDReadAsyncPrio(&mDvdPlayer, addr, length, offset, doneProcess, 2)) {
				retAddr = (s32)sync();
			}
			mThread = nullptr;
			OSUnlockMutex(&mMutex1);
		}
		return retAddr;
	}

	inline int writeDataAsync(const void*, long, long) { return -1; }

	void initiate();
	long sync();

	static DVDDoneReadCallback doneProcess;

	static JSUList<JKRDvdFile> sDvdList;

	// _00     = VTBL
	// _00-_1C = JKRFile
	OSMutexObject mMutex1;            // _1C
	OSMutexObject mMutex2;            // _34
	JKRAramBlock* mBlock;             // _4C
	OSThread* _50;                    // _50
	JSUFileInputStream* mInputStream; // _54
	u32 _58;                          // _58
	DVDFileInfo mDvdPlayer;           // _5C
	JKRDvdFile* mDvdFile;             // _98  Gets assigned `this` in initiate.
	OSMessageQueue mMessageQueue1;    // _9C
	void* mMessage1;                  // _BC  Single msg slot for _9C
	OSMessageQueue mMessageQueue2;    // _C0
	void* mMessage2;                  // _E0  Single msg slot for _C0
	JSULink<JKRDvdFile> mLink;        // _E4
	OSThread* mThread;                // _F4
};

#endif
