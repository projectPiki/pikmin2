#ifndef _JSYSTEM_JAS_JASTRACK_H
#define _JSYSTEM_JAS_JASTRACK_H

#include "types.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAS/JASSeqCtrl.h"
#include "JSystem/JAS/JASChannel.h"
#include "JSystem/JAS/JASRegisterParam.h"

struct JASTrack;

typedef u16 SeqCallback(JASTrack*, u16);

/**
 * @size = 0xC
 */
struct JASVibrate {
	JASVibrate();

	void init();
	void incCounter();
	f32 getValue() const;

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
	void setParam(u8, float);
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

	u16 m_outerSwitch;  // _00 - outerSwitch?
	u16 m_outerUpdate;  // _02 - outerUpdate?
	float _04;          // _04
	float _08;          // _08
	float _0C;          // _0C
	float _10;          // _10
	float _14;          // _14
	float _18;          // _18 - tempo?
	s16 m_firFilter[8]; // _1C - firFilter?
};

/**
 * @size = 0x358
 */
struct JASTrack : JSUList<JASChannel> {
	struct MoveParam_ {
		MoveParam_();

		float _00; // _00
		float _04; // _04
		float _08; // _08
		float _0C; // _0C
	};

	struct AInnerParam_ {
		AInnerParam_();

		MoveParam_ _00[0x12]; // _00 - think this is just all MoveParam_s, but could be floats or a mix
	};

	struct TimedParam_ : public AInnerParam_ {
		TimedParam_();
	};

	JASTrack();

	void init();
	void initTimed();
	void mainProc();
	void setInterrupt(u16);
	bool tryInterrupt();
	void assignExtBuffer(JASOuterParam*);
	void connectBus(int, int);
	void noteOn(u8, long, long, long, u32);
	void overwriteOsc(JASChannel*);
	void noteOff(u8, u16);
	int gateOn(u8, long, long, long);
	bool checkNoteStop(long);
	void oscSetupFull(u8, u32, u32);
	void oscSetupSimpleEnv(u8, u32);
	void oscSetupSimple(u8);
	void updateTimedParam();
	void updateTrackAll();
	void updateTrack(u32);
	void updateTempo();
	void updateSeq(u32, bool);
	void seqTimeToDspTime(long, u8);
	void setParam(int, float, int);
	bool setSeqData(u8*, long);
	void startSeq();
	void stopSeq();
	void stopSeqMain();
	void close();
	bool start(void*, u32);
	void openChild(u8, u8);
	void exchangeRegisterValue(u8);
	void readReg32(u8);
	void readReg16(u8);
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
	float panCalc(float, float, float, u8);
	void rootCallback(void*);
	void channelUpdateCallback(unsigned long, JASChannel*, JASDsp::TChannel*, void*);
	void setNoteMask(u8);
	void muteTrack(bool);

	static void newMemPool(int);
	static void registerSeqCallback(SeqCallback*);

	// unused/inlined:
	~JASTrack();
	void inherit();
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
	void updateOscParam(int, float);
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
	JASSeqCtrl m_seqCtrl;               // _0C
	JASTrackPort m_trackPort;           // _54
	JASIntrMgr m_intrMgr;               // _94
	JASChannel* _C0[8];                 // _C0
	u32 _E0;                            // _E0
	u8 _E4;                             // _E4
	u8 _E5;                             // _E5
	u8 _E6;                             // _E6
	u8 _E7;                             // _E7 - might be padding
	JASVibrate m_vibrate;               // _E8
	JASChannelUpdater m_channelUpdater; // _F4
	void* _144;                         // _144 - unknown pointer/code?
	TimedParam_ m_timedParam;           // _148
	JASRegisterParam m_registerParam;   // _268
	u8 _298[0x10];                      // _298 - unknown
	u32 _2A8;                           // _2A8
	float _2AC;                         // _2AC
	void* _2B0;                         // _2B0 - unknown pointer - table?
	void* _2B4;                         // _2B4 - unknown pointer - reltable?
	float _2B8;                         // _2B8
	float _2BC;                         // _2BC
	u32 _2C0;                           // _2C0
	float _2C4;                         // _2C4
	void* _2C8;                         // _2C8 - unknown pointer - table?
	void* _2CC;                         // _2CC - unknown pointer - reltable?
	float _2D0;                         // _2D0
	float _2D4;                         // _2D4
	u32 _2D8;                           // _2D8
	u32 _2DC;                           // _2DC
	short _2E0[12];                     // _2E0
	JASTrack* _2F8;                     // _2F8
	JASTrack* _2FC[16];                 // _2FC
	JASOuterParam* m_extBuffer;         // _33C
	float _340;                         // _340
	float _344;                         // _344
	u32 _348;                           // _348
	u32 _34C;                           // _34C - unknown
	u16 _350;                           // _350
	u16 _352;                           // _352
	u16 _354;                           // _354
	s8 _356;                            // _356
	u8 _357;                            // _357
	u8 _358;                            // _358
	u8 m_volumeMode;                    // _359
	u8 _35A;                            // _35A
	u8 _35B;                            // _35B
	u8 _35C;                            // _35C
	u8 _35D;                            // _35D
	u8 _35E;                            // _35E
	u8 _35F;                            // _35F
	u8 _360;                            // _360
	u8 _361;                            // _361
	bool _362;                          // _362
	u8 _363;                            // _363
	u8 _364;                            // _364
	u8 _365;                            // _365
	u8 _366;                            // _366
};

#endif
