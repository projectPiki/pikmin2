#ifndef _JSYSTEM_JKR_JKRHEAP_H
#define _JSYSTEM_JKR_JKRHEAP_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSU/JSUPtrLink.h"
#include "JSystem/JSU/JSUPtrList.h"

typedef void JKRHeapErrorHandler(void*, ulong, int);

struct JKRHeap : public JKRDisposer {

	struct TState {
		~TState();
		void dump() const;
		static bool isVerbose();
		TState(const JKRHeap*, ulong, bool);
		bool isCompareOnDestructed() const;
		const JKRHeap* getHeap() const;
		u32 getId() const;

		struct TLocation {
			TLocation();

			u32 _00; // _00
			int _04; // _04
		};
		struct TArgument {
			TArgument(const JKRHeap*, ulong, bool);

			const JKRHeap* m_heap; // _00
			ulong _04;             // _04
			bool _08;              // _08
		};

		u32 _00;                      // _00
		u32 _04;                      // _04
		u8 _08[0x8];                  // _08
		const JKRHeap* m_heap;        // _10
		u32 m_id;                     // _14
		bool m_isCompareOnDestructed; // _18
		u8 _19[3];                    // _19
		u32 _1C;                      // _1C
		int _20;                      // _20

		static bool bVerbose;
	};

	JKRHeap(void*, ulong, JKRHeap*, bool);
	virtual ~JKRHeap();
	static bool initArena(char**, ulong*, int);
	JKRHeap* becomeSystemHeap();
	JKRHeap* becomeCurrentHeap();
	void destroy();
	static void* alloc(ulong, int, JKRHeap*);
	void* alloc(ulong, int);
	static void free(void*, JKRHeap*);
	void free(void*);
	virtual void callAllDisposer();
	virtual u32 getHeapType();
	virtual bool check();
	void freeAll();
	void freeTail();
	void resize(void*, ulong);
	ulong getFreeSize();
	uint getTotalFreeSize();
	uchar changeGroupID(uchar);
	uchar getCurrentGroupId();
	ulong getMaxAllocatableSize(int);
	static JKRHeap* findFromRoot(void*);
	JKRHeap* find(void*) const;
	u32 dispose(void*, ulong);
	void dispose(void*, void*);
	void dispose();
	static void copyMemory(void*, void*, ulong);
	static JKRHeapErrorHandler* setErrorHandler(JKRHeapErrorHandler*);
	virtual bool dump_sort();
	virtual bool dump();
	virtual void do_destroy();
	virtual void* do_alloc(ulong, int);
	virtual void do_free(void*);
	virtual void do_freeAll();
	virtual void do_freeTail();
	virtual void do_fillFreeArea();
	virtual int do_resize(void*, ulong);
	virtual int do_getSize(void*);
	virtual ulong do_getFreeSize();
	virtual void* do_getMaxFreeBlock();
	virtual ulong do_getTotalFreeSize();
	virtual uchar do_changeGroupID(uchar);
	virtual uchar do_getCurrentGroupId();
	virtual void state_register(TState*, ulong) const;
	virtual bool state_compare(const TState&, const TState&) const;
	static void state_dumpDifference(const TState&, const TState&);
	void state_dump(const TState*) const;

	OSMutexObject m_mutex; // _18
	void* m_startAddress;  // _30
	void* m_endAddress;    // _34
	ulong m_heapSize;      // _38
	u8 m_fillFlag;         // _3C
	u8 m_fillCheckFlag;    // _3D
	u8 _3E[2];             // _3E
	JSUPtrList _40;        // _40
	JSUPtrLink _4C;        // _4C
	JSUPtrList _5C;        // _5C
	bool _68;              // _68
	u8 _69;                // _69

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
};

struct JKRExpHeap : public JKRHeap {
	struct CMemBlock {
		ushort m_usageHeader; // _00

		/// This &'d with 0x7f is called "aln" by JKRExpHeap::dump
		uchar _02; // _02

		/// Called "gid" by JKRExpHeap::dump
		uchar m_groupID; // _03

		/// Called "size" by JKRExpHeap::dump
		ulong m_allocatedSpace; // _04

		/*
		 * Called "prev_ptr" by JKRExpHeap::dump.
		 * Sodium called this "headwards".
		 */
		CMemBlock* m_prevPtr; // _08

		/*
		 * Called "next_ptr" by JKRExpHeap::dump.
		 * Sodium called this "tailwards".
		 */
		CMemBlock* m_nextPtr; // _0C

		u32 allocBack(ulong, uchar, uchar, uchar, uchar);
		u32 allocFore(ulong, uchar, uchar, uchar, uchar);
		void free(JKRExpHeap*);
		static u32 getHeapBlock(void*);
		void initiate(CMemBlock*, CMemBlock*, ulong, uchar, uchar);
	};

	JKRExpHeap(void*, ulong, JKRHeap*, bool);

	virtual ~JKRExpHeap();                 // _00
	virtual u32 getHeapType();             // _08
	virtual bool check();                  // _0C
	virtual bool dump_sort();              // _10
	virtual bool dump();                   // _14
	virtual void do_destroy();             // _18
	virtual void* do_alloc(ulong, int);    // _1C
	virtual void do_free(void*);           // _20
	virtual void do_freeAll();             // _24
	virtual void do_freeTail();            // _28
	virtual void do_fillFreeArea();        // _2C
	virtual int do_resize(void*, ulong);   // _30
	virtual int do_getSize(void*);         // _34
	virtual ulong do_getFreeSize();        // _38
	virtual void* do_getMaxFreeBlock();    // _3C
	virtual ulong do_getTotalFreeSize();   // _40
	virtual uchar do_changeGroupID(uchar); // _44
	virtual uchar do_getCurrentGroupId();  // _48

	u32 allocFromHead(ulong, int);
	u32 allocFromHead(ulong);
	u32 allocFromTail(ulong, int);
	u32 allocFromTail(ulong);
	u32 appendUsedList(CMemBlock*);
	static JKRExpHeap* create(ulong, JKRHeap*, bool);
	static JKRExpHeap* createRoot(int, bool);
	int freeGroup(uchar);
	void joinTwoBlocks(CMemBlock*);
	void recycleFreeBlock(CMemBlock*);
	void removeFreeBlock(CMemBlock*);
	void setFreeBlock(CMemBlock*, CMemBlock*, CMemBlock*);

	u8 _6C;                    // _6C
	u8 m_currentGroupID;       // _6D
	u8 _6E;                    // _6E
	u8 _70[8];                 // _70
	CMemBlock* m_head;         // _78
	CMemBlock* m_tail;         // _7C
	CMemBlock* m_headUsedList; // _80
	CMemBlock* m_tailUsedList; // _84
};

void JKRDefaultMemoryErrorRoutine(void*, ulong, int);

void* operator new(size_t, JKRHeap*, int);

#endif
