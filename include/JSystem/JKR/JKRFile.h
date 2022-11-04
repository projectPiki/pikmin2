#ifndef _JSYSTEM_JKR_JKRFILE_H
#define _JSYSTEM_JKR_JKRFILE_H

#include "Dolphin/os.h"
#include "Dolphin/dvd.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JSUFileInputStream;

struct JKRFile : public JKRDisposer {
	inline JKRFile()
	    : JKRDisposer()
	    , _18(false)
	{
	}
	virtual ~JKRFile();                                 // _08 (weak)
	virtual u8 open(const char*)                   = 0; // _0C
	virtual void close()                           = 0; // _10
	virtual int readData(void*, long, long)        = 0; // _14
	virtual int writeData(const void*, long, long) = 0; // _18
	virtual int getFileSize() const                = 0; // _1C

	void read(void* a1, long a2, long a3);

	bool _18; // _18
};

// Size: 0xF8
struct JKRDvdFile : public JKRFile {
	JKRDvdFile();
	JKRDvdFile(const char*);
	JKRDvdFile(long);
	virtual ~JKRDvdFile();                          // _08
	virtual u8 open(const char*);                   // _0C
	virtual void close();                           // _10
	virtual int readData(void*, long, long);        // _14
	virtual int writeData(const void*, long, long); // _18
	virtual int getFileSize() const;                // _1C (weak)
	virtual u8 open(long);                          // _20

	inline int readDataAsync(void* buffer, long byteCount, long startOffset)
	{
		long result;
		OSLockMutex(&_1C);
		if (_F4) {
			OSUnlockMutex(&_1C);
			result = -1;
		} else {
			_F4    = OSGetCurrentThread();
			result = -1;
			if (DVDReadAsyncPrio(&m_dvdPlayer, buffer, byteCount, startOffset, (DVDDoneReadCallback*)doneProcess, 2)) {
				// result = (long)this;
				result = sync();
			}
			_F4 = nullptr;
			OSUnlockMutex(&_1C);
		}
		return result;
	}
	inline int writeDataAsync(const void*, long, long) { return -1; }

	void initiate();
	long sync();
	static BOOL doneProcess(long, DVDFileInfo*);

	OSMutexObject _1C;                 // _1C
	OSMutexObject _34;                 // _34
	u8 _4C[4];                         // _4C
	OSThread* _50;                     // _50
	JSUFileInputStream* m_inputStream; // _54
	u32 _58;                           // _58
	DVDPlayer m_dvdPlayer;             // _5C
	void* _98;                         // _98  Gets assigned `this` in initiate.
	OSMessageQueue _9C;                // _9C
	void* _BC;                         // _BC  Single msg slot for _9C
	OSMessageQueue _C0;                // _C0
	void* _E0;                         // _E0  Single msg slot for _C0
	JSUPtrLink _E4;                    // _E4
	OSThread* _F4;                     // _F4

	static JSUList<JKRDvdFile> sDvdList;
};

#endif
