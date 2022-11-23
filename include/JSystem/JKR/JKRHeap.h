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

			const JKRHeap* m_heap; // _00
			u32 _04;               // _04
			bool _08;              // _08
		};

		TState(const JKRHeap*, u32, bool);
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

		TState* _00;                  // _00
		u32 _04;                      // _04, plausibly TLocation when combined with _00
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

	// Static
	static bool initArena(char**, u32*, int);
	static void* alloc(u32, int, JKRHeap*);
	static void copyMemory(void*, void*, u32);
	static void free(void*, JKRHeap*);
	static void state_dumpDifference(const TState&, const TState&);
	static JKRHeap* findFromRoot(void*);
	static JKRHeapErrorHandler* setErrorHandler(JKRHeapErrorHandler*);
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

	OSMutexObject m_mutex;               // _18
	void* m_startAddress;                // _30
	void* m_endAddress;                  // _34
	u32 m_heapSize;                      // _38
	u8 m_fillFlag;                       // _3C
	u8 m_fillCheckFlag;                  // _3D
	u8 _3E[2];                           // _3E
	JSUPtrList _40;                      // _40
	JSUPtrLink _4C;                      // _4C
	JSUList<JKRDisposer> m_disposerList; // _5C
	bool _68;                            // _68
	u8 _69;                              // _69
};

inline JKRHeap* getCurrentHeap() { return JKRHeap::sCurrentHeap; }

inline void* JKRAllocFromSysHeap(u32 size, int alignment)
{
	JKRHeap* systemHeap = JKRHeap::sSystemHeap;
	return systemHeap->alloc(size, alignment);
}

struct JKRExpHeap : public JKRHeap {
	struct CMemBlock {
		u16 m_usageHeader; // _00

		/// This &'d with 0x7f is called "aln" by JKRExpHeap::dump
		u8 _02; // _02

		/// Called "gid" by JKRExpHeap::dump
		u8 m_groupID; // _03

		/// Called "size" by JKRExpHeap::dump
		int m_allocatedSpace; // _04

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

		CMemBlock* allocBack(u32, u8, u8, u8, u8);
		CMemBlock* allocFore(u32, u8, u8, u8, u8);
		void* free(JKRExpHeap*);
		static CMemBlock* getHeapBlock(void*);
		void initiate(CMemBlock*, CMemBlock*, u32, u8, u8);
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
	virtual void state_register(TState*, unsigned long) const;      // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58

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

	// unused/inlined:
	void removeUsedBlock(CMemBlock*);

	u8 _6C;                    // _6C
	u8 m_currentGroupID;       // _6D
	u8 _6E;                    // _6E
	u8 _70[8];                 // _70
	CMemBlock* m_head;         // _78
	CMemBlock* m_tail;         // _7C
	CMemBlock* m_headUsedList; // _80
	CMemBlock* m_tailUsedList; // _84
};

struct JKRSolidHeap : public JKRHeap {
	JKRSolidHeap(void*, u32, JKRHeap*, bool);

	virtual ~JKRSolidHeap();                                        // _08
	virtual u32 getHeapType();                                      // _10 (weak)
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
	virtual u32 do_getFreeSize();                                   // _40 (weak)
	virtual void* do_getMaxFreeBlock();                             // _44 (weak)
	virtual u32 do_getTotalFreeSize();                              // _48 (weak)
	virtual void state_register(TState*, u32) const;                // _54
	virtual bool state_compare(const TState&, const TState&) const; // _58

	void adjustSize();
	void* allocFromHead(unsigned long, int);
	void* allocFromTail(unsigned long, int);

	static JKRSolidHeap* create(unsigned long, JKRHeap*, bool);

	u32 m_freeSize; // _6C
	void* _70;      // _70
	void* _74;      // _74
	u32 _78;        // _78
};

void JKRDefaultMemoryErrorRoutine(void*, u32, int);

inline void* operator new(size_t size, void* mem) { return mem; } // fabricated?
void* operator new(size_t, JKRHeap*, int);
void* operator new(u32 byteCount, int p2);
void* operator new[](size_t, JKRHeap*, int);
void* operator new[](u32 byteCount, int p2);

#endif
