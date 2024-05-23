#ifndef _JSYSTEM_JAS_JASARAMSTREAM_H
#define _JSYSTEM_JAS_JASARAMSTREAM_H

#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "types.h"

/**
 * @size{0x2DC}
 */
struct JASAramStream {
	typedef void (*JASAramStreamCallback)(u32, JASAramStream*, void*);

	/** @fabricated */
	struct HeaderLoadTaskArgs {
		JASAramStream* mStream; // _00
		u32 mDataLength;        // _04
		int mIndex;             // _08
	};

	/** @fabricated */
	struct FirstLoadTaskArgs {
		JASAramStream* mStream; // _00
		u32 mTotalLoadCount;    // _04
		u32 mIndex;             // _08
	};

	JASAramStream();

	void init(u32, u32, JASAramStreamCallback, void*);
	BOOL prepare(s32 inode, int p2);
	BOOL start();
	int stop(u16);
	bool pause(bool);
	int cancel();
	bool headerLoad(u32, int);
	bool load();
	void updateChannel(u32, JASChannel*, JASDsp::TChannel*);
	int channelProc();
	void channelStart();
	void channelStop(u16);

	static void initSystem(u32, u32);
	static void headerLoadTask(void*);
	static void firstLoadTask(void*);
	static void loadToAramTask(void*);
	static void finishTask(void*);
	static void prepareFinishTask(void*);
	static s32 channelProcCallback(void*);
	static s32 dvdErrorCheck(void*);
	static void channelCallback(u32, JASChannel*, JASDsp::TChannel*, void*);

	// unused/inlined:
	void setLoadThread(JASTaskThread*);
	void setBusSetting(u32, u16);
	void prepare(const char*, int);
	u32 getBlockSamples() const;

	OSMessageQueue mMsgQueueA;       // _00
	OSMessageQueue mMsgQueueB;       // _20
	void* mMsgSlotsA[16];            // _40
	void* mMsgSlotsB[4];             // _80
	JASWaveInfo mWaveInfos[6];       // _90
	JASChannel* mChannels[6];        // _180
	JASChannel* mActiveChannel;      // _198
	u8 _19C;                         // _19C
	u8 _19D;                         // _19D
	u8 mPauseFlags;                  // _19E
	u32 mCurrentReadOffset;          // _1A0
	u32 mNextBlockSample;            // _1A4
	u32 mNextReadOffset;             // _1A8
	int mMaxBlocks;                  // _1AC
	u8 _1B0;                         // _1B0
	u32 _1B4;                        // _1B4
	f32 _1B8;                        // _1B8
	DVDFileInfo mFileInfo;           // _1BC
	u32 mMaxLoadIndex;               // _1F8
	int mCurrentLoadIndex;           // _1FC
	int mCurrentBlock;               // _200
	u8 mAbortFlag;                   // _204
	u32 mLoadedCount;                // _208
	u32 mCurrentSampleOffset;        // _20C
	u32 mLoopSampleOffset;           // _210
	u32 mNextSampleOffset;           // _214
	u16 mEndSampleOffset;            // _218
	u32 mControlFlags;               // _21C
	s16 mSampleData[2][6];           // _220
	u32 mDataOffset;                 // _238
	u32 mDataLength;                 // _23C
	JASAramStreamCallback mCallback; // _240
	void* _244;                      // _244
	u16 mStreamType;                 // _248
	u16 mNumBlocks;                  // _24A
	u32 mCurrentBlockNum;            // _24C
	int mBlockCount;                 // _250
	u32 mSampleRate;                 // _254
	u8 mLoopFlag;                    // _258
	u32 mAramSize;                   // _25C
	u32 mFileSize;                   // _260
	f32 mVolume;                     // _264
	f32 mPitch;                      // _268
	f32 mChannelData[4][6];          // _26C, values (volume, pan, fxmix, dolby) for each of the 6 channels
	u16 mMixData[6];                 // _2CC
	u8 mUseStereo;                   // _2D8, related to pan

	static JASTaskThread* sLoadThread;
	static u8* sReadBuffer;
	static u32 sBlockSize;
	static u32 sChannelMax;
	static bool sSystemPauseFlag;
	static bool sFatalErrorFlag;
};

#endif
