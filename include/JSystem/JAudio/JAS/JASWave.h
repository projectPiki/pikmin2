#ifndef _JSYSTEM_JAS_JASWAVE_H
#define _JSYSTEM_JAS_JASWAVE_H

#include "JSystem/JAudio/JAS/JASHeap.h"

struct JASWaveArc : public JASDisposer {
	/** @fabricated */
	struct LoadToAramCallbackArgs {
		JASWaveArc* mArc; // _00
		s32 mFileNumber;  // _04
		u8* _08;          // _08
		u32 _0C;          // _0C
	};

	JASWaveArc();

	virtual void onDispose();   // _08
	virtual void onLoadDone();  // _0C (weak)
	virtual void onEraseDone(); // _10 (weak)

	bool load(JASHeap*);
	bool loadTail(JASHeap*);
	bool erase();
	void setFileName(const char*);

	static void loadToAramCallback(void*);

	// unused/inlined:
	~JASWaveArc() { }
	bool loadSetup(u32);
	bool eraseSetup();
	bool sendLoadCmd();
	void execLoad();
	bool loadBlock(JASHeap*);
	bool loadBlockTail(JASHeap*);
	void setEntryNum(s32);

	JASHeap mHeap;   // _04
	u32 _48;         // _48
	int _4C;         // _4C
	int mFileNumber; // _50
	u32 mFileSize;   // _54
	u32 _58;         // _58
};

struct JASWaveInfo {
	u8 mFormat;           // _00
	u8 mKey;              // _01
	f32 mSampleRate;      // _04
	u32 mAwOffset;        // _08
	u32 mAwLength;        // _0C
	u32 mLoopOffset;      // _10
	u32 mLoopStartOffset; // _14
	u32 mLoopEndOffset;   // _18
	u32 mSampleCount;     // _1C
	s16 mLast;            // _20
	s16 mPenult;          // _22
	void* _24;            // _24
};

struct JASWaveHandle {
	virtual ~JASWaveHandle() { }                        // _08 (weak)
	virtual const JASWaveInfo* getWaveInfo() const = 0; // _0C
	virtual void* getWavePtr() const               = 0; // _10

	// _00 VTBL
};

struct JASWaveBank {
	virtual ~JASWaveBank() { }                           // _08 (weak)
	virtual JASWaveHandle* getWaveHandle(u32) const = 0; // _0C
	virtual JASWaveArc* getWaveArc(int)             = 0; // _10

	static JKRHeap* getCurrentHeap();

	// _00 VTBL

	// Unsure of type
	static JKRHeap* sCurrentHeap;
};

struct JASBasicWaveBank : public JASWaveBank {
	struct TWaveHandle : public JASWaveHandle {
		inline TWaveHandle()
		    : JASWaveHandle()
		    , mInfo()
		    , mHeap(nullptr)
		    , mWaveID(0)
		{
		}

		virtual ~TWaveHandle() { }                                        // _08 (weak)
		virtual const JASWaveInfo* getWaveInfo() const { return &mInfo; } // _0C (weak)
		virtual void* getWavePtr() const                                  // _10 (weak)
		{
			if (mHeap->mBase == nullptr) {
				return nullptr;
			}
			return mHeap->mBase + mInfo.mAwOffset;
		}

		JASWaveInfo mInfo; // _04
		JASHeap* mHeap;    // _2C
		u32 mWaveID;       // _30
	};

	/**
	 * @size{0x3C}
	 */
	struct TWaveInfo {
		TWaveInfo()
		    : mHandle()
		    , mNext(nullptr)
		    , mPrev(nullptr)
		{
		}

		~TWaveInfo() { }

		TWaveHandle mHandle; // _00
		TWaveInfo* mNext;    // _34
		TWaveInfo* mPrev;    // _38
	};

	/**
	 * @size{0x68}
	 */
	struct TWaveGroup : JASWaveArc {
		TWaveGroup(JASBasicWaveBank*);
		~TWaveGroup();

		virtual void onLoadDone();  // _0C
		virtual void onEraseDone(); // _10

		void setWaveCount(u32);
		void setWaveInfo(int, u32, const JASWaveInfo&);
		u32 getWaveID(int) const;

		JASBasicWaveBank* mBank; // _5C
		TWaveInfo* mInfo;        // _60
		u32 mInfoCount;          // _64;
	};

	JASBasicWaveBank();

	virtual ~JASBasicWaveBank();                     // _08
	virtual JASWaveHandle* getWaveHandle(u32) const; // _0C
	virtual JASWaveArc* getWaveArc(int groupIndex)
	{
		if (groupIndex >= mGroupCount) {
			return nullptr;
		}
		return mGroups[groupIndex];
	} // _10 (weak)

	TWaveGroup* getWaveGroup(int);
	void setGroupCount(u32);
	void setWaveTableSize(u32);

	inline TWaveInfo** getTable() { return mWaveTable; }

	// unused/inlined:
	void incWaveTable(const JASBasicWaveBank::TWaveGroup*);
	void decWaveTable(const JASBasicWaveBank::TWaveGroup*);

	OSMutex mMutex;         // _04
	TWaveInfo** mWaveTable; // _1C
	u32 mTableSize;         // _20
	TWaveGroup** mGroups;   // _24
	u32 mGroupCount;        // _28
};

struct JASSimpleWaveBank : public JASWaveBank, JASWaveArc {
	/** @size{0x30} */
	struct TWaveHandle : public JASWaveHandle {
		TWaveHandle();

		virtual ~TWaveHandle();                         // _08 (weak)
		virtual const JASWaveInfo* getWaveInfo() const; // _0C (weak)
		virtual void* getWavePtr() const;               // _10 (weak)

		JASWaveInfo mInfo; // _04
		JASHeap* mHeap;    // _2C
	};

	JASSimpleWaveBank();

	virtual ~JASSimpleWaveBank();                    // _08
	virtual JASWaveHandle* getWaveHandle(u32) const; // _0C
	virtual JASWaveArc* getWaveArc(int);             // _10

	void setWaveTableSize(u32);
	void setWaveInfo(u32, const JASWaveInfo&);

	// _00 - _03 JASWaveBank
	// _04 - _5F JASWaveArc
	TWaveHandle* mHandles; // _60
	u32 mHandleCount;      // _64
};

namespace JASWaveArcLoader {
void init(JASHeap*);
void setCurrentDir(const char*);

// unused/inlined:
JASHeap* getRootHeap();
const char* getCurrentDir();

extern char sCurrentDir[0x40];
extern JASHeap* sAramHeap;
} // namespace JASWaveArcLoader

namespace JASWaveBankMgr {
void init(int tableSize);
JASWaveBank* getWaveBank(int bankIndex);
bool registWaveBankWS(int bankIndex, void* data);
bool loadWave(int bankIndex, int arcIndex, JASHeap* heap);
bool loadWaveTail(int bankIndex, int arcIndex, JASHeap* heap);
bool eraseWave(int bankIndex, int arcIndex);

// unused/inlined:
bool registWaveBank(int bankIndex, JASWaveBank* bank);
JASWaveArc* getWaveArc(int bankIndex, int arcIndex);
bool loadWaveBlock(int bankIndex, int arcIndex, JASHeap* heap);
bool loadWaveBlockTail(int bankIndex, int arcIndex, JASHeap* heap);
size_t getUsedHeapSize();

extern int sTableSize;
extern JASWaveBank** sWaveBank;
} // namespace JASWaveBankMgr

namespace JASWSParser {
/** @fabricated */
struct THeader {
	u8 _00[0x10];           // _00 - unknown/padding
	u32 mArchiveBankOffset; // _10
	u32 mCtrlGroupOffset;   // _14
};

struct TCtrlWave {
	u32 _00; // _00
};

struct TWave {
	u8 _00;           // _00, xayr tools skip this value
	u8 mFormat;       // _01
	u8 mKey;          // _02
	f32 mSampleRate;  // _04
	u32 mAwOffset;    // _08
	u32 mAwLength;    // _0C
	u32 mLoop;        // _10
	u32 mLoopStart;   // _14
	u32 mLoopEnd;     // _18
	u32 mSampleCount; // _1C
	s16 mLast;        // _20
	s16 mPenult;      // _22
};

struct TWaveArchive {
	char mFileName[0x74]; // _00 - unknown length
	u32 mWaveOffsets[1];  // _74 - dynamic length
};

struct TWaveArchiveBank {
	u8 _00[8];              // _00 - unknown/padding
	u32 mArchiveOffsets[1]; // _08 - dynamic length
};

struct TCtrl {
	u8 _00[4];               // _00 - unknown/padding
	u32 mWaveCount;          // _04
	u32 mCtrlWaveOffsets[1]; // _08 - dynamic length
};

struct TCtrlScene {
	u8 _00[12];      // _00 - unknown/padding
	u32 mCtrlOffset; // _0C
};

struct TCtrlGroup {
	u8 _00[8];                // _00 - unknown/padding
	u32 mCtrlGroupCount;      // _08
	u32 mCtrlSceneOffsets[1]; // _0C - dynamic length
};

u32 getGroupCount(void*);
JASBasicWaveBank* createBasicWaveBank(void*);
JASSimpleWaveBank* createSimpleWaveBank(void*);

// unused/inlined:
size_t getUsedHeapSize();

extern size_t sUsedHeapSize;
} // namespace JASWSParser

#endif
