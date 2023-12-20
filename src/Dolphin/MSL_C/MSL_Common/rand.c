#include "Dolphin/rand.h"

static u32 next = 1;

/**
 * @note Address: 0x800C95A0
 * @note Size: 0x20
 */
int rand()
{
	next = next * 1103515245 + 12345;
	return ((next >> 16) & 0x7fff);
}

/**
 * @note Address: 0x800C9598
 * @note Size: 0x8
 */
void srand(u32 seed) { next = seed; }
