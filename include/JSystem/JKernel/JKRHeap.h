#ifndef _JSYSTEM_JKR_JKRHEAP_H
#define _JSYSTEM_JKR_JKRHEAP_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

typedef void JKRHeapErrorHandler(void*, u32, int);

struct JKRHeap : public JKRDisposer {
	enum EAllocMode {
		HEAPALLOC_Unk1 = 1,
	};

	struct TState {
		struct TLocation {
			TLocation()
			    : _00(nullptr)
			    , _04(-1)
			{
			}

			char* _00; // _00
			int _04;   // _04
		};

		struct TArgument {
			TArgument(const JKRHeap* heap, u32 id, bool compareOnDestruct)
			    : mHeap((heap) ? heap : JKRHeap::sCurrentHeap)
			    , mId(id)
			    , mIsCompareOnDestructed(compareOnDestruct)
			{
			}

			const JKRHeap* mHeap;        // _00
			u32 mId;                     // _04
			bool mIsCompareOnDestructed; // _08
		};

		TState(const JKRHeap* heap, u32 id, bool isCompareOnDestructed)
		    : mUsedSize(0)
		    , mCheckCode(0)
		    , mArgument(heap, id, isCompareOnDestructed)
		{
			mArgument.mHeap->state_register(this, mArgument.mId);
		}

		TState(JKRHeap* heap)
		    : mUsedSize(0)
		    , mCheckCode(0)
		    , mArgument(heap, 0xFFFFFFFF, true)
		{
		}

		~TState();
		void dump() const { mArgument.mHeap->state_dump(*this); }
		static inline bool isVerbose() { return bVerbose_; };
		bool isCompareOnDestructed() const { return mArgument.mIsCompareOnDestructed; };
		u32 getUsedSize() const { return mUsedSize; }
		u32 getCheckCode() const { return mCheckCode; }
		const JKRHeap* getHeap() const { return mArgument.mHeap; }
		u32 getId() const { return mArgument.mId; }

		// unused/inlined:
		TState(const JKRHeap::TState::TArgument& arg, const JKRHeap::TState::TLocation& location);
		TState(const JKRHeap::TState& other, bool p2);
		TState(const JKRHeap::TState& other, const JKRHeap::TState::TLocation& location, bool p3);

		static bool bVerbose_;

		u32 mUsedSize;       // _00
		u32 mCheckCode;      // _04, plausibly TLocation when combined with _00
		u32 mBuf;            // _08
		u8 _0C[0x4];         // _0C
		TArgument mArgument; // _10
		TLocation mLocation; // _1C
	};

	JKRHeap(void*, u32, JKRHeap*, bool);

	/////////////// VTABLE
	virtual ~JKRHeap();                                             // _08
	virtual void callAllDisposer();                                 // _0C
	virtual u32 getHeapType() = 0;                                  // _10
	virtual bool check()      = 0;                                  // _14
	virtual bool dump_sort() { return true; }                       // _18 (weak)
	virtual bool dump()                = 0;                         // _1C
	virtual void do_destroy()          = 0;                         // _20
	virtual void* do_alloc(u32, int)   = 0;                         // _24
	virtual void do_free(void*)        = 0;                         // _28
	virtual void do_freeAll()          = 0;                         // _2C
	virtual void do_freeTail()         = 0;                         // _30
	virtual void do_fillFreeArea()     = 0;                         // _34
	virtual int do_resize(void*, u32)  = 0;                         // _38
	virtual int do_getSize(void*)      = 0;                         // _3C
	virtual u32 do_getFreeSize()       = 0;                         // _40
	virtual void* do_getMaxFreeBlock() = 0;                         // _44
	virtual u32 do_getTotalFreeSize()  = 0;                         // _48
	virtual u8 do_changeGroupID(u8) { return 0; }                   // _4C (weak)
	virtual u8 do_getCurrentGroupId() { return 0; }                 // _50 (weak)
	virtual void state_register(TState*, u32) const;                // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58
	virtual void state_dump(const TState&) const;                   // _5C
	/////////////// VTABLE END

	/////////////// METHODS
	// Used
	JKRHeap* becomeSystemHeap();
	JKRHeap* becomeCurrentHeap();
	void destroy();
	void* alloc(u32 byteCount, int padding);
	void free(void*);
	void freeAll();
	void freeTail();
	int resize(void*, u32);
	u32 getFreeSize();
	void* getMaxFreeBlock();
	u32 getTotalFreeSize();
	u8 changeGroupID(u8);
	u8 getCurrentGroupId();
	u32 getMaxAllocatableSize(int);
	JKRHeap* find(void*) const;
	void dispose_subroutine(u32 begin, u32 end);
	u32 dispose(void*, u32);
	void dispose(void*, void*);
	void dispose();

	// Inlined/fabricated
	// inline void* JKRAllocFromHeap(u32 size, int alignment) { return JKRHeap::alloc(size, alignment, this); }
	void setDebugFill(bool debugFill) { mFillFlag = debugFill; }
	bool getDebugFill() const { return mFillFlag; }

	void* getStartAddr() const { return (void*)mStartAddress; }
	void* getEndAddr() const { return (void*)mEndAddress; }
	u32 getSize() const { return mHeapSize; }
	bool getErrorFlag() const { return mErrorFlag; }

	void callErrorHandler(JKRHeap* heap, u32 size, int alignment)
	{
		if (mErrorHandler) {
			(*mErrorHandler)(heap, size, alignment);
		}
	}

	JKRHeap* getParent() const
	{
		JSUTree<JKRHeap>* parent = mTree.getParent();
		return parent->getObject();
	}

	// TState related
	static void setState_u32ID_(TState* state, u32 id) { state->mArgument.mId = id; }
	static void setState_uUsedSize_(TState* state, u32 usedSize) { state->mUsedSize = usedSize; }
	static void setState_u32CheckCode_(TState* state, u32 checkCode) { state->mCheckCode = checkCode; }
	static u32 getState_buf_(TState* state) { return state->mBuf; } // might instead be a pointer to a next state?

	JSUTree<JKRHeap>& getHeapTree() { return mTree; }
	void appendDisposer(JKRDisposer* disposer) { mDisposerList.append(&disposer->mLink); }
	void removeDisposer(JKRDisposer* disposer) { mDisposerList.remove(&disposer->mLink); }
	void lock() { OSLockMutex(&mMutex); }
	void unlock() { OSUnlockMutex(&mMutex); }
	u32 getHeapSize() { return mHeapSize; }

	// Static
	static bool initArena(char**, u32*, int);
	static void* alloc(u32, int, JKRHeap*);
	static void copyMemory(void*, void*, u32);
	static void free(void*, JKRHeap*);
	static void state_dumpDifference(const TState&, const TState&);
	static JKRHeap* findFromRoot(void*);
	static JKRHeapErrorHandler* setErrorHandler(JKRHeapErrorHandler*);

	static void* getCodeStart() { return mCodeStart; }
	static void* getCodeEnd() { return mCodeEnd; }
	static void* getUserRamStart() { return mUserRamStart; }
	static void* getUserRamEnd() { return mUserRamEnd; }
	static u32 getMemorySize() { return mMemorySize; }
	static JKRHeap* getCurrentHeap() { return sCurrentHeap; }
	static JKRHeap* getRootHeap() { return sRootHeap; }
	static JKRHeap* getSystemHeap() { return sSystemHeap; }

	static void setSystemHeap(JKRHeap* heap) { sSystemHeap = heap; }
	static void setCurrentHeap(JKRHeap* heap) { sCurrentHeap = heap; }
	/////////////// METHODS END

	static u8 sDefaultFillFlag;
	static u8 sDefaultFillCheckFlag;
	static JKRHeap* sSystemHeap;
	static JKRHeap* sCurrentHeap;
	static JKRHeap* sRootHeap;
	static JKRHeapErrorHandler* mErrorHandler;
	static void* mCodeStart;
	static void* mCodeEnd;
	static void* mUserRamStart;
	static void* mUserRamEnd;
	static u32 mMemorySize;
	static u32 sParentHeapFreeSize_Last;
	static u32 sParentHeapFreeSize;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	mutable OSMutex mMutex;             // _18
	u8* mStartAddress;                  // _30
	u8* mEndAddress;                    // _34
	u32 mHeapSize;                      // _38
	u8 mFillFlag;                       // _3C
	u8 mFillCheckFlag;                  // _3D
	u8 mAllocMode;                      // _3E, see EAllocMode enum
	u8 mGroupID;                        // _3F
	JSUTree<JKRHeap> mTree;             // _40
	JSUList<JKRDisposer> mDisposerList; // _5C
	bool mErrorFlag;                    // _68
	bool mInitFlag;                     // _69
};

struct JKRExpHeap : public JKRHeap {
	struct CMemBlock {
		CMemBlock* allocBack(u32, u8, u8, u8, u8);
		CMemBlock* allocFore(u32, u8, u8, u8, u8);
		void* free(JKRExpHeap*);
		static CMemBlock* getHeapBlock(void*);
		void initiate(CMemBlock*, CMemBlock*, u32, u8, u8);

		void newGroupId(u8 groupId) { mGroupID = groupId; }
		bool isValid() const { return mUsageHeader == 'HM'; }
		bool _isTempMemBlock() const { return (mFlags & 0x80) ? true : false; }
		int getAlignment() const { return mFlags & 0x7f; }
		void* getContent() const { return (void*)(this + 1); }
		CMemBlock* getPrevBlock() const { return mPrev; }
		CMemBlock* getNextBlock() const { return mNext; }
		u32 getSize() const { return mAllocatedSpace; }
		u8 getGroupId() const { return mGroupID; }
		static CMemBlock* getBlock(void* data) { return (CMemBlock*)((u32)data + -0x10); }

		u16 mUsageHeader;    // _00
		u8 mFlags;           // _02, a|bbbbbbb = a=temp, b=aln
		u8 mGroupID;         // _03
		int mAllocatedSpace; // _04
		CMemBlock* mPrev;    // _08
		CMemBlock* mNext;    // _0C
	};

	JKRExpHeap(void*, u32, JKRHeap*, bool);

	virtual ~JKRExpHeap();                                          // _08
	virtual u32 getHeapType() { return 'EXPH'; }                    // _10 (weak)
	virtual bool check();                                           // _14
	virtual bool dump_sort();                                       // _18
	virtual bool dump();                                            // _1C
	virtual void do_destroy();                                      // _20
	virtual void* do_alloc(u32, int);                               // _24
	virtual void do_free(void*);                                    // _28
	virtual void do_freeAll();                                      // _2C
	virtual void do_freeTail();                                     // _30
	virtual void do_fillFreeArea();                                 // _34
	virtual int do_resize(void*, u32);                              // _38
	virtual int do_getSize(void*);                                  // _3C
	virtual u32 do_getFreeSize();                                   // _40
	virtual void* do_getMaxFreeBlock();                             // _44
	virtual u32 do_getTotalFreeSize();                              // _48
	virtual u8 do_changeGroupID(u8);                                // _4C
	virtual u8 do_getCurrentGroupId() { return mCurrentGroupID; }   // _50 (weak)
	virtual void state_register(TState*, u32) const;                // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58

	void* allocFromHead(u32, int);
	void* allocFromHead(u32);
	void* allocFromTail(u32, int);
	void* allocFromTail(u32);
	void appendUsedList(CMemBlock*);
	static JKRExpHeap* create(u32, JKRHeap*, bool);
	static JKRExpHeap* createRoot(int, bool);
	int freeGroup(u8 groupID);
	void joinTwoBlocks(CMemBlock*);
	void recycleFreeBlock(CMemBlock*);
	void removeFreeBlock(CMemBlock*);
	void setFreeBlock(CMemBlock*, CMemBlock*, CMemBlock*);

	// unused/inlined:
	void removeUsedBlock(CMemBlock*);
	s32 getUsedSize(u8 groupId) const;

	CMemBlock* getHeadUsedList() const { return mHeadUsedList; }
	void setAllocationMode(EAllocMode mode) { mCurrentAllocMode = mode; }

	static s32 getUsedSize_(JKRExpHeap* expHeap)
	{
		// s32 totalFreeSize = expHeap->getTotalFreeSize();
		return expHeap->mHeapSize - expHeap->getTotalFreeSize();
	}
	static u32 getState_(TState* state) { return getState_buf_(state); } // might instead be a pointer to a next state?

	// _00     = VTBL
	// _00-_6C = JKRHeap
	u8 mCurrentAllocMode;     // _6C
	u8 mCurrentGroupID;       // _6D
	u8 _6E;                   // _6E
	u8 _70[8];                // _70
	CMemBlock* mHead;         // _78, free list
	CMemBlock* mTail;         // _7C, free list
	CMemBlock* mHeadUsedList; // _80
	CMemBlock* mTailUsedList; // _84
};

struct JKRSolidHeap : public JKRHeap {
	struct SolidList {
		SolidList(u32 num, u32 size, u8* p3, u8* p4, SolidList* next)
		{
			mCount = num;
			mSize  = size;
			_08    = p3;
			_0C    = p4;
			mNext  = next;
		}
		u32 mCount;       // _00
		u32 mSize;        // _04
		u8* _08;          // _08
		void* _0C;        // _0C
		SolidList* mNext; // _10
	};

	JKRSolidHeap(void*, u32, JKRHeap*, bool);

	virtual ~JKRSolidHeap();                                         // _08
	virtual u32 getHeapType() { return 'SLID'; }                     // _10 (weak)
	virtual bool check();                                            // _14
	virtual bool dump();                                             // _1C
	virtual void do_destroy();                                       // _20
	virtual void* do_alloc(u32, int);                                // _24
	virtual void do_free(void*);                                     // _28
	virtual void do_freeAll();                                       // _2C
	virtual void do_freeTail();                                      // _30
	virtual void do_fillFreeArea();                                  // _34
	virtual int do_resize(void*, u32);                               // _38
	virtual int do_getSize(void*);                                   // _3C
	virtual u32 do_getFreeSize() { return mFreeSize; }               // _40 (weak)
	virtual void* do_getMaxFreeBlock() { return (void*)mSolidHead; } // _44 (weak)
	virtual u32 do_getTotalFreeSize() { return getFreeSize(); }      // _48 (weak)
	virtual void state_register(TState*, u32) const;                 // _54
	virtual bool state_compare(const TState&, const TState&) const;  // _58

	int adjustSize();
	void* allocFromHead(u32, int);
	void* allocFromTail(u32, int);

	static u32 getUsedSize(JKRSolidHeap* sldHeap)
	{
		// u32 totalFreeSize = sldHeap->getTotalFreeSize();
		return sldHeap->mHeapSize - sldHeap->getTotalFreeSize();
	}

	static JKRSolidHeap* create(u32, JKRHeap*, bool);

	static u32 getState_(TState* state) { return getState_buf_(state); }

	// _00     = VTBL
	// _00-_6C = JKRHeap
	u32 mFreeSize;    // _6C
	u8* mSolidHead;   // _70
	u8* mSolidTail;   // _74
	SolidList* mList; // _78
};

inline void* operator new(size_t size, void* mem) { return mem; } // fabricated?
void* operator new(size_t, JKRHeap*, int);
void* operator new(size_t byteCount, int p2);
void* operator new[](size_t, JKRHeap*, int);
void* operator new[](size_t byteCount, int p2);

static void JKRDefaultMemoryErrorRoutine(void* heap, u32 size, int alignment);

inline void* JKRAllocFromHeap(JKRHeap* heap, u32 size, int alignment) { return JKRHeap::alloc(size, alignment, heap); }

inline void* JKRAllocFromSysHeap(u32 size, int alignment)
{
	JKRHeap* systemHeap = JKRHeap::getSystemHeap();
	return systemHeap->alloc(size, alignment);
}

inline void JKRFreeToHeap(JKRHeap* heap, void* ptr) { JKRHeap::free(ptr, heap); }

inline void JKRFreeToSysHeap(void* ptr)
{
	JKRHeap* systemHeap = JKRHeap::getSystemHeap();
	systemHeap->free(ptr);
}

inline void i_JKRFree(void* ptr) { JKRHeap::free(ptr, nullptr); }

inline void JKRFree(void* pBuf) { JKRHeap::free(pBuf, nullptr); } // official inline

inline JKRHeap* JKRGetSystemHeap() { return JKRHeap::getSystemHeap(); }

inline JKRHeap* JKRGetCurrentHeap() { return JKRHeap::getCurrentHeap(); }

inline JKRExpHeap* makeExpHeap(size_t size, JKRHeap* heap, bool a) { return JKRExpHeap::create(size, heap, a); }
inline JKRSolidHeap* makeSolidHeap(size_t size, JKRHeap* heap, bool a) { return JKRSolidHeap::create(size, heap, a); }

#endif
