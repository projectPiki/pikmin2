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

	virtual ~JKRFile() { }                                               // _08 (weak)
	virtual bool open(const char* path)                             = 0; // _0C
	virtual void close()                                            = 0; // _10
	virtual int readData(void* addr, s32 length, s32 offset)        = 0; // _14
	virtual int writeData(const void* addr, s32 length, s32 offset) = 0; // _18
	virtual int getFileSize() const                                 = 0; // _1C

	void read(void* data, s32 length, s32 offset);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	bool mFileOpen; // _18
};

// Size: 0xF8
struct JKRDvdFile : public JKRFile {
	JKRDvdFile();
	JKRDvdFile(const char* path);
	JKRDvdFile(s32 entryNum);
	virtual ~JKRDvdFile();                                           // _08
	virtual bool open(const char* path);                             // _0C
	virtual void close();                                            // _10
	virtual int readData(void* addr, s32 length, s32 offset);        // _14
	virtual int writeData(const void* addr, s32 length, s32 offset); // _18
	virtual int getFileSize() const { return mDvdPlayer.length; }    // _1C (weak)
	virtual bool open(s32 entryNum);                                 // _20

	inline int readDataAsync(void* addr, s32 length, s32 offset)
	{
		OSLockMutex(&mDvdMutex);
		s32 retAddr;
		if (mThread != nullptr) {
			OSUnlockMutex(&mDvdMutex);
			retAddr = -1;
		} else {
			mThread = OSGetCurrentThread();
			retAddr = -1;
			if (DVDReadAsyncPrio(&mDvdPlayer, addr, length, offset, doneProcess, 2)) {
				retAddr = (s32)sync();
			}
			mThread = nullptr;
			OSUnlockMutex(&mDvdMutex);
		}
		return retAddr;
	}

	inline int writeDataAsync(const void* addr, s32 length, s32 offset) { return -1; }

	inline DVDFileInfo* getFileInfo() { return &mDvdPlayer; }

	void initiate();
	s32 sync();

	static void doneProcess(s32 result, DVDFileInfo* info);

	static JSUList<JKRDvdFile> sDvdList;

	// _00     = VTBL
	// _00-_1C = JKRFile
	OSMutex mDvdMutex;                // _1C
	OSMutex mAramMutex;               // _34
	JKRAramBlock* mBlock;             // _4C
	OSThread* mCommandThread;         // _50
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
