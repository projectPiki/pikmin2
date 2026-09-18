#ifndef _PSSYSTEM_PSSEQ_H
#define _PSSYSTEM_PSSEQ_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSBgmTask.h"
#include "PSSystem/Reservator.h"
#include "PSSystem/SeqTrack.h"
#include "stl/string.h"

#define P2_STREAM_SOUND_ID(soundID) (JAISoundID_Type_Stream | 0x10000 | soundID)

struct Stream;

namespace PSSystem {
struct SeqPlayReservator;
struct SeqPauseOffReservator;
struct SeqHeap;
struct SeqSound;
struct Scene;
struct DirectorMgrBase;
struct SeqTrackRoot;
struct SeqTrackChild;
struct JumpBgmSeq;

/**
 * @size = 0x1C
 */
struct TextDataBase : public JKRDisposer {
	TextDataBase();

	virtual ~TextDataBase();              // _08
	virtual bool read(Stream& input) = 0; // _0C

	bool load(const char* path, JKRDvdRipper::EAllocDirection direction);
	bool onlyLoad(const char* path, JKRDvdRipper::EAllocDirection direction);

	// _00      = VTABLE
	// _04-_1C  = JKRDisposer
	void* mFile; // _18
};

/**
 * @size = 0x20
 */
struct StreamDataList : public TextDataBase, public SingletonBase<StreamDataList> {
	StreamDataList();

	virtual ~StreamDataList();                         // _08 (weak)
	virtual bool read(Stream& input) { return false; } // _0C (weak)

	int getStreamVolume(u32);
};

/**
 * @size = 0x20
 */
struct SeqDataList : public TextDataBase, public SingletonBase<SeqDataList> {
	SeqDataList();

	virtual ~SeqDataList();                            // _08 (weak)
	virtual bool read(Stream& input) { return false; } // _0C
	// virtual void _10() = 0;      // _10 - possibly
	// virtual void _14() = 0;      // _14 - possibly

	int getSeqVolume(char const*);

	// _00      = VTABLE
	// _04-_1C  = TextDataBase
};

/**
 * @size 0x68
 */
struct SeqBase : public JSULink<SeqBase> {
	enum CastType {
		TYPE_BgmSeq      = 0,
		TYPE_StreamBgm   = 1,
		TYPE_DirectedBgm = 2,
		TYPE_AutoBgm     = 3,
		TYPE_JumpBgmSeq  = 4,
		TYPE_SeSeq       = 5,
	};

	// need to work out what these are
	enum PauseMode { MODE0 = 0, MODE1 = 1, MODE2 = 2, MODE3 = 3, MODE4 = 4 };

	SeqBase(const char* bmsFileName, const JAInter::SoundInfo& info);

	virtual ~SeqBase();                  // _08
	virtual void init();                 // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void startSeq();             // _14
	virtual void stopSeq(u32);           // _18
	virtual void pauseOn(PauseMode);     // _1C
	virtual void pauseOff();             // _20
	virtual u8 getCastType() = 0;        // _24
	virtual u32 getSeqType() = 0;        // _28
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual bool isPlaying();            // _34
	virtual void seqLoadAfter() { }      // _38 (weak)
	virtual JAISound** getHandleP() = 0; // _3C
	virtual void setConfigVolume();      // _40

	inline bool isDirectedType()
	{
		return (getCastType() == TYPE_DirectedBgm || getCastType() == TYPE_AutoBgm || getCastType() == TYPE_JumpBgmSeq);
	}

	JAISound* getHandle() { return *getHandleP(); }

	void* getFileEntry();

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	char* mBmsFileName;                 // _14
	JAInter::SoundInfo mSoundInfo;      // _18
	SeqHeap* mSeqHeap;                  // _28
	SeqPlayReservator mPlayRes;         // _2C
	SeqPauseOffReservator mPauseOffRes; // _38
	PauseMode mPauseMode;               // _44 - enum maybe? 0x4 size
	u8 mPausedMinVolume;                // _48
	SeqSound* mSeqSound;                // _4C
	OSMutex mMutex;                     // _50
};

/**
 * @size 0x18
 */
struct SeqHeap {
	SeqHeap(u32, PSSystem::SeqBase*); // unused/inlined

	virtual ~SeqHeap();                      // _08
	virtual void loadSeqAsync(TaskChecker*); // _0C

	static JAInter::SequenceMgr::CustomHeapInfo requestCallback(u32, u16, JAISequence*);
	static void loadedCallback(u32, u32);

	SeqHeap* mOwner;    // _04
	uint mSize;         // _08
	u8* mFileData;      // _0C
	SeqBase* mOwnerSeq; // _10
	TaskChecker* mTask; // _14
};

/**
 * @size 0x18
 */
struct SeqMgr : public JSUList<SeqBase> {
	SeqMgr(Scene* scene) { mScene = scene; }

	virtual ~SeqMgr(); // _08

	bool isPlaying();
	void pauseOnAllSeq(SeqBase::PauseMode);
	void pauseOffAllSeq();
	void reservePauseOffAllSeq();
	void cancelPauseOffAllSeq();
	void exec();
	void stopAllSound(u32);
	void scene1st(TaskChecker*);
	SeqBase* findSeq(JASTrack*);
	SeqBase* getPlayingSeq(JASTrack*);
	SeqBase* getFirstSeq();
	SeqBase* getFirstSeqA();
	SeqBase* getSeq(u32);

	// _00-_0C  = JSUList<SeqBase>
	// _0C      = VTABLE
	Scene* mScene; // _10
};

/**
 * @size 0x18
 */
struct SeSeq : public SeqBase {
	SeSeq(const char* bmsFileName, const JAInter::SoundInfo& info)
	    : SeqBase(bmsFileName, info)
	{
	}
	virtual ~SeSeq();                                                                   // _08
	virtual void stopSeq(u32);                                                          // _18
	virtual u32 getSeqType() { return 0x80000800; }                                     // _28 (weak)
	virtual u8 getCastType() { return TYPE_SeSeq; }                                     // _24 (weak)
	virtual void seqLoadAfter();                                                        // _38
	virtual JAISound** getHandleP() { return (JAISound**)(&JAInter::SeMgr::seHandle); } // _3C (weak)
	virtual void setConfigVolume();                                                     // _40

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
};

/**
 * @size = 0x6C
 */
struct BgmSeq : public SeqBase {
	BgmSeq(const char* bmsFileName, const JAInter::SoundInfo& info);

	virtual ~BgmSeq();                                    // _08
	virtual u8 getCastType() { return TYPE_BgmSeq; }      // _24 (weak)
	virtual u32 getSeqType() { return 0x80000000; }       // _28 (weak)
	virtual JAISound** getHandleP() { return &mHandleP; } // _3C (weak)

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	JAISound* mHandleP; // _68
};

/**
 * @size = 0x74
 */
struct StreamBgm : public BgmSeq {
	StreamBgm(u32 id, const JAInter::SoundInfo& info);

	virtual ~StreamBgm();                                  // _08
	virtual void init();                                   // _0C
	virtual JAISound** getHandleP() { return &mJaiSound; } // _3C (weak)
	virtual void scene1st(TaskChecker*) { }                // _10 (weak)
	virtual void startSeq();                               // _14
	virtual u32 getSeqType() { return 0; }                 // _28 (weak)
	virtual u8 getCastType() { return TYPE_StreamBgm; }    // _24 (weak)
	virtual bool isPlaying();                              // _34
	virtual void setConfigVolume();                        // _40

	void setId(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	JAISound* mJaiSound; // _6C
	u32 mId;             // _70
};

/**
 * @size = 0xB8
 */
struct DirectedBgm : public BgmSeq {
	DirectedBgm(const char* bmsFileName, const JAInter::SoundInfo& info, DirectorMgrBase* directorMgr);

	virtual ~DirectedBgm() { }                                  // _08 (weak)
	virtual void init();                                        // _0C
	virtual void startSeq();                                    // _14
	virtual void stopSeq(u32);                                  // _18
	virtual u8 getCastType() { return TYPE_DirectedBgm; }       // _24 (weak)
	virtual void onPlayingFrame();                              // _30
	virtual SeqTrackRoot* newSeqTrackRoot();                    // _44
	virtual SeqTrackChild* newSeqTrackChild(u8, SeqTrackRoot&); // _48

	void initRootTrack_onPlaying(JASTrack*);
	void initChildTrack_onPlaying(JASTrack*, u8);
	DirectorBase* getDirectorP(u8);

	// unused/inlined:
	void getDirector(u8);

	inline void assertValidTrack()
	{
		bool check = mIsInitialized == 1 && mRootTrack;
		P2ASSERTLINE(415, check);
	}

	inline SeqTrackChild* getChildTrack(int i)
	{
		P2ASSERTLINE(419, i < 16);
		return mChildTracks[i];
	}

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	DirectorMgrBase* mDirectorMgr;   // _6C
	SeqTrackRoot* mRootTrack;        // _70
	SeqTrackChild* mChildTracks[16]; // _74
	u8 mIsInitialized;               // _B4
};

struct JumpBgmPort {
	JumpBgmPort(JumpBgmSeq*);

	void onBeatTop(struct BeatMgr&);

	// unused/inlined:
	void requestQuickly(u16);
	void requestOnBeat(u16);
	void requestEveryBeat(u16);
	u16 output();

	OSMutex mMutex1;     // _00
	u16 _18;             // _18
	OSMutex mMutex2;     // _1C
	u16 _34;             // _34
	OSMutex mMutex3;     // _38
	u16 _50;             // _50
	OSMutex mMutex4;     // _54
	u16 _64;             // _64
	JumpBgmSeq* mOwner;  // _68
	u32 mAvoidJumpTimer; // _6C
	u16 mCurrentTrackId; // _70, which "state" the bgm is in for bosses
};

/**
 * @size = 0x134
 */
struct JumpBgmSeq : public DirectedBgm {
	JumpBgmSeq(const char* bmsFileName, const JAInter::SoundInfo& info, DirectorMgrBase* directorMgr);

	virtual void startSeq();                             // _14
	virtual u8 getCastType() { return TYPE_JumpBgmSeq; } // _24 (weak)
	virtual void onPlayingFrame();                       // _30
	virtual PSSystem::SeqTrackRoot* newSeqTrackRoot();   // _44
	virtual u16 getSeqStartPoint();                      // _4C
	virtual void requestJumpBgmQuickly(u16);             // _50
	virtual void requestJumpBgmOnBeat(u16);              // _54
	virtual void requestJumpBgmEveryBeat(u16);           // _58
	virtual u16 outputJumpRequest();                     // _5C
	virtual void onJump(u16) { }                         // _60 (weak)

	void startSeq(u16);
	void setAvoidJumpTimer_Checked(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	// _6C-_B8  = DirectedBgm

	JumpBgmPort mJumpPort; // _BC
};

} // namespace PSSystem

#endif
