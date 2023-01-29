#include "types.h"
extern "C"{
/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void __dc_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __del_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void __new_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void __init_arr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1718
 * Size:	000030
 */

void* __copy(char *dest, char *src, size_t size)
{
	char *p;
	
	if (dest && size) {
		p = dest;
		do {
			*p = *src;
			++p;
			++src;
			--size;
		} while (size);
	}
	
	return(dest);
}
}
