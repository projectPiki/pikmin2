#ifndef _JSYSTEM_JKR_JKRDVDARAMRIPPER_H
#define _JSYSTEM_JKR_JKRDVDARAMRIPPER_H

#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JKRADCommand;

struct JKRDvdAramRipper {
	typedef void (*LoadCallback)(u32);
	static JKRAramBlock* loadToAram(char const* path, u32 addr, JKRExpandSwitch expandSwitch, u32 offset, u32 size, u32* sizePtr);
	static JKRAramBlock* loadToAram(s32 entryNum, u32 addr, JKRExpandSwitch expandSwitch, u32 offset, u32 size, u32* sizePtr);
	static JKRAramBlock* loadToAram(JKRDvdFile* dvdFile, u32 addr, JKRExpandSwitch expandSwitch, u32 offset, u32 size, u32* sizePtr);
	static JKRADCommand* loadToAram_Async(JKRDvdFile* dvdFile, u32 addr, JKRExpandSwitch expandSwitch, LoadCallback callback, u32 offset,
	                                      u32 size, u32* sizePtr);
	static JKRADCommand* callCommand_Async(JKRADCommand* command);
	static bool syncAram(JKRADCommand* command, BOOL isNonBlocking);

	// unused/inlined:
	static void loadToAram_Async(const char*, u32, JKRExpandSwitch, LoadCallback, u32, u32, u32*);
	static void loadToAram_Async(s32, u32, JKRExpandSwitch, LoadCallback, u32, u32, u32*);
	static void syncAramAll(int);
	static void countLeftSync();
	static void afterAramAsync(JKRADCommand*);

	static int getSZSBufferSize() { return sSZSBufferSize; }
	static bool isErrorRetry() { return errorRetry; }

	static JSUList<JKRADCommand> sDvdAramAsyncList;
	static bool errorRetry;
	static int sSZSBufferSize;
};

struct JKRADCommand : public JSULink<JKRADCommand> {
	JKRADCommand();
	~JKRADCommand();

	u8 _10[0x18];                             // _10 - unknown/padding
	JKRDvdFile* mDvdFile;                     // _28
	u32 mAddress;                             // _2C
	JKRAramBlock* mBlock;                     // _30
	JKRExpandSwitch mExpandSwitch;            // _34
	JKRDvdAramRipper::LoadCallback mCallBack; // _38
	u32 mFileOffset;                          // _3C
	u32 mSize;                                // _40
	u32* mSizePtr;                            // _44
	s32 mStatus;                              // _48, 0 = streaming, -1 = done
	bool mDoDeleteFile;                       // _4C, delete mDvdFile when deleting command
	JKRAramStreamCommand* mStreamCommand;     // _50
};

inline JKRAramBlock* JKRDvdToAram(s32 entrynum, u32 p2, JKRExpandSwitch expSwitch, u32 p4, u32 p5, u32* p6)
{
	return JKRDvdAramRipper::loadToAram(entrynum, p2, expSwitch, p4, p5, p6);
}

#endif
