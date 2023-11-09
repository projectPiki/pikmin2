#ifndef _JSYSTEM_JAS_JASTRACK_H
#define _JSYSTEM_JAS_JASTRACK_H

#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAudio/JAS/JASSeqCtrl.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASRegisterParam.h"

struct JASTrack;

/**
 * @size = 0xC
 */
struct JASVibrate {
	JASVibrate();

	void init();
	void incCounter();
	f32 getValue() const;

	f32 _00; // _00
	f32 _04; // _04 - depth?
	f32 _08; // _08 - pitch?
};

/**
 * @size = 0x2C
 */
struct JASIntrMgr {
	void init();
	void request(u32);
	void setIntr(u32, void*);
	void resetInter(u32);
	void* checkIntr();
	void timerProcess();

	u8 _00;       // _00
	u8 _01;       // _01
	u8 _02;       // _02
	u8 _03;       // _03
	u32 _04;      // _04
	u32 _08;      // _08
	void* _0C[8]; // _0C
};

/**
 * @size = 0x40
 */
struct JASTrackPort {
	void init();
	u16 readImport(int);
	u16 readExport(int);
	void writeImport(int, u16);
	void writeExport(int, u16);

	u8 _00[0x10];  // _00
	u8 _10[0x10];  // _10
	u16 _20[0x10]; // _20
};

/**
 * @size = 0x2C
 */
struct JASOuterParam {
	JASOuterParam();

	void initExtBuffer();
	void setParam(u8, f32);
	void setOuterSwitch(u16 newValue);
	bool checkOuterSwitch(u16);
	void setOuterUpdate(u16 newValue);
	u16 getOuterUpdate();
	s16 getIntFirFilter(u8 index);
	void setFirFilter(short*);
	void onSwitch(u16);
	f32 getTempo() const;

	// unused/inlined:
	u16 getSwitch(); // maybe getOuterSwitch?
	void setIntFirFilter(s16 newValue, u8 index);

	u16 mOuterSwitch;  // _00 - outerSwitch?
	u16 mOuterUpdate;  // _02 - outerUpdate?
	f32 _04;           // _04
	f32 _08;           // _08
	f32 _0C;           // _0C
	f32 _10;           // _10
	f32 _14;           // _14
	f32 _18;           // _18 - tempo?
	s16 mFirFilter[8]; // _1C - firFilter?
};

/**
 * @size = 0x358
 */
struct JASTrack : JSUList<JASChannel> {
	typedef JASChannel* (*NoteOnCallback)(JASTrack*, u8, u8, u8, u8, u16);
	typedef u16 (*SeqCallback)(JASTrack*, u16);

	struct MoveParam_ {
		MoveParam_()
		    : _00(0.0f)
		    , _04(0.0f)
		    , _08(0.0f)
		    , _0C(0.0f)
		{
		}

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
	};

	struct AInnerParam_ {
		AInnerParam_()
		    : _00()
		    , _10()
		    , _20()
		    , _30()
		    , _40()
		    , _50()
		    , _60()
		    , _70()
		    , _80()
		    , _90()
		    , _A0()
		    , _B0()
		    , _C0()
		    , _100()
		    , _110()
		{
		}

		MoveParam_ _00;
		MoveParam_ _10;
		MoveParam_ _20;
		MoveParam_ _30;
		MoveParam_ _40;
		MoveParam_ _50;
		MoveParam_ _60;
		MoveParam_ _70;
		MoveParam_ _80;
		MoveParam_ _90;
		MoveParam_ _A0;
		MoveParam_ _B0;
		MoveParam_ _C0[4];
		MoveParam_ _100;
		MoveParam_ _110;
	};

	union TimedParam_ {
		TimedParam_() { }

		AInnerParam_ mInnerParam;
		MoveParam_ mMoveParams[0x12];
	};

	JASTrack();

	void init();
	void initTimed();
	s8 mainProc();
	void setInterrupt(u16);
	bool tryInterrupt();
	void assignExtBuffer(JASOuterParam*);
	void connectBus(int, int);
	int noteOn(u8, long, long, long, u32);
	void overwriteOsc(JASChannel*);
	bool noteOff(u8, u16);
	int gateOn(u8, long, long, long);
	BOOL checkNoteStop(long);
	void oscSetupFull(u8, u32, u32);
	void oscSetupSimpleEnv(u8, u32);
	void oscSetupSimple(u8);
	void updateTimedParam();
	void updateTrackAll();
	void updateTrack(u32);
	void updateTempo();
	void updateSeq(u32, bool);
	void seqTimeToDspTime(long, u8);
	void setParam(int, f32, int);
	bool setSeqData(u8*, long);
	bool startSeq();
	bool stopSeq();
	void stopSeqMain();
	void close();
	bool start(void*, u32);
	void openChild(u8, u8);
	void exchangeRegisterValue(u8);
	void readReg32(u8);
	u32 readReg16(u8);
	void writeRegDirect(u8, u16);
	void writeRegParam(u8);
	u16 readSelfPort(int portNumber);
	void writeSelfPort(int portNumber, u16 value);
	bool writePortAppDirect(u32, u16);
	bool readPortAppDirect(u32, u16*);
	void writePortApp(u32, u16);
	void readPortApp(u32, u16*);
	void pause(bool, bool);
	int getTranspose() const;
	void setTempo(u16);
	void setTimebase(u16);
	f32 panCalc(f32, f32, f32, u8);
	void setNoteMask(u8);
	void muteTrack(bool);

	static long rootCallback(void*);
	static void channelUpdateCallback(u32, JASChannel*, JASDsp::TChannel*, void*);
	static void newMemPool(int);
	static void registerSeqCallback(SeqCallback);

	// unused/inlined:
	~JASTrack();
	int inherit();
	void setBankNumber(u8);
	void setPanSwitchExt(u8, int);
	void setPanSwitchParent(u8, int);
	void setPanSwitchJcs(u8, int);
	void getBank() const;
	void getProgramNumber() const;
	void getVolume() const;
	void getPitch() const;
	void getPan() const;
	void getFxmix() const;
	void getDolby() const;
	void updateOscParam(int, f32);
	void muteChildTracks(u16);
	void loadTbl(u32, u32, u32);
	void routeTrack(u32);
	void routeTrack(u32) const;
	void checkExportApp(u32) const;
	void checkImportApp(u32) const;
	int getFreeMemCount();
	int getChannelCount() const;
	int getReleaseChannelCount() const;

	// JSUPtrList _00;        // _00
	JASSeqCtrl mSeqCtrl;               // _0C
	JASTrackPort mTrackPort;           // _54
	JASIntrMgr mIntrMgr;               // _94
	JASChannel* _C0[8];                // _C0
	u32 _E0;                           // _E0
	u8 _E4;                            // _E4
	u8 _E5;                            // _E5
	u8 _E6;                            // _E6
	u8 _E7;                            // _E7 - might be padding
	JASVibrate mVibrate;               // _E8
	JASChannelUpdater mChannelUpdater; // _F4
	NoteOnCallback _144;               // _144
	TimedParam_ mTimedParam;           // _148
	JASRegisterParam mRegisterParam;   // _268
	u8 _298[0x10];                     // _298 - unknown
	JASOscillator::Data _2A8[2];       // _2A8
	u32 _2D8[2];                       // _2D8
	short _2E0[12];                    // _2E0
	JASTrack* _2F8;                    // _2F8
	JASTrack* _2FC[16];                // _2FC
	JASOuterParam* mExtBuffer;         // _33C
	f32 _340;                          // _340
	f32 _344;                          // _344
	u32 _348;                          // _348
	u32 _34C;                          // _34C - unknown
	u16 _350;                          // _350
	u16 _352;                          // _352
	u16 _354;                          // _354
	s8 _356;                           // _356
	u8 _357;                           // _357
	u8 _358;                           // _358
	u8 mVolumeMode;                    // _359
	u8 _35A;                           // _35A
	u8 _35B;                           // _35B
	u8 _35C;                           // _35C
	u8 _35D;                           // _35D
	u8 _35E;                           // _35E
	u8 _35F;                           // _35F
	u8 _360;                           // _360
	u8 _361;                           // _361
	bool _362;                         // _362
	u8 _363;                           // _363
	u8 _364;                           // _364
	u8 _365;                           // _365
	u8 _366;                           // _366

	static struct JASSeqParser* sParser;

	// these might be JSUList<JASChannel>, for whatever difference that may or may not make
	static JASTrack* sFreeList;
	static JASTrack* sFreeListEnd;

	static SeqCallback sCallBackFunc;
};

#endif
