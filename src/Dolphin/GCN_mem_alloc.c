#include "types.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800C23A8
 * Size:	0000B8
 */
void __sys_free(void* ptr)
{
	if (__OSCurrHeap == -1) {
		void* arenaLo;
		void* arenaHi;
		void* newHi;
		int currentHeap;

		OSReport("GCN_Mem_Alloc.c : InitDefaultHeap. No Heap Available\n");
		OSReport("Metrowerks CW runtime library initializing default heap\n");

		arenaLo = OSGetArenaLo();
		arenaHi = OSGetArenaHi();

		newHi = OSInitAlloc(arenaLo, arenaHi, 1);
		OSSetArenaLo(newHi);

		arenaHi = (void*)RoundDownTo20(arenaHi);
		newHi   = (void*)RoundUpTo20(newHi);

		currentHeap = OSCreateHeap(newHi, arenaHi);
		OSSetCurrentHeap(currentHeap);
		OSSetArenaLo(arenaHi);
	}

	OSFreeToHeap(__OSCurrHeap, ptr);
}
