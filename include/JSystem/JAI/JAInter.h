#ifndef _JSYSTEM_JAI_JAINTER_H
#define _JSYSTEM_JAI_JAINTER_H

#include "JSystem/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAS/JASPortArgs.h"
#include "JSystem/JAS/JASPortCmd.h"
#include "JSystem/JAS/JASTrack.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"
#include "Dolphin/mtx.h"

struct JAISequence;
struct JAISound;

namespace JAInter {
struct Actor;
struct DummyVec;
struct SeqUpdateData;
struct SoundInfo;

namespace SequenceMgr {
struct CustomHeapInfo {
};

typedef JAInter::SequenceMgr::CustomHeapInfo (*CustomHeapCallback)(unsigned long, unsigned short, JAISequence*);

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
void checkPlayingSeqTrack(unsigned long);
void stopSeq(JAISequence*);
void checkDvdLoadArc(unsigned long, unsigned long);
void checkCustomDvdLoadArc(unsigned long, unsigned long);
void storeSeqBuffer(JAISequence**, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*);
void releaseSeqBuffer(JAISequence*, unsigned long);
SeqUpdateData* getPlayTrackInfo(unsigned long);

// unused/inlined:
void checkPlayingSeqUpdateMultiplication(unsigned long, unsigned char, unsigned long, JAInter::MoveParaSet*, unsigned long*, unsigned char,
                                         float*);
void checkPlayingSeqUpdateAddition(unsigned long, unsigned char, unsigned long, JAInter::MoveParaSet*, unsigned long*, unsigned char,
                                   float*, float);
void checkPlayingSeqUpdateTrack(unsigned long, unsigned long, JAInter::MoveParaSet*, unsigned long*, unsigned char, float*);
void checkCustomDvdPreloadArc(unsigned long, unsigned long);
void stopPlayingSeq(unsigned long);
void checkPlayingSoundTrack(unsigned long);
void loadArcSeqData(unsigned long, bool);
void loadCustomArcSeqData(unsigned short, bool);

extern JAISequence** FixSeqBufPointer;
extern SeqUpdateData* seqTrackInfo;
extern JKRArchive* arcPointer;
extern CustomHeapCallback customHeapCallback;
} // namespace SequenceMgr

struct Actor {
	inline Actor(Vec* vec1, Vec* vec2, Vec* vec3, u32 unk)
	{
		m_vec1 = vec1;
		m_vec2 = vec2;
		m_vec3 = vec3;
		m_unk  = unk;
		// Actual condition is unknown
		if (m_vec1 == nullptr) {
			m_flag.boolView[0] = true;
		} else {
			m_flag.boolView[0] = true;
		}
	}

	Vec* m_vec1; // _00
	Vec* m_vec2; // _04
	Vec* m_vec3; // _08
	u32 m_unk;   // _0C (might be a pointer?)
	// bool m_flag; // _10
	union {
		bool boolView[4];
		u32 longView;
	} m_flag; // _10
};

struct Camera {
	inline Camera(Vec& vec1, Vec& vec2, Mtx& mtx)
	{
		m_vec1 = &vec1;
		m_vec2 = &vec2;
		m_mtx  = &mtx;
	}

	Vec* m_vec1; // _00
	Vec* m_vec2; // _04
	Mtx* m_mtx;  // _08
};

struct DummyObjectMgr {
	/**
	 * @fabricated
	 * @size{0x1C}
	 */
	struct DummyObject {
		inline DummyObject() {};
		DummyObject* _00;      // _00
		DummyObject* _04;      // _04
		JAISound* m_sound;     // _08
		JGeometry::TVec3f _0C; // _0C
		u32 _18;               // _18
	};

	static void init();
	static DummyObject* getPointer(u32);
	static void check();

	// Unused/inlined:
	void releasePointer(DummyVec*);

	static DummyObject* deadObjectObject;
	static DummyObject* deadObjectFreePointer;
	static DummyObject* deadObjectUsedPointer;
};

struct DummyVec {
};

struct HeapBlock {
	HeapBlock();
};

struct LinkSound {
	void init();
	JAISound* getSound();
	void releaseSound(JAISound*);

	// unused/inlined:
	void getFreeStartFirstObject();
	void getUsedEndFirstObject();

	JSUList<JAISound>* _00; // _00
	JSUList<JAISound>* _04; // _04
};

struct MuteBit {
	MuteBit();

	u8 value : 1;
};

struct PlayerParameter {
	/**  @fabricated */
	union PortArg {
		f32 f32;
		u32 u32;
		s16* ps16;
	};

	PlayerParameter();
	~PlayerParameter();

	JASTrack* _00; // _00
	union {
		PortArg asArray[11];
		JASPortArgs asStruct;
	} m_portArgs;   // _04
	JASPortCmd _30; // _30
};

struct SeParameter {
	SeParameter()
	    : _24()
	    , _124()
	    , _1A4()
	    , _224()
	    , _2A4()
	    , _324()
	    , _3A4()
	{
	}

	u8 _00[0x20];                // _00 - unknown
	short _20;                   // _20
	u8 _22[0x2];                 // _22 - possibly padding
	MoveParaSet _24[16];         // _24
	MoveParaSet _124[8];         // _124
	MoveParaSetInitHalf _1A4[8]; // _1A4
	MoveParaSet _224[8];         // _224
	MoveParaSetInitZero _2A4[8]; // _2A4
	MoveParaSetInitZero _324[8]; // _324
	MoveParaSet _3A4[8];         // _3A4
	float* _424;                 // _424
	float* _428;                 // _428
	float* _42C;                 // _42C
	float* _430;                 // _430
	u32 _434;                    // _434
	float* _438;                 // _438
};

struct SeqUpdateData {
	SeqUpdateData();

	u8 _00;                  // _00 - unknown
	u8 _01;                  // _01 - unknown
	u8 _02;                  // _02
	u8 _03;                  // _03 - could be padding
	uint _04;                // _04
	int _08;                 // _08
	f32 _0C;                 // _0C
	f32 _10;                 // _10
	f32 _14;                 // _14
	f32 _18;                 // _18
	f32 _1C;                 // _1C
	f32 _20;                 // _20
	void* _24;               // _24 - unknown pointer
	void* _28;               // _28 - unknown pointer
	void* _2C;               // _2C - unknown pointer
	void* _30;               // _30 - unknown pointer
	void* _34;               // _34 - unknown pointer
	u8 _38[0xC];             // _38 - unknown
	void* _44;               // _44 - unknown pointer
	JAISequence* m_sequence; // _48
	PlayerParameter* _4C;    // _4C - pointer to array of 33 parameters
};

struct SeqParameter : MoveParaSet {
	~SeqParameter();
	void init();

	// float _00;                  // _00
	// float _04;                  // _04 - tempo proportion?
	// float _08;                  // _08 - affected by tempo?
	// u32 _0C;                    // _0C
	MoveParaSet _10[16];        // _10
	MoveParaSet _110[20];       // _110
	MoveParaSet* _250;          // _250
	MoveParaSet* _254;          // _254
	MoveParaSet* _258;          // _258
	MoveParaSet* _25C;          // _25C
	MoveParaSet* _260;          // _260
	MoveParaSetInitHalf* _264;  // _264
	MoveParaSet* _268;          // _268
	MoveParaSetInitZero* _26C;  // _26C
	MoveParaSetInitZero* _270;  // _270
	u16** _274;                 // _274
	u8 _278;                    // _278 - auto heap index?
	u8 _279;                    // _279
	short _27A;                 // _27A
	u32 _27C;                   // _27C
	u8 _280[0x4];               // _280
	u32 _284;                   // _284
	u32 _288;                   // _288
	u32 _28C;                   // _28C
	u8 _290[0x14];              // _290
	u32 _2A4;                   // _2A4
	u8 _2A8[0x8];               // _2A8
	u32 _2B0;                   // _2B0
	u32* _2B4;                  // _2B4
	u8* _2B8;                   // _2B8 - unknown pointer
	MuteBit* _2BC;              // _2BC
	SeqUpdateData* _2C0;        // _2C0
	JASTrack m_track;           // _2C4
	JASOuterParam m_outerParam; // _62C
};

struct SoundInfo {
	int unk1; // _00
	union count_t {
		unsigned long v1;
		unsigned char v2[4];
		unsigned short v3[2];
	} count;             // _04
	unsigned long pitch; // _08
	union volume_t {
		unsigned long v1;
		unsigned char v2;
	} volume; // _0C
};

namespace SoundTable {
void init(u8*, u32);
SoundInfo* getInfoPointer(u32);
u32 getInfoFormat(u32);
void setInfoTrack(u32, u8);
u8 getCategotyMax(void);
u16 getSoundMax(u8);
void getSoundTablePointer(void);

extern u8 mVersion;
extern u8 mCategotyMax;
extern u16* mSoundMax;
extern u32 mDataSize;
extern SoundInfo** mPointerCategory;
extern u8* mAddress;
}; // namespace SoundTable

namespace SystemInterface {
BOOL checkFileExsistence(char*);
u8 checkSeqActiveFlag(JASTrack*);
JASTrack* trackToSeqp(JAISequence*, u8);
void setSeqPortargsF32(SeqUpdateData*, u32, u8, f32);
void setSeqPortargsU32(SeqUpdateData*, u32, u8, u32);
void rootInit(SeqUpdateData*);
void trackInit(SeqUpdateData*);
void outerInit(SeqUpdateData*, JASTrack*, u32, u16, u8);
void setSePortParameter(JASPortArgs*);

// unused/inlined:
void setSeqPortargsPS16(JAInter::SeqUpdateData*, unsigned long, unsigned char, short*);
JASTrack* trackToSeqp(JASTrack*, unsigned char, unsigned long);
void setPortParameter(JASPortArgs*, JASTrack*, unsigned long, unsigned long);
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
