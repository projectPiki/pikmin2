#ifndef _JSYSTEM_JAS_JASTRACK_H
#define _JSYSTEM_JAS_JASTRACK_H

#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAudio/JAS/JASSeqCtrl.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASRegisterParam.h"
#include "JSystem/JAudio/JAS/JASPlayer.h"

#define TRACKPORT_MAX (16)

struct JASTrack;

enum JASOuterParamFlag {
	OUTERPARAM_Volume     = 0x1,
	OUTERPARAM_Pitch      = 0x2,
	OUTERPARAM_Fxmix      = 0x4,
	OUTERPARAM_Pan        = 0x8,
	OUTERPARAM_Dolby      = 0x10,
	OUTERPARAM_Unk6       = 0x20,
	OUTERPARAM_Tempo      = 0x40,
	OUTERPARAM_FIR8Filter = 0x80,
	OUTERPARAM_IIR0       = 0x1000,
	OUTERPARAM_IIR1       = 0x2000,
	OUTERPARAM_IIR2       = 0x4000,
	OUTERPARAM_IIR3       = 0x8000,
	OUTERPARAM_Unk18      = 0x20000,

	OUTERPARAM_IIRFilter = OUTERPARAM_IIR0 | OUTERPARAM_IIR1 | OUTERPARAM_IIR2 | OUTERPARAM_IIR3,
};

enum JASRegisters {
	JASREG_Unk0 = 0,
	JASREG_Unk1 = 1,
	JASREG_Unk2 = 2,

	JASREG_Unk4 = 4,
	JASREG_Unk5 = 5,

	JASREG_BankNumber    = 0x20,
	JASREG_ProgramNumber = 0x21,
	JASREG_Unk34         = 0x22,
	JASREG_Unk35         = 0x23,

	JASREG_Unk40 = 0x28,
	JASREG_Unk41 = 0x29,
	JASREG_Unk42 = 0x2A,
	JASREG_Unk43 = 0x2B,

	JASREG_Unk44 = 0x2C, // related to children?
	JASREG_Unk45 = 0x2D, // related to channels?

	JASREG_SeqLoopTimer = 0x30,
};

/**
 * @size = 0xC
 */
struct JASVibrate {
	JASVibrate();

	void init();
	void incCounter();
	f32 getValue() const;

	f32 _00;    // _00
	f32 mDepth; // _04 - depth?
	f32 mPitch; // _08 - pitch?
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

	bool mIsActive;  // _00, if true, checks requests + returns data
	u8 mRequestFlag; // _01
	u8 mIntrFlag;    // _02
	u8 mTimerCount;  // _03, counts down mTimer from mMaxTime to 0, mTimerCount amount of times
	u32 mTimer;      // _04
	u32 mMaxTime;    // _08
	void* mData[8];  // _0C, might just be addresses?
};

/**
 * @size = 0x40
 */
struct JASTrackPort {
	void init();
	u16 readImport(int portNo);
	u16 readExport(int portNo);
	void writeImport(int portNo, u16 value);
	void writeExport(int portNo, u16 value);

	u8 mImportFlag[TRACKPORT_MAX]; // _00
	u8 mExportFlag[TRACKPORT_MAX]; // _10
	u16 mValue[TRACKPORT_MAX];     // _20
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
	void setFirFilter(s16*);
	void onSwitch(u16);
	// weak, but forced to exist via recursion in JASTrack::updateTempo
	f32 getTempo() const { return mTempo; }

	// unused/inlined:
	u16 getSwitch(); // maybe getOuterSwitch?
	void setIntFirFilter(s16 newValue, u8 index);

	u16 mOuterSwitch;  // _00 - outerSwitch?
	u16 mOuterUpdate;  // _02 - outerUpdate?
	f32 mVolume;       // _04
	f32 mPitch;        // _08
	f32 mFxmix;        // _0C
	f32 mDolby;        // _10
	f32 mPan;          // _14
	f32 mTempo;        // _18
	s16 mFirFilter[8]; // _1C - firFilter?
};

/**
 * @size = 0x358
 */
struct JASTrack : public JSUList<JASChannel> {
	typedef JASChannel* (*NoteOnCallback)(JASTrack*, u8, u8, u8, u8, u16);
	typedef u16 (*SeqCallback)(JASTrack*, u16);

	enum TimedParamType {
		TIMED_Volume      = 0,
		TIMED_Pitch       = 1,
		TIMED_Fxmix       = 2,
		TIMED_Pan         = 3,
		TIMED_Dolby       = 4,
		TIMED_Unk5        = 5,
		TIMED_Osc0_Width  = 6,
		TIMED_Osc0_Rate   = 7,
		TIMED_Osc0_Vertex = 8,
		TIMED_Osc1_Width  = 9,
		TIMED_Osc1_Rate   = 10,
		TIMED_Osc1_Vertex = 11,
		TIMED_IIR_Unk0    = 12,
		TIMED_IIR_Unk1    = 13,
		TIMED_IIR_Unk2    = 14,
		TIMED_IIR_Unk3    = 15,
		TIMED_Unk16       = 16,
		TIMED_Unk17       = 17,
		TIMED_Count, // 18
	};

	struct MoveParam_ {
		MoveParam_()
		    : mCurrentValue(0.0f)
		    , mTargetValue(0.0f)
		    , mMoveTime(0.0f)
		    , mMoveAmount(0.0f)
		{
		}

		inline void set(f32 value)
		{
			mCurrentValue = value;
			mTargetValue  = value;
		}

		f32 mCurrentValue; // _00
		f32 mTargetValue;  // _04
		f32 mMoveTime;     // _08
		f32 mMoveAmount;   // _0C
	};

	struct AInnerParam_ {
		AInnerParam_()
		    : mVolume()
		    , mPitch()
		    , mFxmix()
		    , mPan()
		    , mDolby()
		    , _50()
		    , mOsc0Width()
		    , mOsc0Rate()
		    , mOsc0Vertex()
		    , mOsc1Width()
		    , mOsc1Rate()
		    , mOsc1Vertex()
		    , mIIRs()
		    , _100()
		    , _110()
		{
		}

		MoveParam_ mVolume;     // _00
		MoveParam_ mPitch;      // _10
		MoveParam_ mFxmix;      // _20
		MoveParam_ mPan;        // _30
		MoveParam_ mDolby;      // _40
		MoveParam_ _50;         // _50
		MoveParam_ mOsc0Width;  // _60
		MoveParam_ mOsc0Rate;   // _70
		MoveParam_ mOsc0Vertex; // _80
		MoveParam_ mOsc1Width;  // _90
		MoveParam_ mOsc1Rate;   // _A0
		MoveParam_ mOsc1Vertex; // _B0
		MoveParam_ mIIRs[4];    // _C0
		MoveParam_ _100;        // _100
		MoveParam_ _110;        // _110
	};

	union TimedParam_ {
		TimedParam_() { }

		AInnerParam_ mInnerParam;            // get individual params by member name
		MoveParam_ mMoveParams[TIMED_Count]; // get individual params by index
	};

	enum ParamType {
		JASParam_Volume = 0,
		JASParam_Pitch  = 1,
		JASParam_Null   = 2,
		JASParam_Pan    = 3,
	};

	JASTrack();

	void init();
	void initTimed();
	s8 mainProc();
	void setInterrupt(u16);
	bool tryInterrupt();
	void assignExtBuffer(JASOuterParam*);
	void connectBus(int, int);
	int noteOn(u8, s32, s32, s32, u32);
	void overwriteOsc(JASChannel*);
	bool noteOff(u8, u16);
	int gateOn(u8, s32, s32, s32);
	bool checkNoteStop(s32);
	void oscSetupFull(u8, u32, u32);
	void oscSetupSimpleEnv(u8, u32);
	void oscSetupSimple(u8);
	void updateTimedParam();
	void updateTrackAll();
	void updateTrack(u32);
	void updateTempo();
	void updateSeq(u32, bool);
	s32 seqTimeToDspTime(s32, u8);
	void setParam(int type, f32 value, int);
	bool setSeqData(u8*, s32);
	bool startSeq();
	bool stopSeq();
	void stopSeqMain();
	void close();
	bool start(void*, u32);
	JASTrack* openChild(u8, u8);
	u32 exchangeRegisterValue(u8);
	u32 readReg32(u8);
	u16 readReg16(u8);
	void writeRegDirect(u8, u16);
	void writeRegParam(u8);
	u16 readSelfPort(int portNo);
	void writeSelfPort(int portNo, u16 value);
	bool writePortAppDirect(u32 portNo, u16 value);
	bool readPortAppDirect(u32 portNo, u16* outValue);
	bool writePortApp(u32, u16 value);
	bool readPortApp(u32, u16* outValue);
	void pause(bool, bool);
	int getTranspose() const;
	void setTempo(u16);
	void setTimebase(u16);
	f32 panCalc(f32 valA, f32 valB, f32 weight, u8 calcType);
	void setNoteMask(u8);
	void muteTrack(bool);

	static s32 rootCallback(void*);
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
	JASTrack* routeTrack(u32 count);
	void routeTrack(u32) const;
	void checkExportApp(u32) const;
	void checkImportApp(u32) const;
	int getFreeMemCount();
	int getChannelCount() const;
	int getReleaseChannelCount() const;

	inline JASSeqCtrl* getCtrl() { return &mSeqCtrl; }
	inline JASOuterParam* getExtBuffer() const { return mExtBuffer; }

	inline void initOscillators()
	{
		for (int i = 0; i < 2; i++) {
			mOscRoute[i] = 0xF;
			mOscData[i]  = JASPlayer::sEnvelopeDef;
		}
	}

	static struct JASSeqParser sParser;

	// these might be JSUList<JASChannel>, for whatever difference that may or may not make
	static JASTrack* sFreeList;
	static JASTrack* sFreeListEnd;

	static SeqCallback sCallBackFunc;

	// _00-_0C = JSUList
	JASSeqCtrl mSeqCtrl;               // _0C
	JASTrackPort mTrackPort;           // _54
	JASIntrMgr mIntrMgr;               // _94
	JASChannel* mChannels[8];          // _C0
	u32 _E0;                           // _E0
	u8 _E4;                            // _E4
	u8 _E5;                            // _E5, last note?
	u8 _E6;                            // _E6
	u8 _E7;                            // _E7 - might be padding
	JASVibrate mVibrate;               // _E8
	JASChannelUpdater mChannelUpdater; // _F4
	NoteOnCallback mNoteOnCallback;    // _144
	TimedParam_ mTimedParam;           // _148
	JASRegisterParam mRegisterParam;   // _268
	u8 _298[0x10];                     // _298, unknown
	JASOscillator::Data mOscData[2];   // _2A8
	u32 mOscRoute[2];                  // _2D8
	s16 _2E0[12];                      // _2E0
	JASTrack* mParentTrack;            // _2F8
	JASTrack* mChildList[16];          // _2FC
	JASOuterParam* mExtBuffer;         // _33C
	f32 _340;                          // _340
	f32 mCurrentTempo;                 // _344, actual calculated tempo for playback
	u32 _348;                          // _348
	u32 mUpdateFlags;                  // _34C
	u16 _350;                          // _350
	u16 mTempo;                        // _352, direct value read from bms
	u16 mTimeBase;                     // _354
	s8 mTranspose;                     // _356
	u8 _357;                           // _357
	u8 mPauseStatus;                   // _358
	u8 mVolumeMode;                    // _359
	u8 mNoteMask;                      // _35A
	u8 _35B;                           // _35B
	u8 mPanCalcType;                   // _35C
	u8 mFxmixCalcType;                 // _35D
	u8 mDolbyCalcType;                 // _35E
	u8 mParentPanCalcType;             // _35F
	u8 mParentFxmixCalcType;           // _360
	u8 mParentDolbyCalcType;           // _361
	bool mIsPaused;                    // _362
	bool mIsMuted;                     // _363
	u8 mTimeRelate;                    // _364
	u8 _365;                           // _365
	u8 _366;                           // _366
};

#endif
