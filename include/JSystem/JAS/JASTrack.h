#ifndef _JSYSTEM_JAS_JASTRACK_H
#define _JSYSTEM_JAS_JASTRACK_H

#include "types.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAS/JASSeqCtrl.h"
#include "JSystem/JAS/JASChannel.h"
#include "JSystem/JAS/JASRegisterParam.h"

/**
 * @size = 0xC
 */
struct JASVibrate {
	float _00; // _00
	float _04; // _04 - depth?
	float _08; // _08 - pitch?
};

/**
 * @size = 0x2C
 */
struct JASIntrMgr {
	void init();
	void request(u32);
	void setIntr(u32, void*);
	void resetIntr(u32);
	void checkIntr();
	void timerProcess();

	u8 _00;  // _00
	u8 _01;  // _01
	u8 _02;  // _02
	u8 _03;  // _03
	u32 _04; // _04
	u32 _08; // _08
	u32 _0C; // _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C
	u32 _20; // _20
	u32 _24; // _24
	u32 _28; // _28
};

/**
 * @size = 0x40
 */
struct JASTrackPort {
	u8 _00[0x8];  // _00
	u8 _08[0x8];  // _08
	u8 _10[0x8];  // _10
	u8 _18[0x8];  // _18
	u16 _20[0x8]; // _20
	u16 _30[0x8]; // _30
};

/**
 * @size = 0x2C
 */
struct JASOuterParam {

	void setParam(u8, float);
	void onSwitch(u16);

	u16 _00;      // _00 - outerSwitch?
	u16 _02;      // _02 - outerUpdate?
	float _04;    // _04
	float _08;    // _08
	float _0C;    // _0C
	float _10;    // _10
	float _14;    // _14
	float _18;    // _18 - tempo?
	short _1C[8]; // _1C - firFilter?
};

/**
 * @size = 0x358
 */
struct JASTrack {
	JASTrack();

	void setTempo(u16);
	void setNoteMask(u8);
	void muteTrack(bool);

	struct MoveParam_ {
		MoveParam_();

		float _00; // _00
		float _04; // _04
		float _08; // _08
		float _0C; // _0C
	};

	struct AInnerParam_ {
		AInnerParam_();

		MoveParam_ _00[18]; // _00 - think this is just all MoveParam_s, but could be floats or a mix
	};

	struct TimedParam_ : public AInnerParam_ {
		TimedParam_();
	};

	void setParam(int, float, int);

	JSUPtrList _00;        // _00
	JASSeqCtrl _0C;        // _0C
	JASTrackPort _54;      // _54
	JASIntrMgr _94;        // _94
	JASChannel* _C0[8];    // _C0
	u32 _E0;               // _E0
	u8 _E4;                // _E4
	u8 _E5;                // _E5
	u8 _E6;                // _E6
	u8 _E7;                // _E7 - might be padding
	JASVibrate _E8;        // _E8
	JASChannelUpdater _F4; // _F4
	void* _144;            // _144 - unknown pointer/code?
	TimedParam_ _148;      // _148
	JASRegisterParam _268; // _268
	u8 _298[0x10];         // _298 - unknown
	u32 _2A8;              // _2A8
	float _2AC;            // _2AC
	void* _2B0;            // _2B0 - unknown pointer - table?
	void* _2B4;            // _2B4 - unknown pointer - reltable?
	float _2B8;            // _2B8
	float _2BC;            // _2BC
	u32 _2C0;              // _2C0
	float _2C4;            // _2C4
	void* _2C8;            // _2C8 - unknown pointer - table?
	void* _2CC;            // _2CC - unknown pointer - reltable?
	float _2D0;            // _2D0
	float _2D4;            // _2D4
	u32 _2D8;              // _2D8
	u32 _2DC;              // _2DC
	short _2E0[12];        // _2E0
	JASTrack* _2F8;        // _2F8
	JASTrack* _2FC;        // _2FC
	u32 _300[15];          // _300 - unknown
	JASOuterParam* _33C;   // _33C
	float _340;            // _340
	float _344;            // _344
	u32 _348;              // _348
	u32 _34C;              // _34C - unknown
	u16 _350;              // _350
	u16 _352;              // _352
	u16 _354;              // _354
	u8 _356;               // _356
	u8 _357;               // _357
};

#endif
