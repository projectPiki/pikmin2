#ifndef _JSYSTEM_JAI_JAINTER_H
#define _JSYSTEM_JAI_JAINTER_H

#include "JSystem/JAudio/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAudio/JAS/JASPortArgs.h"
#include "JSystem/JAudio/JAS/JASPortCmd.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "types.h"
#include "Dolphin/mtx.h"

struct JAISequence;
struct JAISound;

namespace JAInter {
enum JAISoundTrackActiveFlags {
	SOUNDACTIVE_Unk0                 = 0,
	SOUNDACTIVE_Unk1                 = 1 << 0,  // 0x1
	SOUNDACTIVE_DoFadeout            = 1 << 1,  // 0x2
	SOUNDACTIVE_TempoProportion      = 1 << 2,  // 0x4
	SOUNDACTIVE_Unk4                 = 1 << 3,  // 0x8
	SOUNDACTIVE_Unk5                 = 1 << 4,  // 0x10
	SOUNDACTIVE_Unk6                 = 1 << 5,  // 0x20
	SOUNDACTIVE_TrackVolume          = 1 << 6,  // 0x40
	SOUNDACTIVE_TrackPan             = 1 << 7,  // 0x80
	SOUNDACTIVE_TrackDolby           = 1 << 8,  // 0x100
	SOUNDACTIVE_TrackPitch           = 1 << 9,  // 0x200
	SOUNDACTIVE_Unk11                = 1 << 10, // 0x400
	SOUNDACTIVE_TrackFxmix           = 1 << 11, // 0x800
	SOUNDACTIVE_TrackPortData        = 1 << 12, // 0x1000
	SOUNDACTIVE_Unk14                = 1 << 13, // 0x2000
	SOUNDACTIVE_Unk15                = 1 << 14, // 0x4000
	SOUNDACTIVE_Unk16                = 1 << 15, // 0x8000
	SOUNDACTIVE_Unk17                = 1 << 16, // 0x10000
	SOUNDACTIVE_Unk18                = 1 << 17, // 0x20000
	SOUNDACTIVE_Volume               = 1 << 18, // 0x40000
	SOUNDACTIVE_Pan                  = 1 << 19, // 0x80000
	SOUNDACTIVE_Pitch                = 1 << 20, // 0x100000
	SOUNDACTIVE_Fxmix                = 1 << 21, // 0x200000
	SOUNDACTIVE_Dolby                = 1 << 22, // 0x400000
	SOUNDACTIVE_TrackInterruptSwitch = 1 << 23, // 0x800000
};

namespace StreamMgr {
struct StreamUpdateData;
} // namespace StreamMgr

struct Actor;
struct DummyVec;
struct SeqUpdateData;

enum SoundInfoFlags {
	SOUNDFLAG_Unk0  = 1 << 0,  // 0x1
	SOUNDFLAG_Unk1  = 1 << 1,  // 0x2
	SOUNDFLAG_Unk2  = 1 << 2,  // 0x4
	SOUNDFLAG_Unk3  = 1 << 3,  // 0x8
	SOUNDFLAG_Unk4  = 1 << 4,  // 0x10
	SOUNDFLAG_Unk5  = 1 << 5,  // 0x20
	SOUNDFLAG_Unk6  = 1 << 6,  // 0x40
	SOUNDFLAG_Unk7  = 1 << 7,  // 0x80
	SOUNDFLAG_Unk8  = 1 << 8,  // 0x100
	SOUNDFLAG_Unk19 = 1 << 19, // 0x80000
};

struct SoundInfo {
	u32 mFlag;     // _00
	u8 mPriority;  // _04
	u8 _05;        // _05
	u16 mOffsetNo; // _06
	u32 mPitch;    // _08
	union Volume {
		u32 typeView;
		u8 byteView[4];
	} mVolume; // _0C
};

struct LinkSound {
	void init();
	JAISound* getSound();
	void releaseSound(JAISound*);

	// unused/inlined:
	void getFreeStartFirstObject();
	void getUsedEndFirstObject();

	JSUList<JAISound>* mFreeList; // _00
	JSUList<JAISound>* mUsedList; // _04
};

namespace SequenceMgr {
struct CustomHeapInfo {
	CustomHeapInfo() { }

	u8* mFilePtr; // _00, unknown
	u8 _04;       // _04, unknown
};

typedef JAInter::SequenceMgr::CustomHeapInfo (*CustomHeapCallback)(u32, u16, JAISequence*);

void init();
void getArchiveName(char*);
void setArchivePointer(JKRArchive*);
JKRArchive* getArchivePointer();
void setCustomHeapCallback(CustomHeapCallback);
void processGFrameSequence();
void checkEntriedSeq();
void checkFadeoutSeq();
void checkStoppedSeq();
void checkPlayingSeq();
void checkStartedSeq();
void checkReadSeq();
void checkSeqWave();
void checkPlayingSeqTrack(u32);
void stopSeq(JAISequence*);
void checkDvdLoadArc(u32, u32);
void checkCustomDvdLoadArc(u32, u32);
void storeSeqBuffer(JAISequence**, JAInter::Actor*, u32, u32, u8, JAInter::SoundInfo*);
void releaseSeqBuffer(JAISequence* seq, u32 fadeTime);
SeqUpdateData* getPlayTrackInfo(u32);

// unused/inlined:
void checkPlayingSeqUpdateMultiplication(u32, u8, u32, JAInter::MoveParaSet*, u32*, u8, f32*);
void checkPlayingSeqUpdateAddition(u32, u8, u32, JAInter::MoveParaSet*, u32*, u8, f32*, f32);
void checkPlayingSeqUpdateTrack(u32, u32, JAInter::MoveParaSet*, u32*, u8, f32*);
void checkCustomDvdPreloadArc(u32, u32);
void stopPlayingSeq(u32);
void checkPlayingSoundTrack(u32);
void loadArcSeqData(u32, bool);
void loadCustomArcSeqData(u16, bool);

extern SeqUpdateData* seqTrackInfo;
extern JAISequence** FixSeqBufPointer;
extern LinkSound seqControl;
extern JKRArchive* arcPointer;
extern CustomHeapCallback customHeapCallback;

} // namespace SequenceMgr

struct Actor {
	inline Actor(void* vec1, Vec* vec2, Vec* vec3, u32 unk)
	{
		// The use in ObjSound is close to this
		// mObj              = (!vec1) ? vec2 : vec1;
		// mVec2             = vec2;
		// mVec3             = -1;
		// mUnk              = 0;
		// mFlag.boolView[0] = true;

		mObj  = vec1;
		mVec2 = vec2;
		mVec3 = vec3;
		mUnk  = unk;
		if (mVec2 == nullptr) {
			mFlag.boolView[0] = true;
		} else {
			mFlag.boolView[0] = true;
		}
	}

	inline Actor(void* vec1, u32 unk)
	{
		mObj  = vec1;
		mVec2 = (Vec*)vec1;
		mVec3 = (Vec*)vec1;
		mUnk  = unk;
		if (mVec2 == nullptr || (u32)vec1 == 0xFFFFFFFF) {
			mFlag.boolView[0] = true;
		} else {
			mFlag.boolView[0] = false;
		}
	}

	void* mObj; // _00
	Vec* mVec2; // _04
	Vec* mVec3; // _08
	u32 mUnk;   // _0C (might be a pointer?)
	// bool mFlag; // _10
	union {
		bool boolView[4];
		u32 longView;
	} mFlag; // _10
};

struct Camera {
	inline Camera(Vec* vec1 = nullptr, Vec* vec2 = nullptr, Mtx* mtx = nullptr)
	{
		mVec1 = vec1;
		mVec2 = vec2;
		mMtx  = mtx;
	}

	Vec* mVec1; // _00
	Vec* mVec2; // _04
	Mtx* mMtx;  // _08
};

struct DummyObjectMgr {
	struct DummyObject {
		DummyObject* mPrev; // _00
		DummyObject* mNext; // _04
		JAISound* mSound;   // _08
		Vec _0C;            // _0C
		u32 mLifeTime;      // _18
	};

	static void init();
	static DummyObject* getPointer(u32 lifeTime);
	static void check();

	// Unused/inlined:
	void releasePointer(DummyVec*);

	static DummyObject* deadObjectFreePointer;
	static DummyObject* deadObjectUsedPointer;
	static DummyObject* deadObjectObject;
};

struct DummyVec {
};

struct HeapBlock {
	HeapBlock();

	u8 getStatus() { return mStatus; }
	void setStatus(u8 status) { mStatus = status; }
	void* getPointer() { return mPointer; }
	void setPointer(void* pointer) { mPointer = pointer; }

	u32 getSoundID() { return mSoundID; }
	void setSoundID(u32 id) { mSoundID = id; }

	u32 getUsedHeapID() { return mUsedHeapID; }
	void setUsedHeapID(u32 id) { mUsedHeapID = id; }

	// need better names
	u32 get0C() { return _0C; }
	void set0C(u32 c) { _0C = c; }

	u8 mStatus;      // _00
	void* mPointer;  // _04
	u32 mSoundID;    // _08
	u32 _0C;         // _0C
	u32 mUsedHeapID; // _10
};

struct MuteBit {
	MuteBit()
	    : _00(false)
	    , _02(false)
	{
	}

	u8 _00 : 1; // NB: NOT a bool
	u8 _01 : 1;
	u8 _02 : 1;
};

struct PlayerParameter {
	/**  @fabricated */
	union PortArg {
		f32 f32;
		u32 u32;
		s16* ps16;
	};

	PlayerParameter() { }
	~PlayerParameter() { }

	JASTrack* mTrack; // _00
	union {
		PortArg asArray[11];
		JASPortArgs asStruct;
	} mPortArgs;         // _04
	JASPortCmd mCommand; // _30
};

struct SeParameter {
	SeParameter()
	    : _24()
	    , mVolumes()
	    , mPans()
	    , mPitches()
	    , mFxmixes()
	    , _324()
	    , mDolbys()
	{
	}

	u16 _00[16];                     // _00, possibly not this size but definitely an array at _00 of u16s
	u16 _20;                         // _20
	MoveParaSet _24[16];             // _24
	MoveParaSet mVolumes[8];         // _124
	MoveParaSetInitHalf mPans[8];    // _1A4
	MoveParaSet mPitches[8];         // _224
	MoveParaSetInitZero mFxmixes[8]; // _2A4
	MoveParaSetInitZero _324[8];     // _324
	MoveParaSet mDolbys[8];          // _3A4
	f32* _424;                       // _424
	f32* _428;                       // _428
	f32* _42C;                       // _42C
	f32* _430;                       // _430
	u32 _434;                        // _434
	f32* _438;                       // _438
};

struct SeqUpdateData {
	SeqUpdateData();

	void init()
	{
		mSeqVolume = 1.0f;
		mSeqPan    = 0.5f;
		mSeqPitch  = 1.0f;
		mSeqFxmix  = 0.0f;
		mSeqDolby  = 0.0f;
		mSeqTempo  = 1.0f;
		for (u32 j = 0; j < JAIGlobalParameter::getParamSeqTrackMax(); j++) {
			mTrackVolumes[j] = 1.0f;
			mTrackPans[j]    = 64.0f;
			mTrackPitches[j] = 1.0f;
			mTrackFxmixes[j] = 0.0f;
			mTrackDolbys[j]  = 0.0f;
			_44[j]           = 0;
		}
	}

	inline JAISequence* getSequence() const { return mSequence; }

	u8 mPauseMode;                  // _00
	u8 mPauseVolume;                // _01
	u8 mPrepareFlag;                // _02
	u8 _03;                         // _03
	u32 _04;                        // _04
	u32 mActiveTrackFlag;           // _08
	f32 mSeqVolume;                 // _0C
	f32 mSeqPitch;                  // _10
	f32 mSeqFxmix;                  // _14
	f32 mSeqPan;                    // _18
	f32 mSeqDolby;                  // _1C
	f32 mSeqTempo;                  // _20
	f32* mTrackVolumes;             // _24, length seqTrackMax
	f32* mTrackPitches;             // _28, length seqTrackMax
	f32* mTrackFxmixes;             // _2C, length seqTrackMax
	f32* mTrackPans;                // _30, length seqTrackMax
	f32* mTrackDolbys;              // _34, length seqTrackMax
	u8 _38[8];                      // _38, unknown
	u8* mFilePtr;                   // _40, pointer to a data file loaded in by getSeqData
	u32* _44;                       // _44, length seqTrackMax + 1
	JAISequence* mSequence;         // _48
	PlayerParameter* mPlayerParams; // _4C, pointer to array of 33 parameters
};

struct SeqParameter {
	~SeqParameter();

	void init();

	inline JASTrack* getTrack() { return &mTrack; }

	// this name is made up, don't rely on it to name the member
	inline u32 getSceneFlag() const { return _27C; }

	MoveParaSet mTempo;                 // _00
	MoveParaSet _10[16];                // _10
	MoveParaSet mVolumes[20];           // _110
	MoveParaSet* mPans;                 // _250, length seqParameterLines
	MoveParaSet* mPitches;              // _254, length seqParameterLines
	MoveParaSet* mFxmixes;              // _258, length seqParameterLines
	MoveParaSet* mDolbys;               // _25C, length seqParameterLines
	MoveParaSet* mTrackVolumes;         // _260, length seqTrackMax
	MoveParaSetInitHalf* mTrackPans;    // _264, length seqTrackMax
	MoveParaSet* mTrackPitches;         // _268, length seqTrackMax
	MoveParaSetInitZero* mTrackFxmixes; // _26C, length seqTrackMax
	MoveParaSetInitZero* mTrackDolbys;  // _270, length seqTrackMax
	u16** _274;                         // _274, length 16 x seqTrackMax
	u8 mHeapIndex;                      // _278
	u8 mPauseMode;                      // _279
	s16 _27A;                           // _27A
	u32 _27C;                           // _27C
	u32 _280;                           // _280
	u32 mVolumeFlags;                   // _284
	u32 mPanFlags;                      // _288
	u32 mPitchFlags;                    // _28C
	u32 mFxmixFlags;                    // _290
	u32 mDolbyFlags;                    // _294
	u32 mTrackVolumeFlag;               // _298
	u32 mTrackPanFlag;                  // _29C
	u32 mTrackPitchFlag;                // _2A0
	u32 mTrackFxmixFlag;                // _2A4
	u32 mTrackDolbyFlag;                // _2A8
	u32 _2AC;                           // _2AC
	u32 mTrackPortDataFlag;             // _2B0
	u32* _2B4;                          // _2B4, length seqTrackMax
	u8* mInterruptSwitches;             // _2B8, length seqTrackMax
	MuteBit* mMuteBits;                 // _2BC, length seqTrackMax
	SeqUpdateData* mUpdateData;         // _2C0
	JASTrack mTrack;                    // _2C4
	JASOuterParam mOuterParam;          // _62C
};

struct StreamParameter {
	u8 mPauseMode;                                     // _00 - unknown
	u32 _04;                                           // _04
	u32 mVolumeFlags;                                  // _08
	u32 mPitchFlags;                                   // _0C
	u32 mPanFlags;                                     // _10
	u32 mFxmixFlags;                                   // _14
	u32 mDolbyFlags;                                   // _18
	JAInter::MoveParaSet mVolumes[20];                 // _1C, specific volume param sets
	JAInter::MoveParaSet* mPitches;                    // _14C, array of pitch param sets
	JAInter::MoveParaSet* mPans;                       // _150, array of pan param sets
	JAInter::MoveParaSetInitZero* mFxmixes;            // _154, array of Fxmix param sets
	JAInter::MoveParaSetInitZero* mDolbys;             // _158
	JAInter::StreamMgr::StreamUpdateData* mUpdateData; // _15C
	u32 mChannelVolumeFlags;                           // _160
	u32 mChannelPanFlags;                              // _164
	u32 mChannelFxmixFlags;                            // _168
	u32 mChannelDolbyFlags;                            // _16C
	JAInter::MoveParaSet* mChannelVolumes;             // _170
	JAInter::MoveParaSet* mChannelPans;                // _174
	JAInter::MoveParaSet* mChannelFxmixes;             // _178
	JAInter::MoveParaSet* mChannelDolbys;              // _17C
};

namespace SoundTable {
void init(u8* data, u32 size);
SoundInfo* getInfoPointer(u32 soundID);
u32 getInfoFormat(u32 soundID);
void setInfoTrack(u32, u8); // unused
u8 getCategotyMax();        // [sic]
u16 getSoundMax(u8 category);
void getSoundTablePointer();

extern u8 mVersion;
extern u8 mCategotyMax;
extern u16* mSoundMax;
extern u32 mDatasize;
extern SoundInfo** mPointerCategory;
extern u8* mAddress;
}; // namespace SoundTable

namespace SystemInterface {
BOOL checkFileExsistence(char* path);
u8 checkSeqActiveFlag(JASTrack* track);
JASTrack* trackToSeqp(JAISequence* seq, u8 trackNo);
void setSeqPortargsF32(SeqUpdateData* updateData, u32 playerParamIdx, u8 portArgIdx, f32 value);
void setSeqPortargsU32(SeqUpdateData* updateData, u32 playerParamIdx, u8 portArgIdx, u32 value);
void rootInit(SeqUpdateData*);
void trackInit(SeqUpdateData*);
void outerInit(SeqUpdateData*, JASTrack*, u32, u16, u8);
void setSePortParameter(JASPortArgs*);

// unused/inlined:
void setSeqPortargsPS16(JAInter::SeqUpdateData*, u32, u8, s16*);
JASTrack* trackToSeqp(JASTrack* track, u8 p2, u32 p3);
void setPortParameter(JASPortArgs*, JASTrack*, u32, u32);
void JAIouterP(void*);
void JAIouterSW(void*);
void setAudioFrameParameter(JASPortArgs*);

extern JASPortCmd systemPortCmd;
}; // namespace SystemInterface

void deleteTmpDVDFile(u8**);
void loadTmpDVDFile(char*, u8**);
u8* transInitDataFile(u8*, u32);
u32 routeToTrack(u32);
} // namespace JAInter

namespace JAInterface {
void* getAudioThreadPointer();
void* getDvdThreadPointer();
void setAudioThreadPauseFlag(bool);
}; // namespace JAInterface

#define IsJAISoundIDInUse(id)    (((id)&0x800) == 0)
#define IsJAISoundIDFree(id)     (((id)&0x800) == 1)
#define JAISoundID_TypeMask      0xC0000000
#define JAISoundID_Type_Se       0x00000000
#define JAISoundID_Type_Sequence 0x80000000
#define JAISoundID_Type_Stream   0xC0000000

#endif
