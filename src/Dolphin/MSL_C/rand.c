#include "Dolphin/rand.h"

static u32 next = 1;

/*
 * --INFO--
 * Address:	800C9598
 * Size:	000008
 */
void srand(u32 seed) { next = seed; }

/*
 * --INFO--
 * Address:	800C95A0
 * Size:	000020
 */
int rand()
{
	next = next * 1103515245 + 12345;
	return ((next >> 16) & 0x7fff);
}
