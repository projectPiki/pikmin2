#include "types.h"
#include "Dolphin/os.h"

// nonmatching

/*
 * --INFO--
 * Address:	800C23A8
 * Size:	0000B8
 */
extern int __OSCurrHeap;
extern int OSGetArenaLo();
extern int OSGetArenaHi();
extern int OSInitAlloc(int, uint, int);
extern void OSSetArenaLo(uint);
extern int OSCreateHeap(int, uint);
extern uint OSSetCurrentHeap();
extern void OSFreeToHeap(int, int);
void __sys_free(uint param_1)

{
	uint uVar1;
	uint uVar2;
	int iVar3;

	if (__OSCurrHeap == -1) {
		OSReport("GCN_Mem_Alloc.c : InitDefaultHeap. No Heap Available\n");
		OSReport("Metrowerks CW runtime library initializing default heap\n");
		uVar1 = OSGetArenaLo();
		uVar2 = OSGetArenaHi();
		iVar3 = OSInitAlloc(uVar1, uVar2, 1);
		OSSetArenaLo(uVar2);
		OSCreateHeap(iVar3 + 0x1fU & 0xffffffe0, uVar2 & 0xffffffe0);
		OSSetCurrentHeap();
		OSSetArenaLo(uVar2 & 0xffffffe0);
	}
	OSFreeToHeap(__OSCurrHeap, param_1);
	return;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void __sys_alloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void InitDefaultHeap(void)
{
	// UNUSED FUNCTION
}
