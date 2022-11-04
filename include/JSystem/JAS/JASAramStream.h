#ifndef _JSYSTEM_JAS_JASARAMSTREAM_H
#define _JSYSTEM_JAS_JASARAMSTREAM_H

#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "JSystem/JAS/JASChannel.h"
#include "JSystem/JAS/JASDsp.h"
#include "types.h"

/**
 * @size{0x2DC}
 */
struct JASAramStream {
	typedef void (*JASAramStreamCallback)(u32, JASAramStream*, void*);

	/** @fabricated */
	struct HeaderLoadTaskArgs {
		JASAramStream* m_stream; // _00
		u32 _04;                 // _04
		int _08;                 // _08
	};

	/** @fabricated */
	struct FirstLoadTaskArgs {
		JASAramStream* m_stream; // _00
		u32 _04;                 // _04
		u32 _08;                 // _08
	};

	JASAramStream();

	void init(u32, u32, JASAramStreamCallback, void*);
	BOOL prepare(long streamDataFileNumber, int p2);
	int start();
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
	static u32 finishTask(void*);
	static u32 prepareFinishTask(void*);
	static void channelProcCallback(void*);
	static int dvdErrorCheck(void*);
	static void channelCallback(u32, JASChannel*, JASDsp::TChannel*, void*);

	OSMessageQueue m_msgQueueA;        // _00
	OSMessageQueue m_msgQueueB;        // _20
	void* m_msgSlotsA[16];             // _40
	void* m_msgSlotsB[4];              // _80
	u8 _90[0xF0];                      // _90 - unknown
	JASChannel* _180[6];               // _180
	JASChannel* _198;                  // _198
	u8 _19C;                           // _19C
	u8 _19D;                           // _19D
	u8 _19E;                           // _19E
	u32 _1A0;                          // _1A0
	u8 _1A4[8];                        // _1A4 - unknown
	int _1AC;                          // _1AC
	u8 _1B0[4];                        // _1B0 - unknown
	u32 _1B4;                          // _1B4
	f32 _1B8;                          // _1B8
	DVDPlayer _1BC;                    // _1BC
	u32 _1F8;                          // _1F8
	int _1FC;                          // _1FC
	int _200;                          // _200
	u8 _204;                           // _204
	int _208;                          // _208
	u8 _20C[0xC];                      // _20C - unknown
	s16 _218;                          // _218
	u32 _21C;                          // _21C
	u8 _220[0x18];                     // _220 - unknown
	u32 _238;                          // _238
	u32 _23C;                          // _23C
	JASAramStreamCallback* m_callback; // _240
	void* _244;                        // _244
	s16 _248;                          // _248
	u16 _24A;                          // _24A
	u32 _24C;                          // _24C
	int _250;                          // _250
	u8 _254[4];                        // _254 - unknown
	u8 _258;                           // _258
	u32 : 0;
	u8 _25C[8]; // _25C - unknown
	f32 _264;   // _264
	f32 _268;   // _268
	f32 _26C;   // _26C
	f32 _270;   // _270
	f32 _274;   // _274
	f32 _278;   // _278
	f32 _27C;   // _27C
	f32 _280;   // _280
	f32 _284;   // _284
	f32 _288;   // _288
	f32 _28C;   // _28C
	f32 _290;   // _290
	f32 _294;   // _294
	f32 _298;   // _298
	f32 _29C;   // _29C
	f32 _2A0;   // _2A0
	f32 _2A4;   // _2A4
	f32 _2A8;   // _2A8
	f32 _2AC;   // _2AC
	f32 _2B0;   // _2B0
	f32 _2B4;   // _2B4
	f32 _2B8;   // _2B8
	f32 _2BC;   // _2BC
	f32 _2C0;   // _2C0
	f32 _2C4;   // _2C4
	f32 _2C8;   // _2C8
	s16 _2CC;   // _2CC
	u32 : 0;
	u8 _2D0[8]; // _2D0 - unknown
	u8 _2D8;    // _2D8
};

#endif
