#include "types.h"
#include "Dolphin/os.h"
typedef struct HeapCell {
	struct HeapCell* prev;
	struct HeapCell* next;
	u32 size;
} HeapCell;

typedef struct Heap {
	s32 size;
	struct HeapCell* free;      // linked list of free cells
	struct HeapCell* allocated; // linked list of allocated cells
} Heap;

void* ArenaEnd;
void* ArenaStart;
int NumHeaps;
struct Heap* HeapArray;
volatile OSHeapHandle __OSCurrHeap = -1;

#define InRange(addr, start, end) ((u8*)(start) <= (u8*)(addr) && (u8*)(addr) < (u8*)(end))
#define OFFSET(addr, align)       (((u32)(addr) & ((align)-1)))

#define ALIGNMENT  32
#define MINOBJSIZE 64

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 * inserts 'cell' before 'neighbor' and returns 'cell'
 */
static inline void* DLAddFront(struct HeapCell* neighbor, struct HeapCell* cell)
{
	cell->next = neighbor;
	cell->prev = NULL;
	if (neighbor != NULL)
		neighbor->prev = cell;
	return cell;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void DLLookup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 * removes 'cell' from 'list' and returns 'list'
 */
static inline HeapCell* DLExtract(struct HeapCell* list, struct HeapCell* cell)
{
	if (cell->next != NULL)
		cell->next->prev = cell->prev;
	if (cell->prev == NULL)
		list = cell->next;
	else
		cell->prev->next = cell->next;
	return list;
}

/*
 * --INFO--
 * Address:	800EC210
 * Size:	0000AC
 */
static HeapCell* DLInsert(HeapCell* list, HeapCell* cell, void* unused /* needed to match OSFreeToHeap */)
{
	HeapCell* before = NULL;
	HeapCell* after  = list;

	while (after != NULL) {
		if (cell <= after)
			break;
		before = after;
		after  = after->next;
	}
	cell->next = after;
	cell->prev = before;
	if (after != NULL) {
		after->prev = cell;
		if ((u8*)cell + cell->size == (u8*)after) {
			cell->size += after->size;
			after      = after->next;
			cell->next = after;
			if (after != NULL)
				after->prev = cell;
		}
	}
	if (before != NULL) {
		before->next = cell;
		if ((u8*)before + before->size == (u8*)cell) {
			before->size += cell->size;
			before->next = after;
			if (after != NULL)
				after->prev = before;
		}
		return list;
	}
	return cell;
}
/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void DLOverlap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void DLSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void* OSAllocFromHeap(OSHeapHandle heap, u32 size)
{
	struct Heap* hd = &HeapArray[heap];
	s32 sizeAligned = OSRoundUp32B(ALIGNMENT + size);
	struct HeapCell* cell;
	struct HeapCell* oldTail;
	u32 leftoverSpace;

	// find first cell with enough capacity
	for (cell = hd->free; cell != NULL; cell = cell->next) {
		if (sizeAligned <= (s32)cell->size)
			break;
	}
	if (cell == NULL)
		return NULL;

	leftoverSpace = cell->size - sizeAligned;
	if (leftoverSpace < MINOBJSIZE) {
		// remove this cell from the free list
		hd->free = DLExtract(hd->free, cell);
	} else {
		// remove this cell from the free list and make a new cell out of the
		// remaining space
		struct HeapCell* newcell = (void*)((u8*)cell + sizeAligned);
		cell->size               = sizeAligned;
		newcell->size            = leftoverSpace;
		newcell->prev            = cell->prev;
		newcell->next            = cell->next;
		if (newcell->next != NULL)
			newcell->next->prev = newcell;
		if (newcell->prev != NULL)
			newcell->prev->next = newcell;
		else
			hd->free = newcell;
	}

	// add the cell to the beginning of the allocated list
	hd->allocated = DLAddFront(hd->allocated, cell);

	return (u8*)cell + ALIGNMENT;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void OSAllocFixed(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC2BC
 * Size:	00007C
 */
void OSFreeToHeap(OSHeapHandle heap, void* ptr)
{
	HeapCell* cell = (void*)((u8*)ptr - ALIGNMENT);
	Heap* hd       = &HeapArray[heap];
	HeapCell* list = hd->allocated;

	// remove cell from the allocated list
	// hd->allocated = DLExtract(hd->allocated, cell);
	if (cell->next != NULL)
		cell->next->prev = cell->prev;
	if (cell->prev == NULL)
		list = cell->next;
	else
		cell->prev->next = cell->next;
	hd->allocated = list;
	hd->free      = DLInsert(hd->free, cell, list);
}

/*
 * --INFO--
 * Address:	800EC338
 * Size:	000010
 */
OSHeapHandle OSSetCurrentHeap(OSHeapHandle heap)
{
	OSHeapHandle old = __OSCurrHeap;

	__OSCurrHeap = heap;
	return old;
}

/*
 * --INFO--
 * Address:	800EC348
 * Size:	000070
 */
void* OSInitAlloc(void* arenaStart, void* arenaEnd, int maxHeaps)
{
	u32 totalSize = maxHeaps * sizeof(struct Heap);
	int i;

	HeapArray = arenaStart;
	NumHeaps  = maxHeaps;

	for (i = 0; i < NumHeaps; i++) {
		Heap* heap = &HeapArray[i];

		heap->size = -1;
		heap->free = heap->allocated = NULL;
	}

	__OSCurrHeap = -1;

	arenaStart = (u8*)HeapArray + totalSize;
	arenaStart = (void*)OSRoundUp32B(arenaStart);

	ArenaStart = arenaStart;
	ArenaEnd   = (void*)OSRoundDown32B(arenaEnd);

	return arenaStart;
}

/*
 * --INFO--
 * Address:	800EC3B8
 * Size:	00006C
 */
OSHeapHandle OSCreateHeap(void* start, void* end)
{
	int i;
	HeapCell* cell = (void*)OSRoundUp32B(start);

	end = (void*)OSRoundDown32B(end);
	for (i = 0; i < NumHeaps; i++) {
		Heap* hd = &HeapArray[i];

		if (hd->size < 0) {
			hd->size      = (u8*)end - (u8*)cell;
			cell->prev    = NULL;
			cell->next    = NULL;
			cell->size    = hd->size;
			hd->free      = cell;
			hd->allocated = NULL;
			return i;
		}
	}
	return -1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void OSDestroyHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void OSAddToHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000360
 */
s32 OSCheckHeap(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void OSReferentSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void OSDumpHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void OSVisitAllocated(void)
{
	// UNUSED FUNCTION
}
