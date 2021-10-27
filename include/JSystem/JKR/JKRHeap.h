#ifndef _JSYSTEM_JKRHEAP_H
#define _JSYSTEM_JKRHEAP_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
// #include "JSystem/JSU/JSUPtrLink.h"
// #include "JSystem/JSU/JSUPtrList.h"

typedef void JKRHeapErrorHandler(void*, ulong, int);

struct JKRHeap : public JKRDisposer {

	struct TState {
		~TState();
		static bool isVerbose();
		TState(JKRHeap*, ulong, bool);

		struct TLocation {
			TLocation();

			u32 _00; // _00
			int _04; // _04
		};
		struct TArgument {
			TArgument(JKRHeap*, ulong, bool);

			JKRHeap* m_heap; // _00
			ulong _04;       // _04
			bool _08;        // _08
		};

		u32 _00; // _00
		u32 _04; // _04
		u8 _08[0x8]; // _08
		JKRHeap* m_heap; // _10
		u32 m_id;        // _14
		bool m_isCompareOnDestructed; // _18
		u8 _19[3]; // _19
		u32 _1C;   // _1C
		int _20;   // _20

		static bool bVerbose;
	};

	JKRHeap(void*, ulong, JKRHeap*, bool);
	~JKRHeap();
	static bool initArena(char**, ulong*, int);
	JKRHeap* becomeSystemHeap();
	JKRHeap* becomeCurrentHeap();
	void destroy();
	static void* alloc(ulong, int, JKRHeap*);
	void* alloc(ulong, int);
	static void free(void*, JKRHeap*);
	void free(void*);
	void callAllDisposer();
	void freeAll();
	void freeTail();
	void resize(void*, ulong);
	ulong getFreeSize();
	uint getTotalFreeSize();
	void changeGroupID(uchar);
	u8 do_changeGroupID(uchar);
	u8 getCurrentGroupId();
	uint getMaxAllocatableSize(int);
	static u32* findFromRoot(void*);
	u32 dispose(void*, ulong);
	void dispose(void*, void*);
	void dispose();
	static void copyMemory(void*, void*, ulong);
	static void setErrorHandler(JKRHeapErrorHandler*);
	static void state_dumpDifference(TState const&, TState const&);
	bool dump_sort();


	u8 m_mutexObject[0x18]; // _18
	void* m_startAddress;   // _30
	void* m_endAddress;     // _34
	ulong m_heapSize;       // _38
	u8 m_fillFlag;          // _3C
	u8 m_fillCheckFlag;     // _3D
	u8 _3E[2];              // _3E
	// JSUPtrList<JKRHeap> _40; // _40
	u8 _40[0xC];            // _40
	// JSUPtrLink<JKRHeap> _4C; // _4C
	u8 _4C[0x10];           // _4C
	// JSUPtrList<JKRHeap> _5C; // _5C
	u8 _5C[0xC];            // _5C
	bool _68;               // _68
	u8 _69;                 // _69

	static u8 sDefaultFillFlag;
	static u8 sDefaultFillCheckFlag;
	static JKRHeap* sSystemHeap;
	static JKRHeap* sCurrentHeap;
	static JKRHeap* sRootHeap;
	static JKRHeapErrorHandler* mErrorHandler;
	static u32 mCodeStart;
	static u32 mCodeEnd;
	static u32 mUserRamStart;
	static u32 mUserRamEnd;
	static u32 mMemorySize;
};

void JKRDefaultMemoryErrorRoutine(void*, ulong, int);

void* operator new(size_t, JKRHeap*, int);

#endif
