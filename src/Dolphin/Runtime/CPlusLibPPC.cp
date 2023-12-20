#include "types.h"
extern "C"{

/**
 * @note Address: 0x800C1718
 * @note Size: 0x30
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

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void __init_arr(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void __new_arr(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void __del_arr(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void __dc_arr(void)
{
	// UNUSED FUNCTION
}

}
