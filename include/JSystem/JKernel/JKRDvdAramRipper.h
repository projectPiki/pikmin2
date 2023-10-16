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
	static JKRAramBlock* loadToAram(char const*, u32, JKRExpandSwitch, u32, u32, u32*);
	static JKRAramBlock* loadToAram(long, u32, JKRExpandSwitch, u32, u32, u32*);
	static JKRAramBlock* loadToAram(JKRDvdFile*, u32, JKRExpandSwitch, u32, u32, u32*);
	static JKRADCommand* loadToAram_Async(JKRDvdFile*, u32, JKRExpandSwitch, LoadCallback, u32, u32, u32*);
	static JKRADCommand* callCommand_Async(JKRADCommand*);
	static bool syncAram(JKRADCommand*, int);

	// unused/inlined:
	static void loadToAram_Async(const char*, u32, JKRExpandSwitch, LoadCallback, u32, u32, u32*);
	static void loadToAram_Async(long, u32, JKRExpandSwitch, LoadCallback, u32, u32, u32*);
	static void syncAramAll(int);
	static void countLeftSync();
	static void afterAramAsync(JKRADCommand*);

	static JSUList<JKRADCommand> sDvdAramAsyncList;
};

struct JKRADCommand : public JSULink<JKRADCommand> {
	JKRADCommand();
	~JKRADCommand();

	u8 _10[0x18];                             // _10 - unknown/padding
	JKRDvdFile* mDvdFile;                     // _28
	u32 _2C;                                  // _2C
	JKRAramBlock* mBlock;                     // _30
	JKRExpandSwitch _34;                      // _34
	JKRDvdAramRipper::LoadCallback mCallBack; // _38
	u32 _3C;                                  // _3C
	u32 _40;                                  // _40
	u32* _44;                                 // _44
	long _48;                                 // _48
	u8 _4C;                                   // _4C
	JKRAramStreamCommand* mStreamCommand;     // _50
};

inline JKRAramBlock* JKRDvdToAram(s32 entrynum, u32 p2, JKRExpandSwitch expSwitch, u32 p4, u32 p5, u32* p6)
{
	return JKRDvdAramRipper::loadToAram(entrynum, p2, expSwitch, p4, p5, p6);
}

#endif
