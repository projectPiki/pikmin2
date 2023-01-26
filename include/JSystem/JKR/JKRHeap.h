#ifndef _JSYSTEM_JKR_JKRHEAP_H
#define _JSYSTEM_JKR_JKRHEAP_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

typedef void JKRHeapErrorHandler(void*, u32, int);

struct JKRHeap : public JKRDisposer {

	struct TState {
		struct TLocation {
			TLocation();

			void* _00; // _00
			int _04;   // _04
		};

		struct TArgument {
			TArgument(const JKRHeap*, u32, bool);

			const JKRHeap* mHeap; // _00
			u32 _04;              // _04
			bool _08;             // _08
		};

		TState(const JKRHeap*, u32, bool);
		TState(JKRHeap* heap)
		    : _00(nullptr)
		    , _04(0)
		    , mHeap(heap)
		{
			mId                    = 0xFFFFFFFF;
			mIsCompareOnDestructed = true;
			_1C                    = 0;
			_20                    = -1;
		}

		~TState();
		void dump() const;
		static bool isVerbose();
		bool isCompareOnDestructed() const;
		const JKRHeap* getHeap() const;
		u32 getId() const;

		// unused/inlined:
		TState(const JKRHeap::TState::TArgument& arg, const JKRHeap::TState::TLocation& location);
		TState(const JKRHeap::TState& other, bool p2);
		TState(const JKRHeap::TState& other, const JKRHeap::TState::TLocation& location, bool p3);

		static bool bVerbose;

		TState* _00;                 // _00
		u32 _04;                     // _04, plausibly TLocation when combined with _00
		u8 _08[0x8];                 // _08
		const JKRHeap* mHeap;        // _10
		u32 mId;                     // _14
		bool mIsCompareOnDestructed; // _18
		u8 _19[3];                   // _19
		u32 _1C;                     // _1C
		int _20;                     // _20
	};

	JKRHeap(void*, u32, JKRHeap*, bool);

	/////////////// VTABLE
	virtual ~JKRHeap();                                             // _08
	virtual void callAllDisposer();                                 // _0C
	virtual u32 getHeapType() = 0;                                  // _10
	virtual bool check()      = 0;                                  // _14
	virtual bool dump_sort();                                       // _18 (weak)
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
	virtual u8 do_changeGroupID(u8);                                // _4C (weak)
	virtual u8 do_getCurrentGroupId();                              // _50 (weak)
	virtual void state_register(TState*, u32) const;                // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58
	virtual void state_dump(const TState*) const;                   // _5C
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
	void resize(void*, u32);
	u32 getFreeSize();
	u32 getTotalFreeSize();
	u8 changeGroupID(u8);
	u8 getCurrentGroupId();
	u32 getMaxAllocatableSize(int);
	JKRHeap* find(void*) const;
	u32 dispose(void*, u32);
	void dispose(void*, void*);
	void dispose();

	// Inlined/fabricated
	inline void* JKRAllocFromHeap(u32 size, int alignment) { return JKRHeap::alloc(size, alignment, this); }
	void* getStartAddr() const { return mStartAddress; }
	void* getEndAddr() const { return mEndAddress; }

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
	/////////////// METHODS END

	static u8 sDefaultFillFlag;
	static u8 sDefaultFillCheckFlag;
	static JKRHeap* sSystemHeap;
	static JKRHeap* sCurrentHeap;
	static JKRHeap* sRootHeap;
	static JKRHeapErrorHandler* mErrorHandler;
	static u8* mCodeStart;
	static u8* mCodeEnd;
	static u8* mUserRamStart;
	static u8* mUserRamEnd;
	static u32 mMemorySize;
	static u32 sParentHeapFreeSize_Last;
	static u32 sParentHeapFreeSize;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	OSMutexObject mMutex;               // _18
	void* mStartAddress;                // _30
	void* mEndAddress;                  // _34
	u32 mHeapSize;                      // _38
	u8 mFillFlag;                       // _3C
	u8 mFillCheckFlag;                  // _3D
	u8 _3E[2];                          // _3E
	JSUTree<JKRHeap> mTree;             // _40
	JSUList<JKRDisposer> mDisposerList; // _5C
	bool _68;                           // _68
	u8 _69;                             // _69
};

inline JKRHeap* getCurrentHeap() { return JKRHeap::sCurrentHeap; }

inline void* JKRAllocFromSysHeap(u32 size, int alignment)
{
	JKRHeap* systemHeap = JKRHeap::sSystemHeap;
	return systemHeap->alloc(size, alignment);
}

struct JKRExpHeap : public JKRHeap {
	struct CMemBlock {
		CMemBlock* allocBack(u32, u8, u8, u8, u8);
		CMemBlock* allocFore(u32, u8, u8, u8, u8);
		void* free(JKRExpHeap*);
		static CMemBlock* getHeapBlock(void*);
		void initiate(CMemBlock*, CMemBlock*, u32, u8, u8);

		u16 mUsageHeader;    // _00
		u8 _02;              // _02, this &'d with 0x7f is called 'aln' by JKRExpHeap::dump
		u8 mGroupID;         // _03
		int mAllocatedSpace; // _04
		CMemBlock* mPrevPtr; // _08
		CMemBlock* mNextPtr; // _0C
	};

	JKRExpHeap(void*, u32, JKRHeap*, bool);

	virtual ~JKRExpHeap();                                          // _08
	virtual u32 getHeapType();                                      // _10 (weak)
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
	virtual u8 do_getCurrentGroupId();                              // _50 (weak)
	virtual void state_register(TState*, u32) const;                // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58

	u32 allocFromHead(u32, int);
	u32 allocFromHead(u32);
	u32 allocFromTail(u32, int);
	u32 allocFromTail(u32);
	u32 appendUsedList(CMemBlock*);
	static JKRExpHeap* create(u32, JKRHeap*, bool);
	static JKRExpHeap* createRoot(int, bool);
	int freeGroup(u8 groupID);
	void joinTwoBlocks(CMemBlock*);
	void recycleFreeBlock(CMemBlock*);
	void removeFreeBlock(CMemBlock*);
	void setFreeBlock(CMemBlock*, CMemBlock*, CMemBlock*);

	// unused/inlined:
	void removeUsedBlock(CMemBlock*);

	// _00     = VTBL
	// _00-_6C = JKRHeap
	u8 _6C;                   // _6C
	u8 mCurrentGroupID;       // _6D
	u8 _6E;                   // _6E
	u8 _70[8];                // _70
	CMemBlock* mHead;         // _78
	CMemBlock* mTail;         // _7C
	CMemBlock* mHeadUsedList; // _80
	CMemBlock* mTailUsedList; // _84
};

inline JKRExpHeap* makeExpHeap(size_t size, JKRHeap* heap, bool a) { return JKRExpHeap::create(size, heap, a); }

struct JKRSolidHeap : public JKRHeap {
	JKRSolidHeap(void*, u32, JKRHeap*, bool);

	virtual ~JKRSolidHeap();                                        // _08
	virtual u32 getHeapType() { return 'SLID'; }                    // _10 (weak)
	virtual bool check();                                           // _14
	virtual bool dump();                                            // _1C
	virtual void do_destroy();                                      // _20
	virtual void* do_alloc(u32, int);                               // _24
	virtual void do_free(void*);                                    // _28
	virtual void do_freeAll();                                      // _2C
	virtual void do_freeTail();                                     // _30
	virtual void do_fillFreeArea();                                 // _34
	virtual int do_resize(void*, u32);                              // _38
	virtual int do_getSize(void*);                                  // _3C
	virtual u32 do_getFreeSize() { return mFreeSize; }              // _40 (weak)
	virtual void* do_getMaxFreeBlock() { return (void*)_70; }       // _44 (weak)
	virtual u32 do_getTotalFreeSize() { return getFreeSize(); }     // _48 (weak)
	virtual void state_register(TState*, u32) const;                // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58

	u32 adjustSize();
	void* allocFromHead(u32, int);
	void* allocFromTail(u32, int);

	static JKRSolidHeap* create(u32, JKRHeap*, bool);

	// _00     = VTBL
	// _00-_6C = JKRHeap
	u32 mFreeSize; // _6C
	u32 _70;       // _70
	u32 _74;       // _74
	u32 _78;       // _78
};

inline JKRHeap* JKRGetCurrentHeap() { return JKRHeap::getCurrentHeap(); }

void JKRDefaultMemoryErrorRoutine(void*, u32, int);

inline void* operator new(size_t size, void* mem) { return mem; } // fabricated?
void* operator new(size_t, JKRHeap*, int);
void* operator new(u32 byteCount, int p2);
void* operator new[](size_t, JKRHeap*, int);
void* operator new[](u32 byteCount, int p2);

#endif
