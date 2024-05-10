#ifndef _DVDTHREADCOMMAND_H
#define _DVDTHREADCOMMAND_H

#include "JSystem/JSupport/JSUList.h"
#include "Dolphin/os.h"
#include "AppThread.h"
#include "types.h"

struct JKRArchive;
struct JKRHeap;

struct DvdThreadCommand {
	enum EHeapDirection {
		EHD_Unknown0 = 0,
		EHD_Unknown1 = 1,
	};

	enum CommandMode {
		CM_Initialized = 0,
		CM_Processing  = 1,
		CM_Completed   = 2,
	};

	enum LoadType {
		LT_File     = 0,
		LT_Archive  = 1,
		LT_Callback = 2,
	};

	DvdThreadCommand();
	~DvdThreadCommand() {};
	void loadUseCallBack(struct IDelegate*);

	// unused/inlined:
	static JKRArchive* loadArchive(char*, JKRHeap*, DvdThreadCommand::EHeapDirection);
	void loadFile(char*, JKRHeap*, DvdThreadCommand::EHeapDirection);
	void invokeCallBack();
	void wait();
	void loading();
	void finish();
	void getDataType();
	bool checkExp(const char*) const;

	char* getArcPath() { return mArcPath; }

	IDelegate* mCallBack;            // _00
	int mLoadType;                   // _04
	char* mArcPath;                  // _08
	JKRArchive* mMountedArchive;     // _0C
	int _10;                         // _10
	EHeapDirection mHeapDirection;   // _14
	int mMode;                       // _18
	OSMutex mMutex;                  // _1C
	JKRHeap* mHeap;                  // _34
	OSMessageQueue mMsgQueue;        // _38
	void* mMsgBuffer;                // _58
	JSULink<DvdThreadCommand> mLink; // _5C
};

struct DvdThread : public AppThread {

	enum ESyncBlockFlag {
		BLOCKFLAG_Unk0 = 0,
	};

	DvdThread(u32, int, int);

	virtual ~DvdThread() { } // _08 (weak)
	virtual void* run();     // _0C

	void loadArchive(DvdThreadCommand*);
	void loadFile(DvdThreadCommand*);
	void sendCommand(DvdThreadCommand*);
	bool sync(DvdThreadCommand*, ESyncBlockFlag);
	int syncAll(ESyncBlockFlag);

	// _00 		= VTBL
	// _00-_7C 	= AppThread
	JSUList<DvdThreadCommand> mCommandList; // _7C
};

#endif
