#ifndef _JSYSTEM_JKR_JKRHEAP_H
#define _JSYSTEM_JKR_JKRHEAP_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSU/JSUList.h"

typedef void JKRHeapErrorHandler(void*, u32, int);

struct JKRHeap : public JKRDisposer {

	struct TState {
		~TState();
		void dump() const;
		static bool isVerbose();
		TState(const JKRHeap*, u32, bool);
		bool isCompareOnDestructed() const;
		const JKRHeap* getHeap() const;
		u32 getId() const;

		struct TLocation {
			TLocation();

			u32 _00; // _00
			int _04; // _04
		};
		struct TArgument {
			TArgument(const JKRHeap*, u32, bool);

			const JKRHeap* m_heap; // _00
			u32 _04;               // _04
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

	JKRHeap(void*, u32, JKRHeap*, bool);
	virtual ~JKRHeap();
	static bool initArena(char**, u32*, int);
	JKRHeap* becomeSystemHeap();
	JKRHeap* becomeCurrentHeap();
	void destroy();
	static void* alloc(u32, int, JKRHeap*);
	void* alloc(u32, int);
	static void free(void*, JKRHeap*);
	void free(void*);
	virtual void callAllDisposer();
	virtual u32 getHeapType();
	virtual bool check();
	void freeAll();
	void freeTail();
	void resize(void*, u32);
	u32 getFreeSize();
	u32 getTotalFreeSize();
	u8 changeGroupID(u8);
	u8 getCurrentGroupId();
	u32 getMaxAllocatableSize(int);
	static JKRHeap* findFromRoot(void*);
	JKRHeap* find(void*) const;
	u32 dispose(void*, u32);
	void dispose(void*, void*);
	void dispose();
	static void copyMemory(void*, void*, u32);
	static JKRHeapErrorHandler* setErrorHandler(JKRHeapErrorHandler*);
	virtual bool dump_sort();
	virtual bool dump();
	virtual void do_destroy();
	virtual void* do_alloc(u32, int);
	virtual void do_free(void*);
	virtual void do_freeAll();
	virtual void do_freeTail();
	virtual void do_fillFreeArea();
	virtual int do_resize(void*, u32);
	virtual int do_getSize(void*);
	virtual u32 do_getFreeSize();
	virtual void* do_getMaxFreeBlock();
	virtual u32 do_getTotalFreeSize();
	virtual u8 do_changeGroupID(u8);
	virtual u8 do_getCurrentGroupId();
	virtual void state_register(TState*, u32) const;
	virtual bool state_compare(const TState&, const TState&) const;
	static void state_dumpDifference(const TState&, const TState&);
	void state_dump(const TState*) const;

	OSMutexObject m_mutex;               // _18
	void* m_startAddress;                // _30
	void* m_endAddress;                  // _34
	u32 m_heapSize;                      // _38
	u8 m_fillFlag;                       // _3C
	u8 m_fillCheckFlag;                  // _3D
	u8 _3E[2];                           // _3E
	JSUPtrList _40;                      // _40
	JSUPtrLink _4C;                      // _4C
	JSUList<JKRDisposer> m_DisposerList; // _5C
	bool _68;                            // _68
	u8 _69;                              // _69

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
		u16 m_usageHeader; // _00

		/// This &'d with 0x7f is called "aln" by JKRExpHeap::dump
		u8 _02; // _02

		/// Called "gid" by JKRExpHeap::dump
		u8 m_groupID; // _03

		/// Called "size" by JKRExpHeap::dump
		u32 m_allocatedSpace; // _04

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

		u32 allocBack(u32, u8, u8, u8, u8);
		u32 allocFore(u32, u8, u8, u8, u8);
		void free(JKRExpHeap*);
		static u32 getHeapBlock(void*);
		void initiate(CMemBlock*, CMemBlock*, u32, u8, u8);
	};

	JKRExpHeap(void*, u32, JKRHeap*, bool);

	virtual ~JKRExpHeap();              // _00
	virtual u32 getHeapType();          // _08
	virtual bool check();               // _0C
	virtual bool dump_sort();           // _10
	virtual bool dump();                // _14
	virtual void do_destroy();          // _18
	virtual void* do_alloc(u32, int);   // _1C
	virtual void do_free(void*);        // _20
	virtual void do_freeAll();          // _24
	virtual void do_freeTail();         // _28
	virtual void do_fillFreeArea();     // _2C
	virtual int do_resize(void*, u32);  // _30
	virtual int do_getSize(void*);      // _34
	virtual u32 do_getFreeSize();       // _38
	virtual void* do_getMaxFreeBlock(); // _3C
	virtual u32 do_getTotalFreeSize();  // _40
	virtual u8 do_changeGroupID(u8);    // _44
	virtual u8 do_getCurrentGroupId();  // _48

	u32 allocFromHead(u32, int);
	u32 allocFromHead(u32);
	u32 allocFromTail(u32, int);
	u32 allocFromTail(u32);
	u32 appendUsedList(CMemBlock*);
	static JKRExpHeap* create(u32, JKRHeap*, bool);
	static JKRExpHeap* createRoot(int, bool);
	int freeGroup(u8);
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

void JKRDefaultMemoryErrorRoutine(void*, u32, int);

void* operator new(size_t, JKRHeap*, int);
void* operator new[](size_t, JKRHeap*, int);

#endif
