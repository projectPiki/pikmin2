#ifndef _JSYSTEM_JAS_JASARAMSTREAM_H
#define _JSYSTEM_JAS_JASARAMSTREAM_H

#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "types.h"

/**
 * @size{0x2DC}
 */
struct JASAramStream {
	typedef void (*JASAramStreamCallback)(u32, JASAramStream*, void*);

	/** @fabricated */
	struct HeaderLoadTaskArgs {
		JASAramStream* mStream; // _00
		u32 _04;                // _04
		int _08;                // _08
	};

	/** @fabricated */
	struct FirstLoadTaskArgs {
		JASAramStream* mStream; // _00
		u32 _04;                // _04
		u32 _08;                // _08
	};

	JASAramStream();

	void init(u32, u32, JASAramStreamCallback, void*);
	BOOL prepare(long inode, int p2);
	BOOL start();
	int stop(u16);
	bool pause(bool);
	int cancel();
	bool headerLoad(u32, int);
	bool load();
	void updateChannel(u32, JASChannel*, JASDsp::TChannel*);
	int channelProc();
	char* channelStart();
	void channelStop(u16);

	static void initSystem(u32, u32);
	static void headerLoadTask(void*);
	static void firstLoadTask(void*);
	static bool loadToAramTask(void*);
	static void finishTask(void*);
	static void prepareFinishTask(void*);
	static long channelProcCallback(void*);
	static long dvdErrorCheck(void*);
	static void channelCallback(u32, JASChannel*, JASDsp::TChannel*, void*);

	// unused/inlined:
	void setLoadThread(JASTaskThread*);
	void setBusSetting(u32, u16);
	void prepare(const char*, int);
	void getBlockSamples() const;

	OSMessageQueue mMsgQueueA;       // _00
	OSMessageQueue mMsgQueueB;       // _20
	void* mMsgSlotsA[16];            // _40
	void* mMsgSlotsB[4];             // _80
	u8 _90[0xF0];                    // _90 - unknown
	JASChannel* _180[6];             // _180
	JASChannel* _198;                // _198
	u8 _19C;                         // _19C
	u8 _19D;                         // _19D
	u8 _19E;                         // _19E
	u32 _1A0;                        // _1A0
	u32 _1A4;                        // _1A4
	u32 _1A8;                        // _1A8
	int _1AC;                        // _1AC
	u8 _1B0;                         // _1B0
	u32 _1B4;                        // _1B4
	f32 _1B8;                        // _1B8
	DVDFileInfo mFileInfo;           // _1BC
	u32 _1F8;                        // _1F8
	int _1FC;                        // _1FC
	int _200;                        // _200
	u8 _204;                         // _204
	int _208;                        // _208
	u8 _20C[0xC];                    // _20C - unknown
	s16 _218;                        // _218
	u32 _21C;                        // _21C
	u16 _220[2][6];                  // _220
	u32 _238;                        // _238
	u32 _23C;                        // _23C
	JASAramStreamCallback mCallback; // _240
	void* _244;                      // _244
	u16 _248;                        // _248
	u16 _24A;                        // _24A
	u32 _24C;                        // _24C
	int _250;                        // _250
	u32 _254;                        // _254
	u8 _258;                         // _258
	u32 _25C;                        // _25C
	u32 _260;                        // _260
	f32 _264;                        // _264
	f32 _268;                        // _268
	f32 _26C[4][6];                  // _26C
	u16 _2CC[6];                     // _2CC
	u8 _2D8;                         // _2D8

	static JASTaskThread* sLoadThread;
	static u8* sReadBuffer;
	static u32 sBlockSize;
	static u32 sChannelMax;
	static bool sSystemPauseFlag;
	static bool sFatalErrorFlag;
};

#endif
